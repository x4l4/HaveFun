/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UCCCheatManager.h
// Date: 06/16/2011 @ 05:19:40.509
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct UCCCheatManager_execListAbility_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execListAbilityShop_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execGetAvailableAbilities_Parms
{
	TArray< int > ReturnValue; // CPF_ReturnParm
};// FUNC_Exec FUNC_Native

struct UCCCheatManager_execEndAbilityShopping_Parms
{
	int Id;
};// FUNC_Exec FUNC_Native

struct UCCCheatManager_execBuyAbility_Parms
{
	int Id;
};// FUNC_Exec FUNC_Native

struct UCCCheatManager_execStartAbilityShopping_Parms
{
	int NpcId;
};// FUNC_Exec FUNC_Native

struct UCCCheatManager_execFixShadow_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execListClanMembers_Parms
{
	int Id;
};// FUNC_Exec

struct UCCCheatManager_execListClans_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execListGroupMembers_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execGetClanList_Parms
{
	TArray< struct FCheatClanInfo > ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct UCCCheatManager_execGetGroupMembers_Parms
{
	TArray< int > ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct UCCCheatManager_execViewNextBot_Parms
{
	int Dir;
};// FUNC_Exec

struct UCCCheatManager_execEndSpectator_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execStartSpectator_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execEndDebugSpectator_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execStartDebugSpectator_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execpp_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execEndPause_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execstartPause_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execToggleSpectator_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execTogglePause_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execExtractItemsFromFile_Parms
{
	struct FString Path;
};// FUNC_Exec FUNC_Native

struct UCCCheatManager_execAddItemToXML_Parms
{
	struct FString Path;
	int Id;
};// FUNC_Exec FUNC_Native

struct UCCCheatManager_execImportXMLDB_Parms
{
	struct FString Path;
};// FUNC_Exec FUNC_Native

struct UCCCheatManager_execNativeClassHack_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execai_removebot_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execai_addbot_Parms
{
	int TeamNum;
	struct FString rosterId;
};// FUNC_Exec

struct UCCCheatManager_execai_sleep_Parms
{
	float Val;
};// FUNC_Exec

struct UCCCheatManager_execai_invis_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execUDSManagerStat_Parms
{
	int InLevel;
};// FUNC_Exec

struct UCCCheatManager_execRealmSelectorStat_Parms
{
	int InLevel;
};// FUNC_Exec

struct UCCCheatManager_execBroadcastMovementStat_Parms
{
	int InLevel;
};// FUNC_Exec

struct UCCCheatManager_execBroadcastVoiceStat_Parms
{
	int InLevel;
};// FUNC_Exec

struct UCCCheatManager_execBroadcastStat_Parms
{
	int InLevel;
};// FUNC_Exec

struct UCCCheatManager_execYakaStat_Parms
{
	int InLevel;
};// FUNC_Exec

struct UCCCheatManager_execymUDSTestConnect_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymUDSClose_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymUDSFree_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymUDSStart_Parms
{
	int InUdsId;
	struct FString InMapData;
	struct FString InYakaHost;
	int InYakaPort;
};// FUNC_Exec

struct UCCCheatManager_execymUDSReadyForInteraction_Parms
{
	struct FString InServerName;
};// FUNC_Exec

struct UCCCheatManager_execymBuyBackpackTabResponse_Parms
{
	unsigned char InReason;
};// FUNC_Exec

struct UCCCheatManager_execymBuyBackpackTab_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymBuySoldItemResult_Parms
{
	int InItemId;
	int InCount;
};// FUNC_Exec

struct UCCCheatManager_execymBuySoldItem_Parms
{
	int InItemId;
	int InStackCount;
};// FUNC_Exec

struct UCCCheatManager_execymDeleteSoldShopItems_Parms
{
	TArray< int > InItems;
};// FUNC_Exec

struct UCCCheatManager_execymAddSoldShopItem_Parms
{
	struct FItemDescription InItem;
	int InCount;
	int InPrice;
};// FUNC_Exec

struct UCCCheatManager_execymInitSoldShopItems_Parms
{
	TArray< struct FInitSoldShopItems_ItemDesc > InItems;
};// FUNC_Exec

struct UCCCheatManager_execymSellItem_Parms
{
	int Inm_item;
	int Inm_count;
};// FUNC_Exec

struct UCCCheatManager_execymBuyPremiumWeaponColorsResponse_Parms
{
	unsigned char InReason;
};// FUNC_Exec

struct UCCCheatManager_execymBuyPremiumWeaponColors_Parms
{
	TArray< int > InBoughtClassWeaponColors;
	TArray< int > InBoughtGeneralWeaponColors;
	TArray< int > InBoughtPistolWeaponColors;
};// FUNC_Exec

struct UCCCheatManager_execymInvalidBuyItemResponse_Parms
{
	unsigned char InReason;
};// FUNC_Exec

struct UCCCheatManager_execymBuyPremiumStuffResponse_Parms
{
	unsigned char InReason;
};// FUNC_Exec

struct UCCCheatManager_execymBuyPremiumStuff_Parms
{
	TArray< int > InBoughtAppearanceElementsIds;
	TArray< int > InBoughtItemTemplateIds;
	TArray< int > InBoughtDynamicItemColorWithPriceIds;
};// FUNC_Exec

struct UCCCheatManager_execymBuyItemInRareShop_Parms
{
	int InTemplateId;
	int InStack;
	unsigned char InBackpackPage;
};// FUNC_Exec

struct UCCCheatManager_execymBuyItemInClanHall_Parms
{
	int InTemplateId;
	int InStack;
	unsigned char InBackpackPage;
};// FUNC_Exec

struct UCCCheatManager_execymBuyPremiumItem_Parms
{
	int InTemplateId;
	int InStack;
	unsigned char InBackpackPage;
};// FUNC_Exec

struct UCCCheatManager_execymBuyItem_Parms
{
	int InTemplateId;
	int InStack;
	unsigned char InBackpackPage;
};// FUNC_Exec

struct UCCCheatManager_execymTradeFinished_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymTradeSubmited_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymTradeSubmit_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymTradeOfferCanceled_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymTradeOfferCancel_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymTradeOffered_Parms
{
	TArray< struct FItemDescription > InItems;
	int InCash;
};// FUNC_Exec

struct UCCCheatManager_execymTradeOffer_Parms
{
	TArray< int > InItemIds;
	int InCash;
};// FUNC_Exec

struct UCCCheatManager_execymTradeCanceled_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymTradeCancel_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymTradeStarted_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymTradeRequestFrom_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymTradeError_Parms
{
	unsigned char InResponse;
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymTradeRequestTo_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymTournamentStatistics_Parms
{
	unsigned char InTournamentType;
	TArray< struct FDivisionStatistics > InDivisionsStatistics;
};// FUNC_Exec

struct UCCCheatManager_execymTournamentStatisticsRequest_Parms
{
	unsigned char InTournamentType;
};// FUNC_Exec

struct UCCCheatManager_execymUnbanFromTournament_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymBanFromTournament_Parms
{
	struct FServerDateTime InBanExpirationDate;
	struct FString InReason;
};// FUNC_Exec

struct UCCCheatManager_execymTournamentFinished_Parms
{
	unsigned char InTournamentType;
	unsigned char InTournamentOrderType;
	int InTeamWinnerId;
};// FUNC_Exec

struct UCCCheatManager_execymTournamentCanceled_Parms
{
	unsigned char InTournamentType;
};// FUNC_Exec

struct UCCCheatManager_execymTournamentGameResult_Parms
{
	unsigned char InTournamentType;
	unsigned char InTournamentOrderType;
	unsigned char InStageNumber;
	unsigned char InGameNumber;
	unsigned char InResult;
	int InScore;
};// FUNC_Exec

struct UCCCheatManager_execymTournamentInstanceSessionStarted_Parms
{
	int InInstanceId;
	int InSessionId;
	unsigned char InTournamentType;
};// FUNC_Exec

struct UCCCheatManager_execymTournamentRegistrationStarted_Parms
{
	unsigned char InTournamentType;
	struct FServerDateTime InStartTournamentTime;
	unsigned long InIsAllowRegistration : 1;
};// FUNC_Exec

struct UCCCheatManager_execymTournamentRegistrationNotification_Parms
{
	unsigned char InTournamentType;
	struct FServerDateTime InStartRegistrationTime;
};// FUNC_Exec

struct UCCCheatManager_execymUnregisterFromTournamentResponse_Parms
{
	unsigned char InResponse;
	unsigned char InTournamentType;
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymUnregisterFromTournament_Parms
{
	unsigned char InToutnamentType;
};// FUNC_Exec

struct UCCCheatManager_execymRegisterToTournamentResponse_Parms
{
	unsigned char InResponse;
	int InParameterId;
};// FUNC_Exec

struct UCCCheatManager_execymRegisterToTournament_Parms
{
	unsigned char InToutnamentType;
	struct FString InTeamName;
	TArray< int > InTeammates;
};// FUNC_Exec

struct UCCCheatManager_execymSelectCharacterTitle_Parms
{
	int InTitleId;
};// FUNC_Exec

struct UCCCheatManager_execymNewCharacterTitleUnlocked_Parms
{
	int InTitleId;
};// FUNC_Exec

struct UCCCheatManager_execymNotifySelectedCharacterTitle_Parms
{
	int InTitleId;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyCharacterTitles_Parms
{
	TArray< int > InTitleIds;
	int InSelectedTitleId;
};// FUNC_Exec

struct UCCCheatManager_execymServerShutdown_Parms
{
	int InSecondsToShutdown;
};// FUNC_Exec

struct UCCCheatManager_execymPingAllResponseMessage_Parms
{
	int InPingId;
	TArray< unsigned char > InData;
};// FUNC_Exec

struct UCCCheatManager_execymPingResponseMessage_Parms
{
	int InPingId;
	struct FString InData;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyProfessionAndCraftAbilities_Parms
{
	TArray< struct FNotifyProfessionAndCraftAbilities_ProfessionSkill > InProfession;
	TArray< int > InCraftAbilities;
};// FUNC_Exec

struct UCCCheatManager_execymAttachmentdollAvatar_Parms
{
	TArray< struct FAvatarAttribute > InAttributes;
};// FUNC_Exec

struct UCCCheatManager_execymInitCharacterPaperdoll_Parms
{
	struct FPaperdoll InPaperdoll;
};// FUNC_Exec

struct UCCCheatManager_execymLobbyAvatar_Parms
{
	TArray< struct FAvatarAttribute > InAttributes;
	TArray< struct FAvatarAttribute > InGeneralWeaponAttributes;
	TArray< struct FAvatarAttribute > InClassWeaponAttributes;
	TArray< struct FAvatarAttribute > InPistolAttributes;
	TArray< int > InDisappearedAttributes;
};// FUNC_Exec

struct UCCCheatManager_execymS2CShowEmote_Parms
{
	int InCharacterId;
	int InEmoteId;
	float InElapsedTime;
};// FUNC_Exec

struct UCCCheatManager_execymInitNpcs_Parms
{
	TArray< struct FInitNpcs_NpcDescription > Inm_npcs;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyCharacterLevelUp_Parms
{
	int InCharacterId;
	int InLevel;
};// FUNC_Exec

struct UCCCheatManager_execymSelectRealmResponse_Parms
{
	unsigned char InResponse;
	struct FString InConnectionIp;
	int InConnectionPort;
	struct FString InRealmName;
	int InTicket;
};// FUNC_Exec

struct UCCCheatManager_execymSelectRealm_Parms
{
	struct FString InRealmName;
};// FUNC_Exec

struct UCCCheatManager_execymRSAuthenticateResponse_Parms
{
	unsigned char InResult;
	TArray< struct FRealmInfo > InRealms;
	unsigned char InAccountType;
};// FUNC_Exec

struct UCCCheatManager_execymGetRealmsResponse_Parms
{
	TArray< struct FRealmInfo > InRealms;
};// FUNC_Exec

struct UCCCheatManager_execymGetRealms_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymRSAuthenticate_Parms
{
	struct FString InLogin;
	struct FString InPassword;
	struct FString InClientVersion;
	struct FString InLanguage;
};// FUNC_Exec

struct UCCCheatManager_execymTrackQuest_Parms
{
	int InQuestId;
	unsigned long InEnable : 1;
};// FUNC_Exec

struct UCCCheatManager_execymQuestExpired_Parms
{
	int InQuestId;
};// FUNC_Exec

struct UCCCheatManager_execymQuestCanceled_Parms
{
	int InQuestId;
};// FUNC_Exec

struct UCCCheatManager_execymCancelQuestFailed_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymCancelQuest_Parms
{
	int InQuestId;
};// FUNC_Exec

struct UCCCheatManager_execymQuestDelivered_Parms
{
	int InQuestId;
};// FUNC_Exec

struct UCCCheatManager_execymDeliverQuestFailed_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymDeliverQuest_Parms
{
	int InQuestId;
	int InQuestStep;
	int InSetId;
};// FUNC_Exec

struct UCCCheatManager_execymQuestTaken_Parms
{
	int InQuestId;
	int InQuestStep;
	TArray< struct FActiveQuestState > InConditions;
};// FUNC_Exec

struct UCCCheatManager_execymTakeQuestFailed_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymTakeQuest_Parms
{
	int InQuestId;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateNpcQuests_Parms
{
	int InNpcId;
	TArray< struct FNpcFunctionalityDescription > InQuestFunctionality;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateActiveQuest_Parms
{
	struct FActiveQuest InActiveQuest;
};// FUNC_Exec

struct UCCCheatManager_execymSetActiveQuests_Parms
{
	TArray< struct FActiveQuest > InActiveQuests;
	TArray< struct FPassedQuest > InPassedQuests;
	struct FTutorialState InTutorialState;
	int InNativeLobby;
	unsigned long InCouldSkipTutorial : 1;
	struct FString InTutorialSkipGuaranteeName;
};// FUNC_Exec

struct UCCCheatManager_execymSetTutorialState_Parms
{
	struct FTutorialState InTutorialState;
};// FUNC_Exec

struct UCCCheatManager_execymSetTutorialInfo_Parms
{
	struct FTutorialState InTutorialState;
	unsigned long InCouldSkipTutorial : 1;
	struct FString InTutorialSkipGuaranteeName;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyAboutKnownMenu_Parms
{
	int InServiceMenu;
	int InCharacterMenu;
};// FUNC_Exec

struct UCCCheatManager_execymSetKnownMenu_Parms
{
	int InServiceMenu;
	int InCharacterMenu;
};// FUNC_Exec

struct UCCCheatManager_execymSetAccess_Parms
{
	int InAccess;
};// FUNC_Exec

struct UCCCheatManager_execymPvPLadderSeasonFinished_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymPvPLadderSnapshotResponse_Parms
{
	TArray< struct FLadderSnapshotRecord > InSnapshot;
};// FUNC_Exec

struct UCCCheatManager_execymPvPLadderSnapshotRequest_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymTopListResponse_Parms
{
	TArray< struct FLadderRecord > InTopList;
};// FUNC_Exec

struct UCCCheatManager_execymTopListRequest_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymTakeAllItemsFromGarbage_Parms
{
	unsigned char InBackpackPage;
};// FUNC_Exec

struct UCCCheatManager_execymGarbageSessionFinished_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymGetGarbageItemsResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymGetGarbageItems_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymFinishRealmNpcInteraction_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymRequestRealmNpcInteraction_Parms
{
	int Inm_npcId;
};// FUNC_Exec

struct UCCCheatManager_execymResponseRealmNpcInteraction_Parms
{
	unsigned long Inm_interactionAllowed : 1;
	TArray< struct FNpcFunctionalityDescription > InEnableFunctionality;
};// FUNC_Exec

struct UCCCheatManager_execymFinishNpcInteraction_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymRequestNpcInteraction_Parms
{
	int Inm_npcId;
};// FUNC_Exec

struct UCCCheatManager_execymResponseNpcInteraction_Parms
{
	unsigned long Inm_interactionAllowed : 1;
	unsigned long Inm_isKnownNpc : 1;
	TArray< struct FNpcFunctionalityDescription > InEnableFunctionality;
};// FUNC_Exec

struct UCCCheatManager_execymSpawnRealmNpc_Parms
{
	int Inm_npcId;
	int Invisual_key;
	struct FCharacterPosition Inm_position;
};// FUNC_Exec

struct UCCCheatManager_execymSpawnPassiveNpc_Parms
{
	int Inm_npcId;
	struct FCharacterPosition Inm_position;
};// FUNC_Exec

struct UCCCheatManager_execymDespawnNpc_Parms
{
	int Inm_npcId;
};// FUNC_Exec

struct UCCCheatManager_execymStopNpcMovement_Parms
{
	int Inm_npcId;
	unsigned char Inm_stopReason;
	int Inm_path;
	int Inm_link;
	struct FCharacterPosition Inm_position;
};// FUNC_Exec

struct UCCCheatManager_execymStartNpcMovement_Parms
{
	int Inm_npcId;
	int Inm_path;
	int Inm_link;
	struct FCharacterPosition Inm_position;
};// FUNC_Exec

struct UCCCheatManager_execymSyncTime_Parms
{
	float Inm_time;
};// FUNC_Exec

struct UCCCheatManager_execymEndItemAttaching_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymItemAttachingBegun_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymBeginItemAttachingFailed_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymBeginItemAttaching_Parms
{
	int InItemId;
};// FUNC_Exec

struct UCCCheatManager_execymExpireMail_Parms
{
	int InMailId;
};// FUNC_Exec

struct UCCCheatManager_execymDeattachedAll_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymDeattachAll_Parms
{
	int InMailId;
	unsigned char InBackpackPage;
};// FUNC_Exec

struct UCCCheatManager_execymDeattachedItem_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymDeattachItem_Parms
{
	int InMailId;
	int InItemId;
	unsigned char InSlot;
};// FUNC_Exec

struct UCCCheatManager_execymSendedMail_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymSendMail_Parms
{
	struct FString InReceiverName;
	struct FString InSubject;
	struct FString InMessage;
	int InTTL;
	int InCoD;
	int InMoneyAttach;
	TArray< int > InItems;
};// FUNC_Exec

struct UCCCheatManager_execymMarkReadMail_Parms
{
	int InMailId;
};// FUNC_Exec

struct UCCCheatManager_execymReturnedMail_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymReturnMail_Parms
{
	TArray< int > InMailIds;
};// FUNC_Exec

struct UCCCheatManager_execymDeattachedMoney_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymDeattachMoney_Parms
{
	TArray< int > InMailIds;
};// FUNC_Exec

struct UCCCheatManager_execymPaidCoD_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymPayCoD_Parms
{
	TArray< int > InMailIds;
};// FUNC_Exec

struct UCCCheatManager_execymMarkedProtectionFlag_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymMarkProtectionFlag_Parms
{
	unsigned long InFlag : 1;
	TArray< int > InMailIds;
};// FUNC_Exec

struct UCCCheatManager_execymDeletedMail_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymDeleteMail_Parms
{
	TArray< int > InMailIds;
};// FUNC_Exec

struct UCCCheatManager_execymRollSkipped_Parms
{
	unsigned char Inm_slot;
};// FUNC_Exec

struct UCCCheatManager_execymRollDrawed_Parms
{
	unsigned char Inm_slot;
	int Inm_characterId;
};// FUNC_Exec

struct UCCCheatManager_execymRollStatusChanged_Parms
{
	unsigned char Inm_slot;
	int Inm_characterId;
	unsigned char Inm_status;
};// FUNC_Exec

struct UCCCheatManager_execymSetRollStatus_Parms
{
	unsigned char Inm_slot;
	unsigned char Inm_status;
};// FUNC_Exec

struct UCCCheatManager_execymStartRollProcess_Parms
{
	int Inm_timeout;
};// FUNC_Exec

struct UCCCheatManager_execymFinishLootList_Parms
{
	unsigned long InTakeAll : 1;
	int InBackpackPage;
};// FUNC_Exec

struct UCCCheatManager_execymInitLootList_Parms
{
	int Inm_xpReward;
	int Inm_cashReward;
	int Inm_pvpReward;
	TArray< struct FInitLootList_RollItemDesc > Inm_rolls;
	unsigned char Inm_place;
	int Inm_score;
	int Inm_topScore;
	float Inm_powerReward;
};// FUNC_Exec

struct UCCCheatManager_execymDeleteCharacterResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymCreateCharacterResponse_Parms
{
	unsigned char InResult;
	struct FCreateCharacterResponse_Character Inm_character;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyPlayerCharacters_Parms
{
	TArray< struct FNotifyPlayerCharacters_Character > InCharacters;
	unsigned long InIsOriginalGangster : 1;
	int InExtraCharacterSlots;
};// FUNC_Exec

struct UCCCheatManager_execymConnectToAdServer_Parms
{
	struct FString InBaseRemotingUrl;
	struct FString InBaseImagesUrl;
	unsigned long InIsMale : 1;
	int InAge;
};// FUNC_Exec

struct UCCCheatManager_execymKickNotification_Parms
{
	struct FString InReason;
};// FUNC_Exec

struct UCCCheatManager_execymLogicalReconnect_Parms
{
	int InReconnectTime;
	struct FString InReason;
};// FUNC_Exec

struct UCCCheatManager_execymServerInfo_Parms
{
	int InDesignDataVersion;
	int InServerId;
};// FUNC_Exec

struct UCCCheatManager_execymAuthenticateResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymSelectCharacterResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymGotoCharacterSelectScreen_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymSelectCharacter_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymDeleteCharacter_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymCreateCharacter_Parms
{
	struct FString InName;
	struct FCharacterAppearance InAppearance;
	unsigned char InClass;
	TArray< int > InInventory;
};// FUNC_Exec

struct UCCCheatManager_execymCheckedCharacterNameUnique_Parms
{
	unsigned long InIsUnique : 1;
};// FUNC_Exec

struct UCCCheatManager_execymCheckCharacterNameUnique_Parms
{
	struct FString InName;
};// FUNC_Exec

struct UCCCheatManager_execymLogout_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymTicketAuthenticate_Parms
{
	int InTicket;
};// FUNC_Exec

struct UCCCheatManager_execymAuthenticate_Parms
{
	struct FString InLogin;
	struct FString InPassword;
};// FUNC_Exec

struct UCCCheatManager_execymCharacterLostRelevancy_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymNewRelevantCharacter_Parms
{
	struct FCharacterPosition InPosition;
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymSetSpawnPosition_Parms
{
	struct FCharacterPosition Inm_newPosition;
	int Inm_lobbyId;
};// FUNC_Exec

struct UCCCheatManager_execymExitLobbyResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyCharacterMovement_Parms
{
	int InCharacterId;
	float Intime;
	struct FCharacterPosition InPosition;
	float InVelocityX;
	float InVelocityY;
	float InVelocityZ;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyPlayerMovement_Parms
{
	float Intime;
	struct FCharacterPosition InPosition;
	float InVelocityX;
	float InVelocityY;
	float InVelocityZ;
};// FUNC_Exec

struct UCCCheatManager_execymExitLobby_Parms
{
	unsigned char Inm_exit;
};// FUNC_Exec

struct UCCCheatManager_execymEnterLobbyResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymEnterLobby_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymExtraCharacterSlotsAdded_Parms
{
	int Inm_slotsCount;
};// FUNC_Exec

struct UCCCheatManager_execymItemTransaction_Parms
{
	TArray< struct FItemOperation > InOperations;
};// FUNC_Exec

struct UCCCheatManager_execymItemManagementResponse_Parms
{
	unsigned char InResponse;
};// FUNC_Exec

struct UCCCheatManager_execymUndoSorting_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymItemsSorted_Parms
{
	int InItemsRevision;
	int InItemsAttributesRevision;
};// FUNC_Exec

struct UCCCheatManager_execymSortItems_Parms
{
	unsigned char InSortType;
	unsigned char InContainerType;
	int InContainerIndex;
};// FUNC_Exec

struct UCCCheatManager_execymOpenItem_Error_Parms
{
	int InItemId;
	unsigned char InErrorType;
};// FUNC_Exec

struct UCCCheatManager_execymOpenItem_Succeed_Parms
{
	int InItemId;
};// FUNC_Exec

struct UCCCheatManager_execymRedeemBonusItem_Parms
{
	int InItemTemplateId;
	int InContainerType;
	unsigned char InSlot;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyAccountBonusItems_Parms
{
	TArray< int > InItemTemplateIDs;
};// FUNC_Exec

struct UCCCheatManager_execymOpenNewspaperResult_Parms
{
	unsigned long InIsOpenNewspaperRequest : 1;
	int InNewspaperId;
	struct FServerDateTime InDate;
	TArray< struct FNewspaperArticleData > InArticles;
};// FUNC_Exec

struct UCCCheatManager_execymOpenNewspaper_Parms
{
	int InNewspaperId;
};// FUNC_Exec

struct UCCCheatManager_execymGetNewspaperResponse_Parms
{
	unsigned char InResponse;
};// FUNC_Exec

struct UCCCheatManager_execymGetNewspaper_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymGetNewspapersByMonthResponse_Parms
{
	TArray< struct FGetNewspapersByMonthStruct > InNewspapers;
};// FUNC_Exec

struct UCCCheatManager_execymGetNewspapersByMonth_Parms
{
	int InYear;
	int InMonth;
};// FUNC_Exec

struct UCCCheatManager_execymOpenItem_Parms
{
	int InItemId;
};// FUNC_Exec

struct UCCCheatManager_execymMergeItem_Parms
{
	int InItemIdSource;
	int InItemIdDestination;
	int InCount;
};// FUNC_Exec

struct UCCCheatManager_execymSplitItem_Parms
{
	int InItemId;
	int InContainerType;
	unsigned char InSlot;
	int InCount;
};// FUNC_Exec

struct UCCCheatManager_execymSwapItems_Parms
{
	int InItemId1;
	int InItemId2;
};// FUNC_Exec

struct UCCCheatManager_execymRemoveItem_Parms
{
	int InItemId;
};// FUNC_Exec

struct UCCCheatManager_execymMoveItemToSlot_Parms
{
	int InItemId;
	int InContainerType;
	unsigned char InSlot;
};// FUNC_Exec

struct UCCCheatManager_execymUDSWaitingCharacters_Parms
{
	TArray< struct FWaitingCharacter > InCharacters;
};// FUNC_Exec

struct UCCCheatManager_execymSoloScoreBoard_Parms
{
	int InMinLevel;
	int InMaxLevel;
	TArray< struct FScoreBoardPlace > InPlaces;
};// FUNC_Exec

struct UCCCheatManager_execymUDSInstanceStatistics_Parms
{
	TArray< struct FUDSInstanceStatistics_PlayerStat > InPlayerStats;
	TArray< struct FUDSInstanceStatistics_GameStat > InGameStats;
};// FUNC_Exec

struct UCCCheatManager_execymUDSAvatarInfoFailed_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymUDSSpectatorResponse_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymUDSAvatarInfoResponse_Parms
{
	int InCharacterId;
	unsigned char InClassId;
	int InPvPRank;
	int InPvPTitleId;
	float InHandicapFactor;
	int InClanLogoId;
	int InClanLogoColorId;
	struct FCharacterAppearance InAppearance;
	struct FPaperdoll InPaperdoll;
	unsigned char InTeam;
	TArray< struct FAvatarAttribute > InBaseAttributes;
	TArray< struct FWeaponProfile > InWeaponProfiles;
	TArray< struct FAbilityInfo > InActionBarAbilities;
	TArray< struct FDrugInfo > InExtraDrugAbilities;
	TArray< struct FFeatStat > InFeatStats;
	TArray< int > InExtraActions;
};// FUNC_Exec

struct UCCCheatManager_execymListenUDSAvatarInfoRequest_Parms
{
	int InCharacterId;
	int InInstanceId;
};// FUNC_Exec

struct UCCCheatManager_execymUDSAvatarInfoRequest_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymUDSChangeTeam_Parms
{
	int InCharacterId;
	unsigned char InTeam;
};// FUNC_Exec

struct UCCCheatManager_execymUDSBeginGame_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymUDSBeginWarmup_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymCheatUDSFinished_Parms
{
	int InWinnerTeam;
	int InAdditionalSeconds;
};// FUNC_Exec

struct UCCCheatManager_execymUDSFinished_Parms
{
	int InWinnerTeam;
};// FUNC_Exec

struct UCCCheatManager_execymUDSStarted_Parms
{
	int InUdsId;
	struct FConnectionData InConnectionData;
};// FUNC_Exec

struct UCCCheatManager_execymUDSAbnormalClosed_Parms
{
	int InSessionId;
};// FUNC_Exec

struct UCCCheatManager_execymStopAutoCloseTimer_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymStartAutoCloseTimer_Parms
{
	int InTimeout;
};// FUNC_Exec

struct UCCCheatManager_execymStopAutoBalanceTimer_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymStartAutoBalanceTimer_Parms
{
	int InTimeout;
};// FUNC_Exec

struct UCCCheatManager_execymForbidInstanceLoading_Parms
{
	int InSessionId;
};// FUNC_Exec

struct UCCCheatManager_execymAllowInstanceLoading_Parms
{
	int InSessionId;
};// FUNC_Exec

struct UCCCheatManager_execymInstanceLeaved_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymInstanceEntered_Parms
{
	int InSessionId;
};// FUNC_Exec

struct UCCCheatManager_execymInstanceFailed_Parms
{
	int InSessionId;
};// FUNC_Exec

struct UCCCheatManager_execymInstanceCanceled_Parms
{
	int InSessionId;
};// FUNC_Exec

struct UCCCheatManager_execymInstanceAccepted_Parms
{
	int InSessionId;
};// FUNC_Exec

struct UCCCheatManager_execymInstanceFinished_Parms
{
	int InLobbyId;
	float InPosX;
	float InPosY;
	float InPosZ;
	int InYaw;
};// FUNC_Exec

struct UCCCheatManager_execymInstanceExpired_Parms
{
	int InSessionId;
};// FUNC_Exec

struct UCCCheatManager_execymInstanceStarted_Parms
{
	int InSessionId;
	struct FConnectionData InConnectionData;
	int InTeam;
};// FUNC_Exec

struct UCCCheatManager_execymClanLeaderJoinedInstanceSession_Parms
{
	int InInstanceId;
	int InSessionId;
};// FUNC_Exec

struct UCCCheatManager_execymGroupLeaderCanceledInstanceSession_Parms
{
	int InSessionId;
};// FUNC_Exec

struct UCCCheatManager_execymGroupLeaderJoinedInstanceSession_Parms
{
	int InInstanceId;
	int InSessionId;
};// FUNC_Exec

struct UCCCheatManager_execymJoinInstanceSessionForSmbFailed_Parms
{
	unsigned char InReturnState;
};// FUNC_Exec

struct UCCCheatManager_execymInstanceSessionForSmbJoined_Parms
{
	int InInstanceId;
	int InSessionId;
	unsigned long InSameTeam : 1;
};// FUNC_Exec

struct UCCCheatManager_execymJoinInstanceSessionForSmb_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymJoinInstanceSessionFailed_Parms
{
	unsigned char InReturnState;
};// FUNC_Exec

struct UCCCheatManager_execymInstanceSessionJoined_Parms
{
	int InInstanceId;
	int InSessionId;
	unsigned long InIsQuickPlay : 1;
};// FUNC_Exec

struct UCCCheatManager_execymJoinInstanceSession_Parms
{
	int InInstanceId;
	int InSessionId;
};// FUNC_Exec

struct UCCCheatManager_execymAutoJoinInstance_Parms
{
	int InInstanceId;
	int InSessionId;
};// FUNC_Exec

struct UCCCheatManager_execymInstancesForAutoJoin_Parms
{
	TArray< struct FInstanceSessionDescription > InInstances;
};// FUNC_Exec

struct UCCCheatManager_execymInstanceForQuickPlay_Parms
{
	int InInstanceId;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyPlayerInstanceAutoJoinSettings_Parms
{
	unsigned long InEnabled : 1;
	unsigned long InOnlyStartup : 1;
	TArray< int > InInstances;
};// FUNC_Exec

struct UCCCheatManager_execymEnableInstanceAutoJoin_Parms
{
	unsigned long InEnabled : 1;
	unsigned long InOnlyStartup : 1;
	TArray< int > InInstances;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateInstanceSession_Parms
{
	struct FInstanceSessionDescription InInstanceSession;
};// FUNC_Exec

struct UCCCheatManager_execymChangeGroupLeaderFailed_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymGroupLeaderChanged_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymChangeGroupLeader_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymCharacterKickedFromGroup_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymCharacterLeftGroup_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymCharacterEnteredGroup_Parms
{
	int InCharacterId;
	struct FString InCharacterName;
};// FUNC_Exec

struct UCCCheatManager_execymKickMemberFailed_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymMemberKicked_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymKickMember_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymLeaveGroupFailed_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymGroupLeft_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymLeaveGroup_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymEnterGroupFailed_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymGroupEntered_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymEnterGroup_Parms
{
	int InInvitationId;
};// FUNC_Exec

struct UCCCheatManager_execymGroupInvitationRejected_Parms
{
	int InInvitationId;
};// FUNC_Exec

struct UCCCheatManager_execymRejectGroupInvitation_Parms
{
	int InInvitationId;
};// FUNC_Exec

struct UCCCheatManager_execymGroupInvitationExpired_Parms
{
	int InInvitationId;
};// FUNC_Exec

struct UCCCheatManager_execymGroupInvitationRecieved_Parms
{
	int InInvitationId;
	int InCharacterId;
	struct FString InCharacterName;
};// FUNC_Exec

struct UCCCheatManager_execymSendGroupInvitationFailed_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymGroupInvitationSent_Parms
{
	int InCharacterId;
	int InInvitationId;
};// FUNC_Exec

struct UCCCheatManager_execymSendGroupInvitationEx_Parms
{
	struct FString InCharacterName;
};// FUNC_Exec

struct UCCCheatManager_execymSendGroupInvitation_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymGroupInfo_Parms
{
	TArray< struct FGroupMemberInfo > InMembers;
};// FUNC_Exec

struct UCCCheatManager_execymRequestCharacterStats_Parms
{
	struct FString InCharacterName;
};// FUNC_Exec

struct UCCCheatManager_execymCallCharacter_Parms
{
	struct FString InCharacterName;
};// FUNC_Exec

struct UCCCheatManager_execymRequestCharacterInfo_Parms
{
	struct FString InCharacterName;
};// FUNC_Exec

struct UCCCheatManager_execymRequestCharacterLocation_Parms
{
	struct FString InCharacterName;
};// FUNC_Exec

struct UCCCheatManager_execymSystemOpMessage_Parms
{
	struct FString InCharacterName;
	struct FString InMessageText;
};// FUNC_Exec

struct UCCCheatManager_execymSetLevelToCharacter_Parms
{
	unsigned char InLevel;
};// FUNC_Exec

struct UCCCheatManager_execymMuteMessage_Parms
{
	struct FString InCharacterName;
	int InChatChannelId;
	int InDuration;
};// FUNC_Exec

struct UCCCheatManager_execymGMHelpRequest_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymKickPlayer_Parms
{
	struct FString InName;
};// FUNC_Exec

struct UCCCheatManager_execymKickAll_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymSetVisible_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymToggleGod_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymAddExpToCharacter_Parms
{
	int inAmount;
};// FUNC_Exec

struct UCCCheatManager_execymAddCashToCharacter_Parms
{
	int inAmount;
};// FUNC_Exec

struct UCCCheatManager_execymAddAPToCharacter_Parms
{
	int inAmount;
};// FUNC_Exec

struct UCCCheatManager_execymAddRepToCharacter_Parms
{
	int inAmount;
};// FUNC_Exec

struct UCCCheatManager_execymSetSpeedFactor_Parms
{
	float InFactor;
};// FUNC_Exec

struct UCCCheatManager_execymCheckFlyMode_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymAddItemToCharacter_Parms
{
	struct FString InItemName;
	int InQuantity;
};// FUNC_Exec

struct UCCCheatManager_execymGotoCharacterToCharacter_Parms
{
	struct FString InCharacterName;
};// FUNC_Exec

struct UCCCheatManager_execymGotoCharacterToPosition_Parms
{
	struct FCharacterPosition InCharacterPosition;
	int InLobbyId;
};// FUNC_Exec

struct UCCCheatManager_execymResponseCharacterStats_Parms
{
	unsigned char InError;
	struct FResponseCharacterStats_CharacterStatsDesc InCharacterStats;
};// FUNC_Exec

struct UCCCheatManager_execymResponseCharacterInfo_Parms
{
	struct FString InAccountLogin;
	TArray< struct FCharacterInfoShort > InCharacters;
};// FUNC_Exec

struct UCCCheatManager_execymResponseCharacterLocation_Parms
{
	unsigned char InError;
	unsigned char InStatus;
	int InLocation;
	struct FCharacterPosition InCharacterPosition;
};// FUNC_Exec

struct UCCCheatManager_execymSetLevelToCharacterResult_Parms
{
	unsigned long InAccepted : 1;
};// FUNC_Exec

struct UCCCheatManager_execymMuteMessageResponse_Parms
{
	int InCharacterId;
	int InChatChannelId;
	int InDuration;
};// FUNC_Exec

struct UCCCheatManager_execymSetVisibleResult_Parms
{
	unsigned long InVisible : 1;
};// FUNC_Exec

struct UCCCheatManager_execymSetGodMode_Parms
{
	unsigned long InIsGod : 1;
};// FUNC_Exec

struct UCCCheatManager_execymAddCashToCharacterResult_Parms
{
	unsigned long InAccepted : 1;
};// FUNC_Exec

struct UCCCheatManager_execymAddExpToCharacterResult_Parms
{
	unsigned long InAccepted : 1;
};// FUNC_Exec

struct UCCCheatManager_execymSetSpeedFactorResult_Parms
{
	float InFactor;
};// FUNC_Exec

struct UCCCheatManager_execymAddAPToCharacterResult_Parms
{
	unsigned long InAccepted : 1;
};// FUNC_Exec

struct UCCCheatManager_execymCheckFlyModeResult_Parms
{
	unsigned long InCanFly : 1;
};// FUNC_Exec

struct UCCCheatManager_execymAddRepToCharacterResult_Parms
{
	unsigned long InAccepted : 1;
};// FUNC_Exec

struct UCCCheatManager_execymAddItemToCharacterResult_Parms
{
	unsigned long InAccepted : 1;
};// FUNC_Exec

struct UCCCheatManager_execymGMDisbandClanResult_Parms
{
	unsigned long InIsSuccess : 1;
};// FUNC_Exec

struct UCCCheatManager_execymGMDisbandClan_Parms
{
	struct FString InClanName;
};// FUNC_Exec

struct UCCCheatManager_execymPingClientResponseMessage_Parms
{
	int InPingId;
	struct FString InData;
};// FUNC_Exec

struct UCCCheatManager_execymPingClientMessage_Parms
{
	int InPingId;
	struct FString InData;
};// FUNC_Exec

struct UCCCheatManager_execymPingPlayerResponse_Parms
{
	struct FString InIP;
	int InMinTime;
	int InMaxTime;
	int InAvgTime;
};// FUNC_Exec

struct UCCCheatManager_execymPingPlayer_Parms
{
	struct FString InCharacterName;
};// FUNC_Exec

struct UCCCheatManager_execymAddSkillToCharacterResult_Parms
{
	unsigned long InAccepted : 1;
};// FUNC_Exec

struct UCCCheatManager_execymAddSkillToCharacter_Parms
{
	struct FString InSkillName;
	int InLevel;
};// FUNC_Exec

struct UCCCheatManager_execymMoveCharacterToPosition_Parms
{
	struct FString InCharacterName;
	struct FCharacterPosition InCharacterPosition;
	int InLobbyId;
};// FUNC_Exec

struct UCCCheatManager_execymResponseWho_Parms
{
	unsigned char InError;
	TArray< struct FCharacterInfoShort > InCharacters;
};// FUNC_Exec

struct UCCCheatManager_execymRequestWho_Parms
{
	unsigned char InZone;
};// FUNC_Exec

struct UCCCheatManager_execymGMMessage_Parms
{
	struct FString InMessage;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyRareShopItemsDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestRareShopItemsData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateRareShopItemsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FRareShopItemDesc > InUpdatedRareShopItems;
	TArray< int > InDeletedRareShopItems;
};// FUNC_Exec

struct UCCCheatManager_execymInitRareShopItemsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FRareShopItemDesc > InItems;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyTournamentDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestTournamentData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateTournamentData_Parms
{
	int InSourceId;
	int InRevision;
	unsigned char InTournamentState;
	TArray< struct FTeam > InTeamsAdded;
	TArray< int > InTeamsDeleted;
	TArray< struct FGame > InGamesUpdated;
	TArray< int > InBannedPlayersUpdated;
};// FUNC_Exec

struct UCCCheatManager_execymInitTournamentData_Parms
{
	int InSourceId;
	int InRevision;
	unsigned char InTournamentType;
	unsigned char InTournamentOrderType;
	unsigned char InTournamentState;
	TArray< struct FTeam > InTeams;
	TArray< struct FGame > InGames;
	TArray< int > InBannedPlayers;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyCharacterCountersDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestCharacterCountersData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateCharacterCountersData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FCharacterCounter > InUpdatedCounters;
};// FUNC_Exec

struct UCCCheatManager_execymInitCharacterCountersData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FCharacterCounter > InCounters;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyRealmNPCInfoDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestRealmNPCInfoData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateRealmNPCInfoData_Parms
{
	int InSourceId;
	int InRevision;
	struct FString InName;
	int InVisualKey;
	TArray< struct FNpcFunctionalityDescription > InFunctionalityList;
};// FUNC_Exec

struct UCCCheatManager_execymInitRealmNPCInfoData_Parms
{
	int InSourceId;
	int InRevision;
	struct FString InName;
	int InVisualKey;
	TArray< struct FNpcFunctionalityDescription > InFunctionalityList;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyMailBoxDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestMailBoxData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateMailBoxData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FMailDesc > InMailsAdded;
	TArray< int > InMailsDeleted;
};// FUNC_Exec

struct UCCCheatManager_execymInitMailBoxData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FMailDesc > InMails;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyItemsAttachmentsDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestItemsAttachmentsData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateItemsAttachmentsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FItemAttachments > InUpdatedItemsAttachments;
	TArray< struct FItemAttachmentsDeleted > InDeletedItemsAttachments;
};// FUNC_Exec

struct UCCCheatManager_execymInitItemsAttachmentsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FItemAttachments > InAttachments;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyItemsAttributesDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestItemsAttributesData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateItemsAttributesData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FItemAttributes > InUpdatedItemsAttributes;
	TArray< struct FItemAttributesDeleted > InDeletedItemsAttributes;
};// FUNC_Exec

struct UCCCheatManager_execymInitItemsAttributesData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FItemAttributes > InAttributes;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyItemsDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestItemsData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateItemsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FItemDescr > InUpdatedItems;
	TArray< int > InDeletedItems;
};// FUNC_Exec

struct UCCCheatManager_execymInitItemsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FItemDescr > InItems;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyPaperdollDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestPaperdollData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdatePaperdollData_Parms
{
	int InSourceId;
	int InRevision;
	int InHatTemplateId;
	int InHatColor;
	int InUpperClothTemplateId;
	int InUpperClothColor;
	int InLowerClothTemplateId;
	int InLowerClothColor;
	int InBootsTemplateId;
	int InBootsColor;
};// FUNC_Exec

struct UCCCheatManager_execymInitPaperdollData_Parms
{
	int InSourceId;
	int InRevision;
	int InHatTemplateId;
	int InHatColor;
	int InUpperClothTemplateId;
	int InUpperClothColor;
	int InLowerClothTemplateId;
	int InLowerClothColor;
	int InBootsTemplateId;
	int InBootsColor;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyInstanceSessionsDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestInstanceSessionsData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateInstanceSessionsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FInstanceSessionDescription > InUpdatedInstances;
	TArray< int > InDeletedInstances;
};// FUNC_Exec

struct UCCCheatManager_execymInitInstanceSessionsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FInstanceSessionDescription > InInstanceSessions;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyInsideClubInfoDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestInsideClubInfoData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateInsideClubInfoData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FClubItem > InAddedItems;
	TArray< struct FClubItemChanges > InChangesInItems;
	TArray< int > InRemovedItemsIds;
	TArray< int > InAddedFunctionalities;
};// FUNC_Exec

struct UCCCheatManager_execymInitInsideClubInfoData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FClubItem > InStoredItems;
	struct FServerDateTime InExpirationTime;
	TArray< int > InFunctionalities;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyOutsideClubInfoDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestOutsideClubInfoData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateOutsideClubInfoData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FClubZoneChanges > InChangesInZones;
};// FUNC_Exec

struct UCCCheatManager_execymInitOutsideClubInfoData_Parms
{
	int InSourceId;
	int InRevision;
	int InClubTemplateId;
	TArray< struct FClubZone > InZones;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyCurrentClanWarSeasonInfoDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestCurrentClanWarSeasonInfoData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateCurrentClanWarSeasonInfoData_Parms
{
	int InSourceId;
	int InRevision;
	struct FString InName;
	struct FServerDateTime InStartSeasonDate;
	struct FServerDateTime InStartFreezeDate;
	struct FServerDateTime InStartChampionshipRoundOf16Date;
	struct FServerDateTime InStartChampionshipQuarterfinalDate;
	struct FServerDateTime InStartChampionshipSemifinalDate;
	struct FServerDateTime InStartChampionshipFinalDate;
	struct FServerDateTime InStartOffSeasonDate;
	int InMoney;
	TArray< int > InItemTemplateIDs;
};// FUNC_Exec

struct UCCCheatManager_execymInitCurrentClanWarSeasonInfoData_Parms
{
	int InSourceId;
	int InRevision;
	struct FString InName;
	struct FServerDateTime InStartSeasonDate;
	struct FServerDateTime InStartFreezeDate;
	struct FServerDateTime InStartChampionshipRoundOf16Date;
	struct FServerDateTime InStartChampionshipQuarterfinalDate;
	struct FServerDateTime InStartChampionshipSemifinalDate;
	struct FServerDateTime InStartChampionshipFinalDate;
	struct FServerDateTime InStartOffSeasonDate;
	int InMoney;
	TArray< int > InItemTemplateIDs;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanWarScoreboardTournamentDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestClanWarScoreboardTournamentData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateClanWarScoreboardTournamentData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FClanWarTournamentPairDescription > InClanWarTournamentPairs;
};// FUNC_Exec

struct UCCCheatManager_execymInitClanWarScoreboardTournamentData_Parms
{
	int InSourceId;
	int InRevision;
	int InClan1InGroupA;
	int InClan2InGroupA;
	int InClan1InGroupB;
	int InClan2InGroupB;
	int InClan1InGroupC;
	int InClan2InGroupC;
	int InClan1InGroupD;
	int InClan2InGroupD;
	int InClan1InGroupE;
	int InClan2InGroupE;
	int InClan1InGroupF;
	int InClan2InGroupF;
	int InClan1InGroupG;
	int InClan2InGroupG;
	int InClan1InGroupH;
	int InClan2InGroupH;
	TArray< struct FClanWarTournamentPairDescription > InClanWarTournamentPairs;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanWarScoreboardChampionshipDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestClanWarScoreboardChampionshipData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateClanWarScoreboardChampionshipData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FClanStatDescription > InClanStat;
};// FUNC_Exec

struct UCCCheatManager_execymInitClanWarScoreboardChampionshipData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FClanStatDescription > InClanStat;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanPetitionsReceiversDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestClanPetitionsReceiversData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateClanPetitionsReceiversData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< int > InAddedReceivers;
};// FUNC_Exec

struct UCCCheatManager_execymInitClanPetitionsReceiversData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< int > InReceivers;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanStatisticsInfoDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestClanStatisticsInfoData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateClanStatisticsInfoData_Parms
{
	int InSourceId;
	int InRevision;
	int InBaseRate;
	int InCurrentRate;
	int InMaxRate;
	int InMaxCharactersInClan;
	int InPutMoneyInClanBank;
	int InTakeMoneyInClanBank;
	int InWinMoneyInClanWars;
	int InLoseMoneyInClanWars;
	int InWinSeasonClanWars;
	int InLoseSeasonClanWars;
	int InDrawSeasonClanWars;
	int InWinClanWarsForMoney;
	int InLoseClanWarsForMoney;
	int InDrawClanWarsForMoney;
	int InMinutesNeedForCurrentLevelUp;
};// FUNC_Exec

struct UCCCheatManager_execymInitClanStatisticsInfoData_Parms
{
	int InSourceId;
	int InRevision;
	struct FServerDateTime InCreationDate;
	int InBaseRate;
	int InCurrentRate;
	int InMaxRate;
	int InMaxCharactersInClan;
	int InPutMoneyInClanBank;
	int InTakeMoneyInClanBank;
	int InWinMoneyInClanWars;
	int InLoseMoneyInClanWars;
	int InWinSeasonClanWars;
	int InLoseSeasonClanWars;
	int InDrawSeasonClanWars;
	int InWinClanWarsForMoney;
	int InLoseClanWarsForMoney;
	int InDrawClanWarsForMoney;
	int InMinutesNeedForCurrentLevelUp;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyBuffSlotsDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestBuffSlotsData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateBuffSlotsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< int > InBuffTemplates;
};// FUNC_Exec

struct UCCCheatManager_execymInitBuffSlotsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< int > InBuffTemplates;
};// FUNC_Exec

struct UCCCheatManager_execymNotifySecureClanmateListDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestSecureClanmateListData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateSecureClanmateListData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FSecureClanmateDescription > InNewAndChangeClanmates;
};// FUNC_Exec

struct UCCCheatManager_execymInitSecureClanmateListData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FSecureClanmateDescription > InClanmates;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanmateListDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestClanmateListData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateClanmateListData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FClanmateDescription > InNewAndChangeClanmates;
	TArray< int > InGoneClanMemberIds;
};// FUNC_Exec

struct UCCCheatManager_execymInitClanmateListData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FClanmateDescription > InClanmates;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanBankItemsAttachmentsDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestClanBankItemsAttachmentsData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateClanBankItemsAttachmentsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FItemAttachments > InUpdatedItemsAttachments;
	TArray< struct FItemAttachmentsDeleted > InDeletedItemsAttachments;
};// FUNC_Exec

struct UCCCheatManager_execymInitClanBankItemsAttachmentsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FItemAttachments > InAttachments;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanBankItemsAttributesDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestClanBankItemsAttributesData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateClanBankItemsAttributesData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FItemAttributes > InUpdatedItemsAttributes;
	TArray< struct FItemAttributesDeleted > InDeletedItemsAttributes;
};// FUNC_Exec

struct UCCCheatManager_execymInitClanBankItemsAttributesData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FItemAttributes > InAttributes;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanBankItemsDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestClanBankItemsData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateClanBankItemsData_Parms
{
	int InSourceId;
	int InRevision;
	int InCash;
	TArray< struct FItemDescr > InUpdatedItems;
	TArray< int > InDeletedItems;
};// FUNC_Exec

struct UCCCheatManager_execymInitClanBankItemsData_Parms
{
	int InSourceId;
	int InRevision;
	int InCash;
	TArray< struct FItemDescr > InItems;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanBankTabsDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestClanBankTabsData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateClanBankTabsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FClanBankTabInfo > InTabs;
};// FUNC_Exec

struct UCCCheatManager_execymInitClanBankTabsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FClanBankTabInfo > InTabs;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanRanksTabsDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestClanRanksTabsData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateClanRanksTabsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FRankTabDescription > InUpdatedRanks;
	TArray< struct FRankTabDescriptionDeleted > InDeletedRanks;
};// FUNC_Exec

struct UCCCheatManager_execymInitClanRanksTabsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FRankTabDescription > InRanks;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanRanksDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestClanRanksData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateClanRanksData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FRankDescription > InUpdatedRanks;
	TArray< unsigned char > InDeletedRanks;
};// FUNC_Exec

struct UCCCheatManager_execymInitClanRanksData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FRankDescription > InRanks;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyInsideClanInfoDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestInsideClanInfoData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateInsideClanInfoData_Parms
{
	int InSourceId;
	int InRevision;
	struct FString InClanMessage;
	int InLevel;
	struct FString InDescription;
	struct FServerDateTime InChangeLogoNextDate;
};// FUNC_Exec

struct UCCCheatManager_execymInitInsideClanInfoData_Parms
{
	int InSourceId;
	int InRevision;
	struct FString InClanMessage;
	int InLevel;
	struct FString InDescription;
	struct FServerDateTime InChangeLogoNextDate;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyOutsideClanInfoDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestOutsideClanInfoData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateOutsideClanInfoData_Parms
{
	int InSourceId;
	int InRevision;
	int InClanLogoId;
	unsigned char InNameColor;
	int InClanLogoColorId;
};// FUNC_Exec

struct UCCCheatManager_execymInitOutsideClanInfoData_Parms
{
	int InSourceId;
	int InRevision;
	struct FString InName;
	int InClanLogoId;
	unsigned char InNameColor;
	int InClanLogoColorId;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanCreationInfoDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestClanCreationInfoData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateClanCreationInfoData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FString > InNewSigners;
	TArray< struct FString > InDeletedSigners;
};// FUNC_Exec

struct UCCCheatManager_execymInitClanCreationInfoData_Parms
{
	int InSourceId;
	int InRevision;
	unsigned char InRequiredSignsCount;
	struct FString InClanName;
	struct FString InClanDescription;
	struct FString InClanLeaderName;
	int InClanLogoId;
	int InClanLogoColorId;
	int InTimeToExpire;
	int InTimeToCooldown;
	TArray< struct FString > InSigners;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanHallInfoDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestClanHallInfoData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateClanHallInfoData_Parms
{
	int InSourceId;
	int InRevision;
	int InClanHallTypeId;
	unsigned char InSpecialization;
	int InLobbyId;
};// FUNC_Exec

struct UCCCheatManager_execymInitClanHallInfoData_Parms
{
	int InSourceId;
	int InRevision;
	int InClanHallTypeId;
	unsigned char InSpecialization;
	int InLobbyId;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanHallDenizensDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestClanHallDenizensData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateClanHallDenizensData_Parms
{
	int InSourceId;
	int InRevision;
	int InClanHallTypeId;
	unsigned char InSpecialization;
	int InCurrentCraftFunctionality;
	int InClanSafeId;
	int InPostBoxId;
	int InVendorId;
	int InEventManagerId;
	int InClubPorterId;
	TArray< int > InAddFunctionalities;
	TArray< int > InDeleteFunctionalities;
};// FUNC_Exec

struct UCCCheatManager_execymInitClanHallDenizensData_Parms
{
	int InSourceId;
	int InRevision;
	int InClanHallTypeId;
	unsigned char InSpecialization;
	int InCurrentCraftFunctionality;
	int InSecretatyId;
	int InPorterId;
	int InClanSafeId;
	int InPostBoxId;
	int InVendorId;
	int InEventManagerId;
	int InClubPorterId;
	TArray< int > InFunctionalities;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyEventManagerMessageDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestEventManagerMessageData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateEventManagerMessageData_Parms
{
	int InSourceId;
	int InRevision;
	struct FServerDateTime InDateTime;
	int InTypeId;
	struct FString InTitle;
	struct FString InText;
	int InEventDuration;
	unsigned long InRequestForVisit : 1;
	TArray< int > InWillComeCharacterIDs;
	unsigned long InPrivateMessageStatus : 1;
};// FUNC_Exec

struct UCCCheatManager_execymInitEventManagerMessageData_Parms
{
	int InSourceId;
	int InRevision;
	int InCreatorId;
	struct FServerDateTime InDateTime;
	int InTypeId;
	struct FString InTitle;
	struct FString InText;
	TArray< unsigned char > InRankIDs;
	int InEventDuration;
	int InMinCharacterLevel;
	int InMaxCharacterLevel;
	unsigned long InRequestForVisit : 1;
	TArray< int > InWillComeCharacterIDs;
	unsigned long InPrivateMessageStatus : 1;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanHallSlotsDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestClanHallSlotsData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateClanHallSlotsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< unsigned char > InAddedBuffSlots;
	TArray< unsigned char > InAddedVisualizationSlots;
};// FUNC_Exec

struct UCCCheatManager_execymInitClanHallSlotsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< unsigned char > InBuffSlots;
	TArray< unsigned char > InVisualizationSlots;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanBankTabsWithdrawedDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestClanBankTabsWithdrawedData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateClanBankTabsWithdrawedData_Parms
{
	int InSourceId;
	int InRevision;
	int InCash;
	TArray< struct FClanBankTabWithdrawed > InUpdatedTabsWithdrawed;
};// FUNC_Exec

struct UCCCheatManager_execymInitClanBankTabsWithdrawedData_Parms
{
	int InSourceId;
	int InRevision;
	int InCash;
	TArray< struct FClanBankTabWithdrawed > InTabsWithdrawed;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyBlackListDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestBlackListData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateBlackListData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FBlackListCharacterInfo > InUpdatedFoes;
	TArray< int > InDeletedFoes;
};// FUNC_Exec

struct UCCCheatManager_execymInitBlackListData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FBlackListCharacterInfo > InFoes;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyFriendListDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestFriendListData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateFriendListData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FFriendListCharacterInfo > InUpdatedFriends;
	TArray< int > InDeletedFriends;
};// FUNC_Exec

struct UCCCheatManager_execymInitFriendListData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FFriendListCharacterInfo > InFriends;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyFriendListGroupsDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestFriendListGroupsData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateFriendListGroupsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FFriendListGroupInfo > InUpdatedFriendListGroups;
	TArray< int > InDeletedFriendListGroups;
};// FUNC_Exec

struct UCCCheatManager_execymInitFriendListGroupsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FFriendListGroupInfo > InGroups;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyCharacterInfoDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestCharacterInfoData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateCharacterInfoData_Parms
{
	int InSourceId;
	int InRevision;
	int InClanId;
	int InLevel;
	int InPvPTitleId;
	int InTitleId;
	struct FCharacterAppearance InAppearance;
	struct FServerDateTime InGoesOfflineTime;
};// FUNC_Exec

struct UCCCheatManager_execymInitCharacterInfoData_Parms
{
	int InSourceId;
	int InRevision;
	struct FString InCharacterName;
	int InClanId;
	unsigned char InLevel;
	unsigned char InClassId;
	int InPvPTitleId;
	int InTitleId;
	struct FCharacterAppearance InAppearance;
	struct FServerDateTime InGoesOfflineTime;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyBankTabsDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestBankTabsData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateBankTabsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FBankTabDesc > InUpdatedTabs;
};// FUNC_Exec

struct UCCCheatManager_execymInitBankTabsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FBankTabDesc > InTabs;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyMineAuctionLotBidDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestMineAuctionLotBidData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateMineAuctionLotBidData_Parms
{
	int InSourceId;
	int InRevision;
	unsigned char InState;
	int InBidderId;
	int InBid;
};// FUNC_Exec

struct UCCCheatManager_execymInitMineAuctionLotBidData_Parms
{
	int InSourceId;
	int InRevision;
	struct FItemDescription InItem;
	int InSellerId;
	struct FString InSellerName;
	int InBidderId;
	int InBuyoutPrice;
	int InBid;
	int InBidStep;
	int InLeftTime;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyMineAuctionLotsDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestMineAuctionLotsData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateMineAuctionLotsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FLotDesc > InLotsAdded;
	TArray< struct FLotDescUpdate > InLotsUpdated;
	TArray< int > InLotsDeleted;
};// FUNC_Exec

struct UCCCheatManager_execymInitMineAuctionLotsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FLotDesc > InLots;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanAchievementsDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestClanAchievementsData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateClanAchievementsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FClanAchievementDescription > InClanAchievements;
};// FUNC_Exec

struct UCCCheatManager_execymInitClanAchievementsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FClanAchievementDescription > InClanAchievements;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyAchievementsDataRelevancy_Parms
{
	int InSourceId;
	int InRevision;
};// FUNC_Exec

struct UCCCheatManager_execymRequestAchievementsData_Parms
{
	int InSourceId;
	int InClientRevision;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateAchievementsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FAchievementDescription > InAchievement;
};// FUNC_Exec

struct UCCCheatManager_execymInitAchievementsData_Parms
{
	int InSourceId;
	int InRevision;
	TArray< struct FAchievementDescription > InAchievement;
};// FUNC_Exec

struct UCCCheatManager_execymExtraCraftAbilityResearched_Parms
{
	int InCraftAbilityId;
};// FUNC_Exec

struct UCCCheatManager_execymResearchExtraCraftAbilityFailed_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymResearchExtraCraftAbility_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymSpecializationUnlearned_Parms
{
	int InSpecializationId;
};// FUNC_Exec

struct UCCCheatManager_execymUnlearnSpecializationResponse_Parms
{
	unsigned long InResult : 1;
};// FUNC_Exec

struct UCCCheatManager_execymUnlearnSpecializationRequest_Parms
{
	int InSpecializationId;
};// FUNC_Exec

struct UCCCheatManager_execymProfessionUnlearned_Parms
{
	int InProfessionId;
};// FUNC_Exec

struct UCCCheatManager_execymUnlearnProfessionResponse_Parms
{
	unsigned long InResult : 1;
};// FUNC_Exec

struct UCCCheatManager_execymUnlearnProfessionRequest_Parms
{
	int InProfessionId;
};// FUNC_Exec

struct UCCCheatManager_execymExtraPassiveProfessionLearned_Parms
{
	int InProfessionId;
};// FUNC_Exec

struct UCCCheatManager_execymLearnExtraPassiveProfessionResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymLearnExtraPassiveProfessionRequest_Parms
{
	int InProfessionId;
};// FUNC_Exec

struct UCCCheatManager_execymCraftAbilityLearned_Parms
{
	int Inm_craftAbilityId;
};// FUNC_Exec

struct UCCCheatManager_execymLearnCraftAbilityResponse_Parms
{
	unsigned char Inm_result;
};// FUNC_Exec

struct UCCCheatManager_execymLearnCraftAbilityRequest_Parms
{
	int Inm_craftAbilityId;
};// FUNC_Exec

struct UCCCheatManager_execymSpecializationLearned_Parms
{
	int Inm_specializationId;
};// FUNC_Exec

struct UCCCheatManager_execymLearnSpecializationResponse_Parms
{
	unsigned char Inm_result;
};// FUNC_Exec

struct UCCCheatManager_execymLearnSpecializationRequest_Parms
{
	int Inm_specializationId;
};// FUNC_Exec

struct UCCCheatManager_execymProfessionLearned_Parms
{
	int Inm_professionId;
};// FUNC_Exec

struct UCCCheatManager_execymLearnProfessionResponse_Parms
{
	unsigned char Inm_result;
};// FUNC_Exec

struct UCCCheatManager_execymLearnProfessionRequest_Parms
{
	int Inm_professionId;
};// FUNC_Exec

struct UCCCheatManager_execymUseDrugFailed_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymDrugUsed_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymUseDrug_Parms
{
	int InDrugId;
};// FUNC_Exec

struct UCCCheatManager_execymRemoveCharacterAddiction_Parms
{
	struct FCharacterAddiction InAddiction;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateCharacterAddiction_Parms
{
	TArray< struct FCharacterAddiction > InAddictions;
};// FUNC_Exec

struct UCCCheatManager_execymNpcItemRepaired_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymNpcRepairItemFailed_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymNpcRepairItem_Parms
{
	int InItemId;
};// FUNC_Exec

struct UCCCheatManager_execymItemRepaired_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymRepairItemFailed_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymRepairItem_Parms
{
	int InItemId;
};// FUNC_Exec

struct UCCCheatManager_execymItemCrafted_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymCraftItemFailed_Parms
{
	unsigned char InReturnState;
};// FUNC_Exec

struct UCCCheatManager_execymCraftDrug_Parms
{
	int InCraftAbilityId;
	int InIngredientsOfQuality;
	int InIngredientsOfProbability;
	unsigned long InUseCatalyst : 1;
};// FUNC_Exec

struct UCCCheatManager_execymCraftItem_Parms
{
	int InCraftAbilityId;
};// FUNC_Exec

struct UCCCheatManager_execymLevelUpProfessionSkill_Parms
{
	int InProfessionId;
	int InProfessionLevel;
};// FUNC_Exec

struct UCCCheatManager_execymS2CRemoveCraftAbilities_Parms
{
	TArray< int > InCraftAbilities;
};// FUNC_Exec

struct UCCCheatManager_execymS2CAddCraftAbilities_Parms
{
	TArray< int > InCraftAbilities;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyInteractionFinished_Parms
{
	int InCharacterId;
	int InObjectId;
	int InParam1;
	int InParam2;
};// FUNC_Exec

struct UCCCheatManager_execymInteractionFinished_Parms
{
	int InObjectId;
	int InParam1;
	int InParam2;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyInteractionStarted_Parms
{
	int InSourceCharacterId;
	int InInteractionObjectId;
	int InParam1;
	int InParam2;
};// FUNC_Exec

struct UCCCheatManager_execymInteractionFailed_Parms
{
	unsigned char InResult;
	int InObjectId;
	int InCauseCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymInteractionStarted_Parms
{
	int InInteractionObjectId;
	int InParam1;
	int InParam2;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyMomentaryInteraction_Parms
{
	int InCharacterId;
	int InObjectId;
	int InParam1;
	int InParam2;
};// FUNC_Exec

struct UCCCheatManager_execymMomentaryInteraction_Parms
{
	int InObjectId;
	int InParam1;
	int InParam2;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyInteractions_Parms
{
	TArray< struct FInteractionData > InInteractions;
};// FUNC_Exec

struct UCCCheatManager_execymDeleteClubItemResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymDeleteClubItem_Parms
{
	TArray< int > InDeletedItemId;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyRunningPartyInLobby_Parms
{
	TArray< struct FClubParty > InParties;
};// FUNC_Exec

struct UCCCheatManager_execymLeaveVipZone_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymEnterVipZoneResponse_Parms
{
	unsigned char InResult;
	int InVisualId;
	int InProgramId;
};// FUNC_Exec

struct UCCCheatManager_execymEnterVipZone_Parms
{
	int InVisualId;
	int InProgramId;
	int InVisualPaymentType;
	int InProgramPaymentType;
};// FUNC_Exec

struct UCCCheatManager_execymForceExitClub_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClubPartyStopped_Parms
{
	int InClanId;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClubPartyStarted_Parms
{
	struct FClubParty InParty;
};// FUNC_Exec

struct UCCCheatManager_execymStopClubPartyResponse_Parms
{
	unsigned char InResult;
	int InWillExpireInMinutes;
};// FUNC_Exec

struct UCCCheatManager_execymStopClubParty_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymStartClubPartyResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymStartClubParty_Parms
{
	int InTypeId;
	unsigned long InIsPublic : 1;
	int InEntranceFee;
};// FUNC_Exec

struct UCCCheatManager_execymRecustomizeClubResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymRecustomizeClub_Parms
{
	TArray< struct FClubZoneChanges > InChangedZones;
};// FUNC_Exec

struct UCCCheatManager_execymBuyClubStuffResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymBuyClubStuff_Parms
{
	TArray< int > InBoughtCustomizationsTemplateIds;
	TArray< int > InBoughtZoneTemplateIds;
};// FUNC_Exec

struct UCCCheatManager_execymExitClubResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymExitClub_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymEnteredClub_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymEnterClubResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymEnterClub_Parms
{
	int InClanId;
};// FUNC_Exec

struct UCCCheatManager_execymRentClubResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymRentClub_Parms
{
	int InClubTemplateId;
	int InClubRentOptionId;
	unsigned long InRestorePrevious : 1;
};// FUNC_Exec

struct UCCCheatManager_execymGetMyPowerRating_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymRestartClientMessage_Parms
{
	int InrestartId;
};// FUNC_Exec

struct UCCCheatManager_execymRestartNodeMessage_Parms
{
	int InrestartId;
};// FUNC_Exec

struct UCCCheatManager_execymSkipErrorMessage_Parms
{
	int InskipId;
};// FUNC_Exec

struct UCCCheatManager_execymProxyPingMessage_Parms
{
	int Intime;
	struct FString Inpayload;
};// FUNC_Exec

struct UCCCheatManager_execymPingAllMessage_Parms
{
	int InPingId;
	TArray< unsigned char > InData;
};// FUNC_Exec

struct UCCCheatManager_execymPingMessage_Parms
{
	int InPingId;
	struct FString InData;
};// FUNC_Exec

struct UCCCheatManager_execymRequestDataChunkUpdate_Parms
{
	int Inm_dataChunkID;
	int Inm_dataChunkID2;
	int Inm_oldRevisionID;
};// FUNC_Exec

struct UCCCheatManager_execymRequestDataChunkInit_Parms
{
	int Inm_dataChunkID;
	int Inm_dataChunkID2;
};// FUNC_Exec

struct UCCCheatManager_execymC2SShowEmote_Parms
{
	int InEmoteId;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanBankCash_Parms
{
	int InCash;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanWarTournamentDemand_Parms
{
	unsigned char InClanInPairState;
	int InMinutesLeftForMakingDemand;
	TArray< int > InClanmatesInDemand;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanWarSeasonDemand_Parms
{
	unsigned long InIsMakedDemand : 1;
	TArray< int > InClanmatesInDemand;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanWhichWinLastClanWarTournament_Parms
{
	int InClanId;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanWarSeasons_Parms
{
	TArray< struct FClanWarSeasonDescription > InClanWarSeasons;
};// FUNC_Exec

struct UCCCheatManager_execymClanWarForMoneyResultNotify_Parms
{
	unsigned char InClanWarResult;
	int InMoneyWin;
};// FUNC_Exec

struct UCCCheatManager_execymClanWarResultNotify_Parms
{
	unsigned char InClanWarResult;
};// FUNC_Exec

struct UCCCheatManager_execymS2CChangeClanWarForMoneyState_Parms
{
	unsigned long InIsInRivalClan : 1;
	unsigned char InState;
};// FUNC_Exec

struct UCCCheatManager_execymC2SChangeClanWarForMoneyState_Parms
{
	unsigned char InState;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyRivalClanAboutClanWarForMoneyDemand_Parms
{
	TArray< int > InCharacterIds;
	int InStake;
	int InInstanceId;
};// FUNC_Exec

struct UCCCheatManager_execymMakedClanWarForMoneyDemand_Parms
{
	unsigned long InResult : 1;
};// FUNC_Exec

struct UCCCheatManager_execymMakeClanWarForMoneyDemand_Parms
{
	TArray< int > InCharacterIds;
	int InStake;
	int InInstanceId;
};// FUNC_Exec

struct UCCCheatManager_execymClanWarForMoneyResponse_Parms
{
	int InClanWarForMoneyId;
};// FUNC_Exec

struct UCCCheatManager_execymClanWarForMoneyFromClan_Parms
{
	int InClanId;
	int InClanWarForMoneyId;
};// FUNC_Exec

struct UCCCheatManager_execymCancelClanWarForMoneyResponse_Parms
{
	unsigned char InReason;
};// FUNC_Exec

struct UCCCheatManager_execymCancelClanWarForMoneyRequest_Parms
{
	int InClanWarForMoneyId;
};// FUNC_Exec

struct UCCCheatManager_execymClanWarForMoneyRequest_Parms
{
	int InRivalClanId;
};// FUNC_Exec

struct UCCCheatManager_execymClanWarStarting_Parms
{
	int InRivalClanId;
	unsigned long InIsClanWarForMoney : 1;
};// FUNC_Exec

struct UCCCheatManager_execymDiscardedDemandClanWar_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymDiscardDemandClanWar_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymAcceptedClanWarProposition_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymAcceptClanWarProposition_Parms
{
	int InClanId;
	TArray< int > InCharacterIds;
};// FUNC_Exec

struct UCCCheatManager_execymClanWarPropositionResponse_Parms
{
	int InClanId;
};// FUNC_Exec

struct UCCCheatManager_execymDemandClanWarNotify_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymDemandedClanWar_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymDemandClanWar_Parms
{
	TArray< int > InCharacterIds;
};// FUNC_Exec

struct UCCCheatManager_execymChangeClanRateInfo_Parms
{
	int InAddedValue;
	unsigned char InActionType;
	struct FString InAdditionalInfo;
};// FUNC_Exec

struct UCCCheatManager_execymChangeCHPublicStatus_Parms
{
	unsigned long InIsPublic : 1;
};// FUNC_Exec

struct UCCCheatManager_execymActualClanIdsInfo_Parms
{
	TArray< int > InClanIds;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyServerDateTime_Parms
{
	struct FServerDateTime InDateTime;
};// FUNC_Exec

struct UCCCheatManager_execymChangeClanMessageResponse_Parms
{
	unsigned long InIsSuccess : 1;
};// FUNC_Exec

struct UCCCheatManager_execymChangeClanMessage_Parms
{
	struct FString InNewMessage;
};// FUNC_Exec

struct UCCCheatManager_execymTransmitLeadershipInClanResponse_Parms
{
	unsigned long InIsSuccess : 1;
};// FUNC_Exec

struct UCCCheatManager_execymTransmitLeadershipInClan_Parms
{
	int InCharacterId;
	unsigned char InRankId;
};// FUNC_Exec

struct UCCCheatManager_execymLeaveClanToNewLeaderResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymLeaveClanToNewLeader_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymChangedRankBankPrivileges_Parms
{
	unsigned long InIsSuccess : 1;
};// FUNC_Exec

struct UCCCheatManager_execymChangeRankBankPrivileges_Parms
{
	unsigned char InRankId;
	int InCashLimit;
	TArray< struct FClanBankRankPrivileges > InTabPrivileges;
};// FUNC_Exec

struct UCCCheatManager_execymDeleteRankResponse_Parms
{
	unsigned long InIsSuccess : 1;
};// FUNC_Exec

struct UCCCheatManager_execymDeleteRank_Parms
{
	unsigned char InRankId;
};// FUNC_Exec

struct UCCCheatManager_execymAddNewRankResponse_Parms
{
	unsigned long InIsSuccess : 1;
};// FUNC_Exec

struct UCCCheatManager_execymAddNewRank_Parms
{
	unsigned char InLevel;
	int InRights;
	struct FString InName;
};// FUNC_Exec

struct UCCCheatManager_execymChangeRankResponse_Parms
{
	unsigned long InIsSuccess : 1;
};// FUNC_Exec

struct UCCCheatManager_execymChangeRank_Parms
{
	unsigned char InRankId;
	unsigned char InNewLevel;
	int InNewRights;
	struct FString InNewName;
};// FUNC_Exec

struct UCCCheatManager_execymSetClanmateRankResponse_Parms
{
	unsigned long InIsSuccess : 1;
};// FUNC_Exec

struct UCCCheatManager_execymSetClanmateRank_Parms
{
	int InCharacterId;
	unsigned char InRankId;
};// FUNC_Exec

struct UCCCheatManager_execymChangeSecureClanmateNotesResponse_Parms
{
	unsigned long InIsSuccess : 1;
};// FUNC_Exec

struct UCCCheatManager_execymChangeSecureClanmateNote_Parms
{
	int InCharacterId;
	struct FString InNewNote;
};// FUNC_Exec

struct UCCCheatManager_execymChangeClanmateNotesResponse_Parms
{
	unsigned long InIsSuccess : 1;
};// FUNC_Exec

struct UCCCheatManager_execymChangeClanmateNote_Parms
{
	int InCharacterId;
	struct FString InNewNote;
};// FUNC_Exec

struct UCCCheatManager_execymChangeClanDescription_Parms
{
	struct FString InDescription;
};// FUNC_Exec

struct UCCCheatManager_execymRaiseClanLevelResponse_Parms
{
	unsigned long InIsSuccess : 1;
	int InSecondsLeftForCooldown;
};// FUNC_Exec

struct UCCCheatManager_execymRaiseClanLevel_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymNotifyKickFromClan_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymKickFromClanResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymKickFromClan_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymLeaveClanResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymLeaveClan_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymExpireInvitation_Parms
{
	int InInvitationId;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyJoinToClanFailure_Parms
{
	unsigned char InResult;
	int InClanId;
};// FUNC_Exec

struct UCCCheatManager_execymRespondToClanInvitation_Parms
{
	unsigned char InResult;
	int InInvitationId;
};// FUNC_Exec

struct UCCCheatManager_execymInviteToClanRespond_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymInviteToClan_Parms
{
	struct FString InCharacterName;
};// FUNC_Exec

struct UCCCheatManager_execymSignPetitionStatus_Parms
{
	unsigned char InStatus;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanPetitionResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymRespondToClanPetitition_Parms
{
	unsigned long InResult : 1;
	int InPetitionId;
};// FUNC_Exec

struct UCCCheatManager_execymSendPetitionResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymSendPetition_Parms
{
	struct FString InAddresseeName;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyClanDisbandment_Parms
{
	int InClanId;
};// FUNC_Exec

struct UCCCheatManager_execymDisbandClanResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymDisbandClan_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymChangedClanLogo_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymChangeClanLogo_Parms
{
	int InClanLogoId;
	int InClanLogoColorId;
	unsigned long InPayFronClanBank : 1;
};// FUNC_Exec

struct UCCCheatManager_execymClanCreationCanceled_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymCancelClanCreation_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymCreateClanResponse_Parms
{
	unsigned long InIsSuccess : 1;
	int InClanId;
};// FUNC_Exec

struct UCCCheatManager_execymCreateClan_Parms
{
	struct FString InName;
	struct FString InDescription;
	int InClanLogoId;
	int InClanLogoColorId;
};// FUNC_Exec

struct UCCCheatManager_execymClanRegister_Parms
{
	int Inm_ticket;
};// FUNC_Exec

struct UCCCheatManager_execymCraftRoomLeft_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymCraftRoomEntered_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymNotifyAboutReadedEventDeclarations_Parms
{
	TArray< int > InEventMessageId;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyReadEventDeclaration_Parms
{
	int InEventMessageId;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyEventDeclarationsChangedInOffline_Parms
{
	unsigned char InType;
};// FUNC_Exec

struct UCCCheatManager_execymRejectedEventDeclaration_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymRejectEventDeclaration_Parms
{
	int InEventMessageId;
};// FUNC_Exec

struct UCCCheatManager_execymAcceptedEventDeclaration_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymAcceptEventDeclaration_Parms
{
	int InEventMessageId;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyDeleteEventDeclaration_Parms
{
	int InEventMessageId;
};// FUNC_Exec

struct UCCCheatManager_execymDeletedEventDeclaration_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymDeleteEventDeclaration_Parms
{
	int InEventMessageId;
};// FUNC_Exec

struct UCCCheatManager_execymUpdatedEventDeclaration_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymUpdateEventDeclaration_Parms
{
	int InEventMessageId;
	struct FServerDateTime InDateTime;
	int InTypeId;
	struct FString InTitle;
	struct FString InText;
	int InEventDuration;
	unsigned long InCreatorWillPresent : 1;
	unsigned long InRequestForVisit : 1;
};// FUNC_Exec

struct UCCCheatManager_execymCreatedEventDeclaration_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymCreateEventDeclaration_Parms
{
	struct FServerDateTime InDateTime;
	int InTypeId;
	struct FString InTitle;
	struct FString InText;
	TArray< unsigned char > InRankIDs;
	int InEventDuration;
	unsigned long InCreatorWillPresent : 1;
	int InMinCharacterLevel;
	int InMaxCharacterLevel;
	unsigned long InPrivateMessageStatus : 1;
	unsigned long InRequestForVisit : 1;
};// FUNC_Exec

struct UCCCheatManager_execymCreatedEventManager_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymCreateEventManager_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymCurrentPlanProductionResponse_Parms
{
	int InCurrentPlanId;
	int InNextPlanId;
	int InSecondsLeft;
	unsigned char InCurrentPlanProductionResult;
};// FUNC_Exec

struct UCCCheatManager_execymAppointedPlanProduction_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymAppointPlanProduction_Parms
{
	int InPlanId;
};// FUNC_Exec

struct UCCCheatManager_execymTookOutPlanProduction_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymTakeOutPlanProduction_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymBoughtCraftFunctionality_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymBuyCraftFunctionality_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymBoughtBuffSlot_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymBuyBuffSlot_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymNotifyPushbuffItemCooldown_Parms
{
	int InMinutesLeft;
};// FUNC_Exec

struct UCCCheatManager_execymBoughtClanHallVisualizationSlot_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymBuyClanHallVisualizationSlot_Parms
{
	unsigned char InSlotId;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyVendorCooldown_Parms
{
	int InMinutesLeft;
};// FUNC_Exec

struct UCCCheatManager_execymChangeVendorNotification_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymCreatedVendor_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymCreateVendor_Parms
{
	int InShopTemplateId;
};// FUNC_Exec

struct UCCCheatManager_execymCreatedPostBox_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymCreatePostBox_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymCreateClubVendorResponse_Parms
{
	unsigned char InResultCode;
};// FUNC_Exec

struct UCCCheatManager_execymCreateClubVendor_Parms
{
	int InFunctionalityType;
};// FUNC_Exec

struct UCCCheatManager_execymExitedClanHall_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymExitClanHall_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymSkipEnteringClanHall_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymEnteredClanHall_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymEnterClanHallResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymEnterClanHall_Parms
{
	int InClanHallId;
};// FUNC_Exec

struct UCCCheatManager_execymCreatedClanHall_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymCreateClanHall_Parms
{
	int InLobbyId;
	int InClanHallTypeId;
	unsigned char InSpecialization;
};// FUNC_Exec

struct UCCCheatManager_execymResponseClanBankLog_Parms
{
	TArray< struct FClanBankCashLogRecord > InCashLog;
	TArray< struct FClanBankItemLogRecord > InItemLog;
	int InLastCashLogRecord;
	int InLastItemLogRecord;
};// FUNC_Exec

struct UCCCheatManager_execymRequestClanBankLog_Parms
{
	int InLastCashLogRecord;
	int InLastItemLogRecord;
};// FUNC_Exec

struct UCCCheatManager_execymPlacedCashIntoClanBank_Parms
{
	unsigned long InIsSuccess : 1;
};// FUNC_Exec

struct UCCCheatManager_execymPlaceCashIntoClanBank_Parms
{
	int inAmount;
};// FUNC_Exec

struct UCCCheatManager_execymRenamedClanBankTab_Parms
{
	unsigned long InIsSuccess : 1;
};// FUNC_Exec

struct UCCCheatManager_execymRenameClanBankTab_Parms
{
	unsigned char InTabIndex;
	struct FString InNewCaption;
};// FUNC_Exec

struct UCCCheatManager_execymBoughtClanBankTab_Parms
{
	unsigned long InIsSuccess : 1;
};// FUNC_Exec

struct UCCCheatManager_execymBuyClanBankTab_Parms
{
	struct FString InCaption;
};// FUNC_Exec

struct UCCCheatManager_execymBoughtClanBank_Parms
{
	unsigned long InIsSuccess : 1;
};// FUNC_Exec

struct UCCCheatManager_execymBuyClanBank_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymCheat_SetTestTournament_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymCheat_GainInstanceLoot_Parms
{
	int InInstanceId;
	int InWinType;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_AddTitle_Parms
{
	int InTitleId;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_SetStartingLobby_Parms
{
	int InLobbyId;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_SetDesignConstant_Parms
{
	struct FString InName;
	struct FString InValue;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_SetInstanceForPromotion_Parms
{
	int InInstanceId;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_SetInstanceGameTime_Parms
{
	int InInstanceId;
	int InGameTime;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_SetInstanceWarmupTime_Parms
{
	int InInstanceId;
	int InWarmupTime;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_SetInstanceMinPlayers_Parms
{
	int InInstanceId;
	int InMinPlayers;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_GainPvPScore_Parms
{
	int InScore;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_RecalculateTitle_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymCheat_RecalculateScore_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymCheat_StartNewClanWarSeason_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymCheat_StartNextTournamentRound_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymCheat_StopWaitingDemandForClanWarTournament_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymCheat_StartTournamentFreeze_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymCheat_GainClanRate_Parms
{
	int InRate;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_GainClan_Parms
{
	struct FString InName;
	struct FString InDescription;
	int InClanLogoId;
	int InClanLogoColorId;
};// FUNC_Exec

struct UCCCheatManager_execymGoToLobby_Parms
{
	int InLobbyId;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_GainCounter_Parms
{
	int InType;
	int InValue;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_CompleteQuest_Parms
{
	int InQuestId;
	unsigned long InOnlyMark : 1;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_GainQuest_Parms
{
	int InQuestId;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_GainItem_Parms
{
	int InItemTemplateId;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_GainCraftAbility_Parms
{
	int InCraftAbilityId;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_GainAbility_Parms
{
	int InAbilityId;
	unsigned char InLevel;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_GainProffesion_Parms
{
	int InProffesionId;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_GainExperiencePoints_Parms
{
	int inAmount;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_GainGold_Parms
{
	int inAmount;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_GainCash_Parms
{
	int inAmount;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_GainAbilityPoints_Parms
{
	int inAmount;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_GainProfessionLevel_Parms
{
	unsigned char InNewLevel;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_SetItemDurability_Parms
{
	int InItemId;
	int InDurability;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_GainClanLevel_Parms
{
	unsigned char InLevel;
};// FUNC_Exec

struct UCCCheatManager_execymCheat_GainLevel_Parms
{
	unsigned char InNewLevel;
};// FUNC_Exec

struct UCCCheatManager_execymDisableVoice_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymEnableVoice_Parms
{
	int InChannelId;
};// FUNC_Exec

struct UCCCheatManager_execymChannelOwnerChanged_Parms
{
	int InChannelId;
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymSetChannelOwner_Parms
{
	int InChannelId;
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymCharacterKicked_Parms
{
	int InChannelId;
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymKickCharacter_Parms
{
	int InChannelId;
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymLeaveChannel_Parms
{
	int InChannelId;
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymLeaveChannelRequest_Parms
{
	int InChannelId;
};// FUNC_Exec

struct UCCCheatManager_execymJoinChannelResponse_Parms
{
	int InChannelId;
	TArray< int > InCharacterList;
};// FUNC_Exec

struct UCCCheatManager_execymJoinChannel_Parms
{
	int InChannelId;
	int inCharacter;
};// FUNC_Exec

struct UCCCheatManager_execymInviteToChannelResponse_Parms
{
	int InChannelId;
	unsigned long InAccept : 1;
};// FUNC_Exec

struct UCCCheatManager_execymInviteToChannel_Parms
{
	int InChannelId;
	struct FString InChannelName;
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymInviteToChannelRequest_Parms
{
	int InChannelId;
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymCreateChannelResponse_Parms
{
	int InChannelId;
};// FUNC_Exec

struct UCCCheatManager_execymCreateChannel_Parms
{
	struct FString InName;
};// FUNC_Exec

struct UCCCheatManager_execymMessageRecieved_Parms
{
	int InSenderCharacterId;
	struct FString InSenderCharacterName;
	int InSendedChannelId;
	struct FString InMessageText;
};// FUNC_Exec

struct UCCCheatManager_execymSendMessageResponse_Parms
{
	unsigned char InResponse;
};// FUNC_Exec

struct UCCCheatManager_execymSendChannelMessage_Parms
{
	int InChannelTypeId;
	struct FString InMessageText;
};// FUNC_Exec

struct UCCCheatManager_execymSendPrivateMessageEx_Parms
{
	struct FString InTargetCharacterName;
	struct FString InMessageText;
};// FUNC_Exec

struct UCCCheatManager_execymSendPrivateMessage_Parms
{
	int InTargetCharacterId;
	struct FString InMessageText;
};// FUNC_Exec

struct UCCCheatManager_execymMoveCharacterToFriendListGroup_Parms
{
	int InCharacterId;
	int InGroupId;
};// FUNC_Exec

struct UCCCheatManager_execymRenameFriendListGroup_Parms
{
	int InGroupId;
	struct FString InGroupName;
};// FUNC_Exec

struct UCCCheatManager_execymDeleteFriendListGroup_Parms
{
	int InGroupId;
};// FUNC_Exec

struct UCCCheatManager_execymCreateFriendListGroupResponse_Parms
{
	unsigned char InResponse;
};// FUNC_Exec

struct UCCCheatManager_execymCreateFriendListGroup_Parms
{
	struct FString InGroupName;
};// FUNC_Exec

struct UCCCheatManager_execymAttachNotesToCharacter_Parms
{
	int InCharacterId;
	struct FString InNotesText;
};// FUNC_Exec

struct UCCCheatManager_execymDeleteCharacterFromBlackListResponse_Parms
{
	int InCharacterId;
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymDeleteCharacterFromFriendListResponse_Parms
{
	int InCharacterId;
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymAddCharacterToBlackListResponse_Parms
{
	int InCharacterId;
	struct FString InCharacterName;
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymAddCharacterToFriendListResponse_Parms
{
	int InCharacterId;
	struct FString InCharacterName;
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymDeleteCharacterFromBlackList_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymAddCharacterToBlackListEx_Parms
{
	struct FString InTargetCharacterName;
};// FUNC_Exec

struct UCCCheatManager_execymAddCharacterToBlackList_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymDeleteCharacterFromFriendList_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymAddCharacterToFriendListEx_Parms
{
	struct FString InTargetCharacterName;
};// FUNC_Exec

struct UCCCheatManager_execymAddCharacterToFriendList_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymKeyPreset_Parms
{
	int InCharacterId;
	struct FString InData;
};// FUNC_Exec

struct UCCCheatManager_execymSetKeyPreset_Parms
{
	int InCharacterId;
	struct FString InData;
};// FUNC_Exec

struct UCCCheatManager_execymSetNameColor_Parms
{
	int InColorId;
};// FUNC_Exec

struct UCCCheatManager_execymSendEmail_Parms
{
	unsigned char InFeedbackType;
	struct FString InSubject;
	struct FString InText;
};// FUNC_Exec

struct UCCCheatManager_execymResponseCharacterIdByName_Parms
{
	int InCharacterId;
	struct FString InCharacterName;
};// FUNC_Exec

struct UCCCheatManager_execymRequestCharacterIdByName_Parms
{
	struct FString InCharacterName;
};// FUNC_Exec

struct UCCCheatManager_execymCharacterChangeDistrict_Parms
{
	int InDistrictId;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyCharacterPosition_Parms
{
	int InCharacterId;
	struct FCharacterPosition InPosition;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyCharacterStatus_Parms
{
	int InCharacterId;
	unsigned char InStatus;
	int InLocationId;
	int InDistrictId;
};// FUNC_Exec

struct UCCCheatManager_execymJoinToBroadcastStationResponse_Parms
{
	unsigned char InResponse;
};// FUNC_Exec

struct UCCCheatManager_execymJoinToBroadcastStation_Parms
{
	int InTicket1;
	int InTicket2;
};// FUNC_Exec

struct UCCCheatManager_execymTransmissionToStation_Parms
{
	TArray< unsigned char > InTransmission;
};// FUNC_Exec

struct UCCCheatManager_execymGotTransmission_Parms
{
	int InCharacterId;
	TArray< unsigned char > InTransmission;
};// FUNC_Exec

struct UCCCheatManager_execymVoiceStationListeners_Parms
{
	TArray< int > InCharacterIds;
};// FUNC_Exec

struct UCCCheatManager_execymLeaveVoiceBroadcastStation_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymJoinedToVoiceBroadcastStation_Parms
{
	int InCharacterId;
};// FUNC_Exec

struct UCCCheatManager_execymTicketToMovementBroadcastStation_Parms
{
	int InTicket1;
	int InTicket2;
	struct FString InHost;
	int InPort;
};// FUNC_Exec

struct UCCCheatManager_execymTicketToVoiceBroadcastStation_Parms
{
	int InTicket1;
	int InTicket2;
	struct FString InHost;
	int InPort;
};// FUNC_Exec

struct UCCCheatManager_execymGotMovementTransmission_Parms
{
	int InCharacterId;
	TArray< unsigned char > InTransmission;
};// FUNC_Exec

struct UCCCheatManager_execymGotVoiceTransmission_Parms
{
	int InCharacterId;
	TArray< unsigned char > InTransmission;
};// FUNC_Exec

struct UCCCheatManager_execymTransmissionToMovementStation_Parms
{
	TArray< unsigned char > InTransmission;
};// FUNC_Exec

struct UCCCheatManager_execymTransmissionToVoiceStation_Parms
{
	TArray< unsigned char > InTransmission;
};// FUNC_Exec

struct UCCCheatManager_execymJoinToMovementBroadcastStationResponse_Parms
{
	unsigned char InResponse;
};// FUNC_Exec

struct UCCCheatManager_execymJoinToVoiceBroadcastStationResponse_Parms
{
	unsigned char InResponse;
};// FUNC_Exec

struct UCCCheatManager_execymJoinToMovementBroadcastStation_Parms
{
	int InTicket1;
	int InTicket2;
};// FUNC_Exec

struct UCCCheatManager_execymJoinToVoiceBroadcastStation_Parms
{
	int InTicket1;
	int InTicket2;
};// FUNC_Exec

struct UCCCheatManager_execymRenameBankTabResponse_Parms
{
	unsigned long InIsSuccess : 1;
};// FUNC_Exec

struct UCCCheatManager_execymRenameBankTab_Parms
{
	unsigned char InTabIndex;
	struct FString InCaption;
};// FUNC_Exec

struct UCCCheatManager_execymBuyNewBankTabResponse_Parms
{
	unsigned long InIsSuccess : 1;
};// FUNC_Exec

struct UCCCheatManager_execymBuyNewBankTab_Parms
{
	struct FString InCaption;
};// FUNC_Exec

struct UCCCheatManager_execymAuctionStatisticsTimeList_Parms
{
	TArray< struct FAuctionStatisticsTime > InTimes;
};// FUNC_Exec

struct UCCCheatManager_execymAuctionStatisticsData_Parms
{
	int InHistoricalMinPrice;
	int InHistoricalMinStackPrice;
	int InHistoricalMaxPrice;
	int InHistoricalMaxStackPrice;
	int InHistoricalItemCount;
	int InHistoricalStackCount;
	int InHistoricalWeightedAveragePrice;
	int InHistoricalWeightedAverageStackPrice;
	int InCurrentMinBuyoutPrice;
	int InCurrentMinBuyoutStackPrice;
	int InCurrentMaxBuyoutPrice;
	int InCurrentMaxBuyoutStackPrice;
	int InCurrentWeightedAverageBuyoutPrice;
	int InCurrentWeightedAverageBuyoutStackPrice;
	int InCurrentMinPrice;
	int InCurrentMinStackPrice;
	int InCurrentMaxPrice;
	int InCurrentMaxStackPrice;
	int InCurrentItemCount;
	int InCurrentStackCount;
	int InCurrentWeightedAveragePrice;
	int InCurrentWeightedAverageStackPrice;
	int InCurrentWeightedAverageBid;
	int InCurrentWeightedAverageStackBid;
};// FUNC_Exec

struct UCCCheatManager_execymAuctionStatisticsResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymAuctionStatisticsRequest_Parms
{
	int InTemplateId;
};// FUNC_Exec

struct UCCCheatManager_execymBuyAuctionStatisticsTime_Parms
{
	int InTemplateId;
};// FUNC_Exec

struct UCCCheatManager_execymDisableAutoupdateLotList_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymEnableAutoupdateLotList_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymLotListUpdate_Parms
{
	int InRequestId;
	TArray< struct FLotDesc > InLotAdd;
	TArray< int > InLotDelete;
};// FUNC_Exec

struct UCCCheatManager_execymLotListResponse_Parms
{
	int InRequestId;
	TArray< struct FLotDesc > InLotList;
};// FUNC_Exec

struct UCCCheatManager_execymLotListRequest_Parms
{
	int InFilterId;
	int InRequestId;
	unsigned char InSorter;
	int InStartIndex;
	int InCount;
};// FUNC_Exec

struct UCCCheatManager_execymFilterUserUpdate_Parms
{
	int InFilterId;
	int InLotCount;
};// FUNC_Exec

struct UCCCheatManager_execymFilterUserResponse_Parms
{
	int InFilterId;
	int InLotCount;
};// FUNC_Exec

struct UCCCheatManager_execymFilterUser_Parms
{
	int InFilterId;
	TArray< struct FFilterUnit > InFilters;
	TArray< struct FFilterUnitString > InFiltersString;
};// FUNC_Exec

struct UCCCheatManager_execymBuyoutLotResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymBuyoutLot_Parms
{
	int InLotId;
};// FUNC_Exec

struct UCCCheatManager_execymBidLotResponse_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymBidLot_Parms
{
	int InLotId;
	int InPrice;
};// FUNC_Exec

struct UCCCheatManager_execymCanceledLot_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymCancelLot_Parms
{
	int InLotId;
};// FUNC_Exec

struct UCCCheatManager_execymCreatedLot_Parms
{
	unsigned char InResult;
};// FUNC_Exec

struct UCCCheatManager_execymCreateLot_Parms
{
	int InItemId;
	int InStartPrice;
	int InBuyoutPrice;
	int InBidStep;
	int InTTL;
};// FUNC_Exec

struct UCCCheatManager_execymGotCharacterStatistic_Parms
{
	TArray< struct FStatisticParameterDescription > InStatisticParameter;
};// FUNC_Exec

struct UCCCheatManager_execymGetCharacterStatistic_Parms
{
};// FUNC_Exec

struct UCCCheatManager_execymNotifyKnownAbilities_Parms
{
	TArray< struct FNotifyKnownAbilities_NonPremiumAbility > InNonPremiumAbilities;
	TArray< struct FNotifyKnownAbilities_PremiumAbilityWithLimitedTime > InPremiumAbilitiesWithLimitedTime;
	TArray< struct FNotifyKnownAbilities_PremiumAbilityWithLimitedUses > InPremiumAbilitiesWithLimitedUses;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyAbilityExpiration_Parms
{
	int InAbilityId;
};// FUNC_Exec

struct UCCCheatManager_execymChangedAbilitiesOnActionBar_Parms
{
	unsigned long InIsSuccess : 1;
};// FUNC_Exec

struct UCCCheatManager_execymChangeAbilitiesOnActionBar_Parms
{
	TArray< int > InAbilities;
};// FUNC_Exec

struct UCCCheatManager_execymNotifyActionBarAbilities_Parms
{
	TArray< int > InAbilitiesOnActionBar;
};// FUNC_Exec

struct UCCCheatManager_execymRaisedAbilityLevels_Parms
{
	unsigned long InIsSuccess : 1;
};// FUNC_Exec

struct UCCCheatManager_execymRaiseAbilityLevels_Parms
{
	TArray< struct FAbilityRiseDescription > InAbilitiesToRaise;
};// FUNC_Exec

struct UCCCheatManager_execymResetAbilities_Parms
{
};// FUNC_Exec

// (0x3C - 0x48)
class UCCCheatManager : public UCheatManager
{
public:
	struct FName                                       LastState;                                   // 0x003C (0x0008)
	class APawn*                                       LastPawn;                                    // 0x0044 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCCheatManager" );

		return ClassPointer;
	};

public:
	void ListAbility ()
	{
		static UFunction* pfnListAbility = NULL;

		if ( !pfnListAbility )
			pfnListAbility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ListAbility" );

		UCCCheatManager_execListAbility_Parms ListAbility_Parms;

		this->ProcessEvent( pfnListAbility, &ListAbility_Parms, NULL );
	};

	void ListAbilityShop ()
	{
		static UFunction* pfnListAbilityShop = NULL;

		if ( !pfnListAbilityShop )
			pfnListAbilityShop = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ListAbilityShop" );

		UCCCheatManager_execListAbilityShop_Parms ListAbilityShop_Parms;

		this->ProcessEvent( pfnListAbilityShop, &ListAbilityShop_Parms, NULL );
	};

	TArray< int > GetAvailableAbilities ()
	{
		static UFunction* pfnGetAvailableAbilities = NULL;

		if ( !pfnGetAvailableAbilities )
			pfnGetAvailableAbilities = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.GetAvailableAbilities" );

		UCCCheatManager_execGetAvailableAbilities_Parms GetAvailableAbilities_Parms;

		pfnGetAvailableAbilities->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetAvailableAbilities, &GetAvailableAbilities_Parms, NULL );
		pfnGetAvailableAbilities->FunctionFlags |= 0x400;

		return GetAvailableAbilities_Parms.ReturnValue;
	};

	void EndAbilityShopping ( int Id )
	{
		static UFunction* pfnEndAbilityShopping = NULL;

		if ( !pfnEndAbilityShopping )
			pfnEndAbilityShopping = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.EndAbilityShopping" );

		UCCCheatManager_execEndAbilityShopping_Parms EndAbilityShopping_Parms;
		EndAbilityShopping_Parms.Id = Id;

		pfnEndAbilityShopping->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnEndAbilityShopping, &EndAbilityShopping_Parms, NULL );
		pfnEndAbilityShopping->FunctionFlags |= 0x400;
	};

	void BuyAbility ( int Id )
	{
		static UFunction* pfnBuyAbility = NULL;

		if ( !pfnBuyAbility )
			pfnBuyAbility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.BuyAbility" );

		UCCCheatManager_execBuyAbility_Parms BuyAbility_Parms;
		BuyAbility_Parms.Id = Id;

		pfnBuyAbility->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnBuyAbility, &BuyAbility_Parms, NULL );
		pfnBuyAbility->FunctionFlags |= 0x400;
	};

	void StartAbilityShopping ( int NpcId )
	{
		static UFunction* pfnStartAbilityShopping = NULL;

		if ( !pfnStartAbilityShopping )
			pfnStartAbilityShopping = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.StartAbilityShopping" );

		UCCCheatManager_execStartAbilityShopping_Parms StartAbilityShopping_Parms;
		StartAbilityShopping_Parms.NpcId = NpcId;

		pfnStartAbilityShopping->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnStartAbilityShopping, &StartAbilityShopping_Parms, NULL );
		pfnStartAbilityShopping->FunctionFlags |= 0x400;
	};

	void FixShadow ()
	{
		static UFunction* pfnFixShadow = NULL;

		if ( !pfnFixShadow )
			pfnFixShadow = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.FixShadow" );

		UCCCheatManager_execFixShadow_Parms FixShadow_Parms;

		this->ProcessEvent( pfnFixShadow, &FixShadow_Parms, NULL );
	};

	void ListClanMembers ( int Id )
	{
		static UFunction* pfnListClanMembers = NULL;

		if ( !pfnListClanMembers )
			pfnListClanMembers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ListClanMembers" );

		UCCCheatManager_execListClanMembers_Parms ListClanMembers_Parms;
		ListClanMembers_Parms.Id = Id;

		this->ProcessEvent( pfnListClanMembers, &ListClanMembers_Parms, NULL );
	};

	void ListClans ()
	{
		static UFunction* pfnListClans = NULL;

		if ( !pfnListClans )
			pfnListClans = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ListClans" );

		UCCCheatManager_execListClans_Parms ListClans_Parms;

		this->ProcessEvent( pfnListClans, &ListClans_Parms, NULL );
	};

	void ListGroupMembers ()
	{
		static UFunction* pfnListGroupMembers = NULL;

		if ( !pfnListGroupMembers )
			pfnListGroupMembers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ListGroupMembers" );

		UCCCheatManager_execListGroupMembers_Parms ListGroupMembers_Parms;

		this->ProcessEvent( pfnListGroupMembers, &ListGroupMembers_Parms, NULL );
	};

	TArray< struct FCheatClanInfo > GetClanList ()
	{
		static UFunction* pfnGetClanList = NULL;

		if ( !pfnGetClanList )
			pfnGetClanList = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.GetClanList" );

		UCCCheatManager_execGetClanList_Parms GetClanList_Parms;

		pfnGetClanList->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetClanList, &GetClanList_Parms, NULL );
		pfnGetClanList->FunctionFlags |= 0x400;

		return GetClanList_Parms.ReturnValue;
	};

	TArray< int > GetGroupMembers ()
	{
		static UFunction* pfnGetGroupMembers = NULL;

		if ( !pfnGetGroupMembers )
			pfnGetGroupMembers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.GetGroupMembers" );

		UCCCheatManager_execGetGroupMembers_Parms GetGroupMembers_Parms;

		pfnGetGroupMembers->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetGroupMembers, &GetGroupMembers_Parms, NULL );
		pfnGetGroupMembers->FunctionFlags |= 0x400;

		return GetGroupMembers_Parms.ReturnValue;
	};

	void ViewNextBot ( int Dir )
	{
		static UFunction* pfnViewNextBot = NULL;

		if ( !pfnViewNextBot )
			pfnViewNextBot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ViewNextBot" );

		UCCCheatManager_execViewNextBot_Parms ViewNextBot_Parms;
		ViewNextBot_Parms.Dir = Dir;

		this->ProcessEvent( pfnViewNextBot, &ViewNextBot_Parms, NULL );
	};

	void EndSpectator ()
	{
		static UFunction* pfnEndSpectator = NULL;

		if ( !pfnEndSpectator )
			pfnEndSpectator = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.EndSpectator" );

		UCCCheatManager_execEndSpectator_Parms EndSpectator_Parms;

		this->ProcessEvent( pfnEndSpectator, &EndSpectator_Parms, NULL );
	};

	void StartSpectator ()
	{
		static UFunction* pfnStartSpectator = NULL;

		if ( !pfnStartSpectator )
			pfnStartSpectator = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.StartSpectator" );

		UCCCheatManager_execStartSpectator_Parms StartSpectator_Parms;

		this->ProcessEvent( pfnStartSpectator, &StartSpectator_Parms, NULL );
	};

	void EndDebugSpectator ()
	{
		static UFunction* pfnEndDebugSpectator = NULL;

		if ( !pfnEndDebugSpectator )
			pfnEndDebugSpectator = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.EndDebugSpectator" );

		UCCCheatManager_execEndDebugSpectator_Parms EndDebugSpectator_Parms;

		this->ProcessEvent( pfnEndDebugSpectator, &EndDebugSpectator_Parms, NULL );
	};

	void StartDebugSpectator ()
	{
		static UFunction* pfnStartDebugSpectator = NULL;

		if ( !pfnStartDebugSpectator )
			pfnStartDebugSpectator = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.StartDebugSpectator" );

		UCCCheatManager_execStartDebugSpectator_Parms StartDebugSpectator_Parms;

		this->ProcessEvent( pfnStartDebugSpectator, &StartDebugSpectator_Parms, NULL );
	};

	void pp ()
	{
		static UFunction* pfnpp = NULL;

		if ( !pfnpp )
			pfnpp = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.pp" );

		UCCCheatManager_execpp_Parms pp_Parms;

		this->ProcessEvent( pfnpp, &pp_Parms, NULL );
	};

	void EndPause ()
	{
		static UFunction* pfnEndPause = NULL;

		if ( !pfnEndPause )
			pfnEndPause = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.EndPause" );

		UCCCheatManager_execEndPause_Parms EndPause_Parms;

		this->ProcessEvent( pfnEndPause, &EndPause_Parms, NULL );
	};

	void startPause ()
	{
		static UFunction* pfnstartPause = NULL;

		if ( !pfnstartPause )
			pfnstartPause = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.startPause" );

		UCCCheatManager_execstartPause_Parms startPause_Parms;

		this->ProcessEvent( pfnstartPause, &startPause_Parms, NULL );
	};

	void ToggleSpectator ()
	{
		static UFunction* pfnToggleSpectator = NULL;

		if ( !pfnToggleSpectator )
			pfnToggleSpectator = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ToggleSpectator" );

		UCCCheatManager_execToggleSpectator_Parms ToggleSpectator_Parms;

		this->ProcessEvent( pfnToggleSpectator, &ToggleSpectator_Parms, NULL );
	};

	void TogglePause ()
	{
		static UFunction* pfnTogglePause = NULL;

		if ( !pfnTogglePause )
			pfnTogglePause = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.TogglePause" );

		UCCCheatManager_execTogglePause_Parms TogglePause_Parms;

		this->ProcessEvent( pfnTogglePause, &TogglePause_Parms, NULL );
	};

	void ExtractItemsFromFile ( struct FString Path )
	{
		static UFunction* pfnExtractItemsFromFile = NULL;

		if ( !pfnExtractItemsFromFile )
			pfnExtractItemsFromFile = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ExtractItemsFromFile" );

		UCCCheatManager_execExtractItemsFromFile_Parms ExtractItemsFromFile_Parms;
		memcpy( &ExtractItemsFromFile_Parms.Path, &Path, 0xC );

		pfnExtractItemsFromFile->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnExtractItemsFromFile, &ExtractItemsFromFile_Parms, NULL );
		pfnExtractItemsFromFile->FunctionFlags |= 0x400;
	};

	void AddItemToXML ( struct FString Path, int Id )
	{
		static UFunction* pfnAddItemToXML = NULL;

		if ( !pfnAddItemToXML )
			pfnAddItemToXML = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.AddItemToXML" );

		UCCCheatManager_execAddItemToXML_Parms AddItemToXML_Parms;
		memcpy( &AddItemToXML_Parms.Path, &Path, 0xC );
		AddItemToXML_Parms.Id = Id;

		pfnAddItemToXML->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAddItemToXML, &AddItemToXML_Parms, NULL );
		pfnAddItemToXML->FunctionFlags |= 0x400;
	};

	void ImportXMLDB ( struct FString Path )
	{
		static UFunction* pfnImportXMLDB = NULL;

		if ( !pfnImportXMLDB )
			pfnImportXMLDB = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ImportXMLDB" );

		UCCCheatManager_execImportXMLDB_Parms ImportXMLDB_Parms;
		memcpy( &ImportXMLDB_Parms.Path, &Path, 0xC );

		pfnImportXMLDB->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnImportXMLDB, &ImportXMLDB_Parms, NULL );
		pfnImportXMLDB->FunctionFlags |= 0x400;
	};

	void NativeClassHack ()
	{
		static UFunction* pfnNativeClassHack = NULL;

		if ( !pfnNativeClassHack )
			pfnNativeClassHack = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.NativeClassHack" );

		UCCCheatManager_execNativeClassHack_Parms NativeClassHack_Parms;

		this->ProcessEvent( pfnNativeClassHack, &NativeClassHack_Parms, NULL );
	};

	void ai_removebot ()
	{
		static UFunction* pfnai_removebot = NULL;

		if ( !pfnai_removebot )
			pfnai_removebot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ai_removebot" );

		UCCCheatManager_execai_removebot_Parms ai_removebot_Parms;

		this->ProcessEvent( pfnai_removebot, &ai_removebot_Parms, NULL );
	};

	void ai_addbot ( int TeamNum, struct FString rosterId )
	{
		static UFunction* pfnai_addbot = NULL;

		if ( !pfnai_addbot )
			pfnai_addbot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ai_addbot" );

		UCCCheatManager_execai_addbot_Parms ai_addbot_Parms;
		ai_addbot_Parms.TeamNum = TeamNum;
		memcpy( &ai_addbot_Parms.rosterId, &rosterId, 0xC );

		this->ProcessEvent( pfnai_addbot, &ai_addbot_Parms, NULL );
	};

	void ai_sleep ( float Val )
	{
		static UFunction* pfnai_sleep = NULL;

		if ( !pfnai_sleep )
			pfnai_sleep = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ai_sleep" );

		UCCCheatManager_execai_sleep_Parms ai_sleep_Parms;
		ai_sleep_Parms.Val = Val;

		this->ProcessEvent( pfnai_sleep, &ai_sleep_Parms, NULL );
	};

	void ai_invis ()
	{
		static UFunction* pfnai_invis = NULL;

		if ( !pfnai_invis )
			pfnai_invis = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ai_invis" );

		UCCCheatManager_execai_invis_Parms ai_invis_Parms;

		this->ProcessEvent( pfnai_invis, &ai_invis_Parms, NULL );
	};

	void UDSManagerStat ( int InLevel/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnUDSManagerStat = NULL;

		if ( !pfnUDSManagerStat )
			pfnUDSManagerStat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.UDSManagerStat" );

		UCCCheatManager_execUDSManagerStat_Parms UDSManagerStat_Parms;
		UDSManagerStat_Parms.InLevel = InLevel;

		this->ProcessEvent( pfnUDSManagerStat, &UDSManagerStat_Parms, NULL );
	};

	void RealmSelectorStat ( int InLevel/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnRealmSelectorStat = NULL;

		if ( !pfnRealmSelectorStat )
			pfnRealmSelectorStat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.RealmSelectorStat" );

		UCCCheatManager_execRealmSelectorStat_Parms RealmSelectorStat_Parms;
		RealmSelectorStat_Parms.InLevel = InLevel;

		this->ProcessEvent( pfnRealmSelectorStat, &RealmSelectorStat_Parms, NULL );
	};

	void BroadcastMovementStat ( int InLevel/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnBroadcastMovementStat = NULL;

		if ( !pfnBroadcastMovementStat )
			pfnBroadcastMovementStat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.BroadcastMovementStat" );

		UCCCheatManager_execBroadcastMovementStat_Parms BroadcastMovementStat_Parms;
		BroadcastMovementStat_Parms.InLevel = InLevel;

		this->ProcessEvent( pfnBroadcastMovementStat, &BroadcastMovementStat_Parms, NULL );
	};

	void BroadcastVoiceStat ( int InLevel/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnBroadcastVoiceStat = NULL;

		if ( !pfnBroadcastVoiceStat )
			pfnBroadcastVoiceStat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.BroadcastVoiceStat" );

		UCCCheatManager_execBroadcastVoiceStat_Parms BroadcastVoiceStat_Parms;
		BroadcastVoiceStat_Parms.InLevel = InLevel;

		this->ProcessEvent( pfnBroadcastVoiceStat, &BroadcastVoiceStat_Parms, NULL );
	};

	void BroadcastStat ( int InLevel/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnBroadcastStat = NULL;

		if ( !pfnBroadcastStat )
			pfnBroadcastStat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.BroadcastStat" );

		UCCCheatManager_execBroadcastStat_Parms BroadcastStat_Parms;
		BroadcastStat_Parms.InLevel = InLevel;

		this->ProcessEvent( pfnBroadcastStat, &BroadcastStat_Parms, NULL );
	};

	void YakaStat ( int InLevel/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnYakaStat = NULL;

		if ( !pfnYakaStat )
			pfnYakaStat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.YakaStat" );

		UCCCheatManager_execYakaStat_Parms YakaStat_Parms;
		YakaStat_Parms.InLevel = InLevel;

		this->ProcessEvent( pfnYakaStat, &YakaStat_Parms, NULL );
	};

	void ymUDSTestConnect ( int InCharacterId )
	{
		static UFunction* pfnymUDSTestConnect = NULL;

		if ( !pfnymUDSTestConnect )
			pfnymUDSTestConnect = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUDSTestConnect" );

		UCCCheatManager_execymUDSTestConnect_Parms ymUDSTestConnect_Parms;
		ymUDSTestConnect_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymUDSTestConnect, &ymUDSTestConnect_Parms, NULL );
	};

	void ymUDSClose ()
	{
		static UFunction* pfnymUDSClose = NULL;

		if ( !pfnymUDSClose )
			pfnymUDSClose = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUDSClose" );

		UCCCheatManager_execymUDSClose_Parms ymUDSClose_Parms;

		this->ProcessEvent( pfnymUDSClose, &ymUDSClose_Parms, NULL );
	};

	void ymUDSFree ()
	{
		static UFunction* pfnymUDSFree = NULL;

		if ( !pfnymUDSFree )
			pfnymUDSFree = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUDSFree" );

		UCCCheatManager_execymUDSFree_Parms ymUDSFree_Parms;

		this->ProcessEvent( pfnymUDSFree, &ymUDSFree_Parms, NULL );
	};

	void ymUDSStart ( int InUdsId, struct FString InMapData, struct FString InYakaHost, int InYakaPort )
	{
		static UFunction* pfnymUDSStart = NULL;

		if ( !pfnymUDSStart )
			pfnymUDSStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUDSStart" );

		UCCCheatManager_execymUDSStart_Parms ymUDSStart_Parms;
		ymUDSStart_Parms.InUdsId = InUdsId;
		memcpy( &ymUDSStart_Parms.InMapData, &InMapData, 0xC );
		memcpy( &ymUDSStart_Parms.InYakaHost, &InYakaHost, 0xC );
		ymUDSStart_Parms.InYakaPort = InYakaPort;

		this->ProcessEvent( pfnymUDSStart, &ymUDSStart_Parms, NULL );
	};

	void ymUDSReadyForInteraction ( struct FString InServerName )
	{
		static UFunction* pfnymUDSReadyForInteraction = NULL;

		if ( !pfnymUDSReadyForInteraction )
			pfnymUDSReadyForInteraction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUDSReadyForInteraction" );

		UCCCheatManager_execymUDSReadyForInteraction_Parms ymUDSReadyForInteraction_Parms;
		memcpy( &ymUDSReadyForInteraction_Parms.InServerName, &InServerName, 0xC );

		this->ProcessEvent( pfnymUDSReadyForInteraction, &ymUDSReadyForInteraction_Parms, NULL );
	};

	void ymBuyBackpackTabResponse ( unsigned char InReason )
	{
		static UFunction* pfnymBuyBackpackTabResponse = NULL;

		if ( !pfnymBuyBackpackTabResponse )
			pfnymBuyBackpackTabResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuyBackpackTabResponse" );

		UCCCheatManager_execymBuyBackpackTabResponse_Parms ymBuyBackpackTabResponse_Parms;
		ymBuyBackpackTabResponse_Parms.InReason = InReason;

		this->ProcessEvent( pfnymBuyBackpackTabResponse, &ymBuyBackpackTabResponse_Parms, NULL );
	};

	void ymBuyBackpackTab ()
	{
		static UFunction* pfnymBuyBackpackTab = NULL;

		if ( !pfnymBuyBackpackTab )
			pfnymBuyBackpackTab = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuyBackpackTab" );

		UCCCheatManager_execymBuyBackpackTab_Parms ymBuyBackpackTab_Parms;

		this->ProcessEvent( pfnymBuyBackpackTab, &ymBuyBackpackTab_Parms, NULL );
	};

	void ymBuySoldItemResult ( int InItemId, int InCount )
	{
		static UFunction* pfnymBuySoldItemResult = NULL;

		if ( !pfnymBuySoldItemResult )
			pfnymBuySoldItemResult = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuySoldItemResult" );

		UCCCheatManager_execymBuySoldItemResult_Parms ymBuySoldItemResult_Parms;
		ymBuySoldItemResult_Parms.InItemId = InItemId;
		ymBuySoldItemResult_Parms.InCount = InCount;

		this->ProcessEvent( pfnymBuySoldItemResult, &ymBuySoldItemResult_Parms, NULL );
	};

	void ymBuySoldItem ( int InItemId, int InStackCount )
	{
		static UFunction* pfnymBuySoldItem = NULL;

		if ( !pfnymBuySoldItem )
			pfnymBuySoldItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuySoldItem" );

		UCCCheatManager_execymBuySoldItem_Parms ymBuySoldItem_Parms;
		ymBuySoldItem_Parms.InItemId = InItemId;
		ymBuySoldItem_Parms.InStackCount = InStackCount;

		this->ProcessEvent( pfnymBuySoldItem, &ymBuySoldItem_Parms, NULL );
	};

	void ymDeleteSoldShopItems ( TArray< int > InItems )
	{
		static UFunction* pfnymDeleteSoldShopItems = NULL;

		if ( !pfnymDeleteSoldShopItems )
			pfnymDeleteSoldShopItems = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeleteSoldShopItems" );

		UCCCheatManager_execymDeleteSoldShopItems_Parms ymDeleteSoldShopItems_Parms;
		ymDeleteSoldShopItems_Parms.InItems = InItems;

		this->ProcessEvent( pfnymDeleteSoldShopItems, &ymDeleteSoldShopItems_Parms, NULL );
	};

	void ymAddSoldShopItem ( struct FItemDescription InItem, int InCount, int InPrice )
	{
		static UFunction* pfnymAddSoldShopItem = NULL;

		if ( !pfnymAddSoldShopItem )
			pfnymAddSoldShopItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAddSoldShopItem" );

		UCCCheatManager_execymAddSoldShopItem_Parms ymAddSoldShopItem_Parms;
		memcpy( &ymAddSoldShopItem_Parms.InItem, &InItem, 0x2C );
		ymAddSoldShopItem_Parms.InCount = InCount;
		ymAddSoldShopItem_Parms.InPrice = InPrice;

		this->ProcessEvent( pfnymAddSoldShopItem, &ymAddSoldShopItem_Parms, NULL );
	};

	void ymInitSoldShopItems ( TArray< struct FInitSoldShopItems_ItemDesc > InItems )
	{
		static UFunction* pfnymInitSoldShopItems = NULL;

		if ( !pfnymInitSoldShopItems )
			pfnymInitSoldShopItems = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitSoldShopItems" );

		UCCCheatManager_execymInitSoldShopItems_Parms ymInitSoldShopItems_Parms;
		memcpy( &ymInitSoldShopItems_Parms.InItems, &InItems, 0xC );

		this->ProcessEvent( pfnymInitSoldShopItems, &ymInitSoldShopItems_Parms, NULL );
	};

	void ymSellItem ( int Inm_item, int Inm_count )
	{
		static UFunction* pfnymSellItem = NULL;

		if ( !pfnymSellItem )
			pfnymSellItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSellItem" );

		UCCCheatManager_execymSellItem_Parms ymSellItem_Parms;
		ymSellItem_Parms.Inm_item = Inm_item;
		ymSellItem_Parms.Inm_count = Inm_count;

		this->ProcessEvent( pfnymSellItem, &ymSellItem_Parms, NULL );
	};

	void ymBuyPremiumWeaponColorsResponse ( unsigned char InReason )
	{
		static UFunction* pfnymBuyPremiumWeaponColorsResponse = NULL;

		if ( !pfnymBuyPremiumWeaponColorsResponse )
			pfnymBuyPremiumWeaponColorsResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuyPremiumWeaponColorsResponse" );

		UCCCheatManager_execymBuyPremiumWeaponColorsResponse_Parms ymBuyPremiumWeaponColorsResponse_Parms;
		ymBuyPremiumWeaponColorsResponse_Parms.InReason = InReason;

		this->ProcessEvent( pfnymBuyPremiumWeaponColorsResponse, &ymBuyPremiumWeaponColorsResponse_Parms, NULL );
	};

	void ymBuyPremiumWeaponColors ( TArray< int > InBoughtClassWeaponColors, TArray< int > InBoughtGeneralWeaponColors, TArray< int > InBoughtPistolWeaponColors )
	{
		static UFunction* pfnymBuyPremiumWeaponColors = NULL;

		if ( !pfnymBuyPremiumWeaponColors )
			pfnymBuyPremiumWeaponColors = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuyPremiumWeaponColors" );

		UCCCheatManager_execymBuyPremiumWeaponColors_Parms ymBuyPremiumWeaponColors_Parms;
		ymBuyPremiumWeaponColors_Parms.InBoughtClassWeaponColors = InBoughtClassWeaponColors;
		ymBuyPremiumWeaponColors_Parms.InBoughtGeneralWeaponColors = InBoughtGeneralWeaponColors;
		ymBuyPremiumWeaponColors_Parms.InBoughtPistolWeaponColors = InBoughtPistolWeaponColors;

		this->ProcessEvent( pfnymBuyPremiumWeaponColors, &ymBuyPremiumWeaponColors_Parms, NULL );
	};

	void ymInvalidBuyItemResponse ( unsigned char InReason )
	{
		static UFunction* pfnymInvalidBuyItemResponse = NULL;

		if ( !pfnymInvalidBuyItemResponse )
			pfnymInvalidBuyItemResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInvalidBuyItemResponse" );

		UCCCheatManager_execymInvalidBuyItemResponse_Parms ymInvalidBuyItemResponse_Parms;
		ymInvalidBuyItemResponse_Parms.InReason = InReason;

		this->ProcessEvent( pfnymInvalidBuyItemResponse, &ymInvalidBuyItemResponse_Parms, NULL );
	};

	void ymBuyPremiumStuffResponse ( unsigned char InReason )
	{
		static UFunction* pfnymBuyPremiumStuffResponse = NULL;

		if ( !pfnymBuyPremiumStuffResponse )
			pfnymBuyPremiumStuffResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuyPremiumStuffResponse" );

		UCCCheatManager_execymBuyPremiumStuffResponse_Parms ymBuyPremiumStuffResponse_Parms;
		ymBuyPremiumStuffResponse_Parms.InReason = InReason;

		this->ProcessEvent( pfnymBuyPremiumStuffResponse, &ymBuyPremiumStuffResponse_Parms, NULL );
	};

	void ymBuyPremiumStuff ( TArray< int > InBoughtAppearanceElementsIds, TArray< int > InBoughtItemTemplateIds, TArray< int > InBoughtDynamicItemColorWithPriceIds )
	{
		static UFunction* pfnymBuyPremiumStuff = NULL;

		if ( !pfnymBuyPremiumStuff )
			pfnymBuyPremiumStuff = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuyPremiumStuff" );

		UCCCheatManager_execymBuyPremiumStuff_Parms ymBuyPremiumStuff_Parms;
		ymBuyPremiumStuff_Parms.InBoughtAppearanceElementsIds = InBoughtAppearanceElementsIds;
		ymBuyPremiumStuff_Parms.InBoughtItemTemplateIds = InBoughtItemTemplateIds;
		ymBuyPremiumStuff_Parms.InBoughtDynamicItemColorWithPriceIds = InBoughtDynamicItemColorWithPriceIds;

		this->ProcessEvent( pfnymBuyPremiumStuff, &ymBuyPremiumStuff_Parms, NULL );
	};

	void ymBuyItemInRareShop ( int InTemplateId, int InStack, unsigned char InBackpackPage )
	{
		static UFunction* pfnymBuyItemInRareShop = NULL;

		if ( !pfnymBuyItemInRareShop )
			pfnymBuyItemInRareShop = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuyItemInRareShop" );

		UCCCheatManager_execymBuyItemInRareShop_Parms ymBuyItemInRareShop_Parms;
		ymBuyItemInRareShop_Parms.InTemplateId = InTemplateId;
		ymBuyItemInRareShop_Parms.InStack = InStack;
		ymBuyItemInRareShop_Parms.InBackpackPage = InBackpackPage;

		this->ProcessEvent( pfnymBuyItemInRareShop, &ymBuyItemInRareShop_Parms, NULL );
	};

	void ymBuyItemInClanHall ( int InTemplateId, int InStack, unsigned char InBackpackPage )
	{
		static UFunction* pfnymBuyItemInClanHall = NULL;

		if ( !pfnymBuyItemInClanHall )
			pfnymBuyItemInClanHall = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuyItemInClanHall" );

		UCCCheatManager_execymBuyItemInClanHall_Parms ymBuyItemInClanHall_Parms;
		ymBuyItemInClanHall_Parms.InTemplateId = InTemplateId;
		ymBuyItemInClanHall_Parms.InStack = InStack;
		ymBuyItemInClanHall_Parms.InBackpackPage = InBackpackPage;

		this->ProcessEvent( pfnymBuyItemInClanHall, &ymBuyItemInClanHall_Parms, NULL );
	};

	void ymBuyPremiumItem ( int InTemplateId, int InStack, unsigned char InBackpackPage )
	{
		static UFunction* pfnymBuyPremiumItem = NULL;

		if ( !pfnymBuyPremiumItem )
			pfnymBuyPremiumItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuyPremiumItem" );

		UCCCheatManager_execymBuyPremiumItem_Parms ymBuyPremiumItem_Parms;
		ymBuyPremiumItem_Parms.InTemplateId = InTemplateId;
		ymBuyPremiumItem_Parms.InStack = InStack;
		ymBuyPremiumItem_Parms.InBackpackPage = InBackpackPage;

		this->ProcessEvent( pfnymBuyPremiumItem, &ymBuyPremiumItem_Parms, NULL );
	};

	void ymBuyItem ( int InTemplateId, int InStack, unsigned char InBackpackPage )
	{
		static UFunction* pfnymBuyItem = NULL;

		if ( !pfnymBuyItem )
			pfnymBuyItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuyItem" );

		UCCCheatManager_execymBuyItem_Parms ymBuyItem_Parms;
		ymBuyItem_Parms.InTemplateId = InTemplateId;
		ymBuyItem_Parms.InStack = InStack;
		ymBuyItem_Parms.InBackpackPage = InBackpackPage;

		this->ProcessEvent( pfnymBuyItem, &ymBuyItem_Parms, NULL );
	};

	void ymTradeFinished ()
	{
		static UFunction* pfnymTradeFinished = NULL;

		if ( !pfnymTradeFinished )
			pfnymTradeFinished = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTradeFinished" );

		UCCCheatManager_execymTradeFinished_Parms ymTradeFinished_Parms;

		this->ProcessEvent( pfnymTradeFinished, &ymTradeFinished_Parms, NULL );
	};

	void ymTradeSubmited ()
	{
		static UFunction* pfnymTradeSubmited = NULL;

		if ( !pfnymTradeSubmited )
			pfnymTradeSubmited = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTradeSubmited" );

		UCCCheatManager_execymTradeSubmited_Parms ymTradeSubmited_Parms;

		this->ProcessEvent( pfnymTradeSubmited, &ymTradeSubmited_Parms, NULL );
	};

	void ymTradeSubmit ()
	{
		static UFunction* pfnymTradeSubmit = NULL;

		if ( !pfnymTradeSubmit )
			pfnymTradeSubmit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTradeSubmit" );

		UCCCheatManager_execymTradeSubmit_Parms ymTradeSubmit_Parms;

		this->ProcessEvent( pfnymTradeSubmit, &ymTradeSubmit_Parms, NULL );
	};

	void ymTradeOfferCanceled ()
	{
		static UFunction* pfnymTradeOfferCanceled = NULL;

		if ( !pfnymTradeOfferCanceled )
			pfnymTradeOfferCanceled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTradeOfferCanceled" );

		UCCCheatManager_execymTradeOfferCanceled_Parms ymTradeOfferCanceled_Parms;

		this->ProcessEvent( pfnymTradeOfferCanceled, &ymTradeOfferCanceled_Parms, NULL );
	};

	void ymTradeOfferCancel ()
	{
		static UFunction* pfnymTradeOfferCancel = NULL;

		if ( !pfnymTradeOfferCancel )
			pfnymTradeOfferCancel = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTradeOfferCancel" );

		UCCCheatManager_execymTradeOfferCancel_Parms ymTradeOfferCancel_Parms;

		this->ProcessEvent( pfnymTradeOfferCancel, &ymTradeOfferCancel_Parms, NULL );
	};

	void ymTradeOffered ( TArray< struct FItemDescription > InItems, int InCash )
	{
		static UFunction* pfnymTradeOffered = NULL;

		if ( !pfnymTradeOffered )
			pfnymTradeOffered = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTradeOffered" );

		UCCCheatManager_execymTradeOffered_Parms ymTradeOffered_Parms;
		memcpy( &ymTradeOffered_Parms.InItems, &InItems, 0xC );
		ymTradeOffered_Parms.InCash = InCash;

		this->ProcessEvent( pfnymTradeOffered, &ymTradeOffered_Parms, NULL );
	};

	void ymTradeOffer ( TArray< int > InItemIds, int InCash )
	{
		static UFunction* pfnymTradeOffer = NULL;

		if ( !pfnymTradeOffer )
			pfnymTradeOffer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTradeOffer" );

		UCCCheatManager_execymTradeOffer_Parms ymTradeOffer_Parms;
		ymTradeOffer_Parms.InItemIds = InItemIds;
		ymTradeOffer_Parms.InCash = InCash;

		this->ProcessEvent( pfnymTradeOffer, &ymTradeOffer_Parms, NULL );
	};

	void ymTradeCanceled ()
	{
		static UFunction* pfnymTradeCanceled = NULL;

		if ( !pfnymTradeCanceled )
			pfnymTradeCanceled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTradeCanceled" );

		UCCCheatManager_execymTradeCanceled_Parms ymTradeCanceled_Parms;

		this->ProcessEvent( pfnymTradeCanceled, &ymTradeCanceled_Parms, NULL );
	};

	void ymTradeCancel ( int InCharacterId )
	{
		static UFunction* pfnymTradeCancel = NULL;

		if ( !pfnymTradeCancel )
			pfnymTradeCancel = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTradeCancel" );

		UCCCheatManager_execymTradeCancel_Parms ymTradeCancel_Parms;
		ymTradeCancel_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymTradeCancel, &ymTradeCancel_Parms, NULL );
	};

	void ymTradeStarted ( int InCharacterId )
	{
		static UFunction* pfnymTradeStarted = NULL;

		if ( !pfnymTradeStarted )
			pfnymTradeStarted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTradeStarted" );

		UCCCheatManager_execymTradeStarted_Parms ymTradeStarted_Parms;
		ymTradeStarted_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymTradeStarted, &ymTradeStarted_Parms, NULL );
	};

	void ymTradeRequestFrom ( int InCharacterId )
	{
		static UFunction* pfnymTradeRequestFrom = NULL;

		if ( !pfnymTradeRequestFrom )
			pfnymTradeRequestFrom = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTradeRequestFrom" );

		UCCCheatManager_execymTradeRequestFrom_Parms ymTradeRequestFrom_Parms;
		ymTradeRequestFrom_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymTradeRequestFrom, &ymTradeRequestFrom_Parms, NULL );
	};

	void ymTradeError ( unsigned char InResponse, int InCharacterId )
	{
		static UFunction* pfnymTradeError = NULL;

		if ( !pfnymTradeError )
			pfnymTradeError = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTradeError" );

		UCCCheatManager_execymTradeError_Parms ymTradeError_Parms;
		ymTradeError_Parms.InResponse = InResponse;
		ymTradeError_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymTradeError, &ymTradeError_Parms, NULL );
	};

	void ymTradeRequestTo ( int InCharacterId )
	{
		static UFunction* pfnymTradeRequestTo = NULL;

		if ( !pfnymTradeRequestTo )
			pfnymTradeRequestTo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTradeRequestTo" );

		UCCCheatManager_execymTradeRequestTo_Parms ymTradeRequestTo_Parms;
		ymTradeRequestTo_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymTradeRequestTo, &ymTradeRequestTo_Parms, NULL );
	};

	void ymTournamentStatistics ( unsigned char InTournamentType, TArray< struct FDivisionStatistics > InDivisionsStatistics )
	{
		static UFunction* pfnymTournamentStatistics = NULL;

		if ( !pfnymTournamentStatistics )
			pfnymTournamentStatistics = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTournamentStatistics" );

		UCCCheatManager_execymTournamentStatistics_Parms ymTournamentStatistics_Parms;
		ymTournamentStatistics_Parms.InTournamentType = InTournamentType;
		memcpy( &ymTournamentStatistics_Parms.InDivisionsStatistics, &InDivisionsStatistics, 0xC );

		this->ProcessEvent( pfnymTournamentStatistics, &ymTournamentStatistics_Parms, NULL );
	};

	void ymTournamentStatisticsRequest ( unsigned char InTournamentType )
	{
		static UFunction* pfnymTournamentStatisticsRequest = NULL;

		if ( !pfnymTournamentStatisticsRequest )
			pfnymTournamentStatisticsRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTournamentStatisticsRequest" );

		UCCCheatManager_execymTournamentStatisticsRequest_Parms ymTournamentStatisticsRequest_Parms;
		ymTournamentStatisticsRequest_Parms.InTournamentType = InTournamentType;

		this->ProcessEvent( pfnymTournamentStatisticsRequest, &ymTournamentStatisticsRequest_Parms, NULL );
	};

	void ymUnbanFromTournament ()
	{
		static UFunction* pfnymUnbanFromTournament = NULL;

		if ( !pfnymUnbanFromTournament )
			pfnymUnbanFromTournament = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUnbanFromTournament" );

		UCCCheatManager_execymUnbanFromTournament_Parms ymUnbanFromTournament_Parms;

		this->ProcessEvent( pfnymUnbanFromTournament, &ymUnbanFromTournament_Parms, NULL );
	};

	void ymBanFromTournament ( struct FServerDateTime InBanExpirationDate, struct FString InReason )
	{
		static UFunction* pfnymBanFromTournament = NULL;

		if ( !pfnymBanFromTournament )
			pfnymBanFromTournament = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBanFromTournament" );

		UCCCheatManager_execymBanFromTournament_Parms ymBanFromTournament_Parms;
		memcpy( &ymBanFromTournament_Parms.InBanExpirationDate, &InBanExpirationDate, 0x8 );
		memcpy( &ymBanFromTournament_Parms.InReason, &InReason, 0xC );

		this->ProcessEvent( pfnymBanFromTournament, &ymBanFromTournament_Parms, NULL );
	};

	void ymTournamentFinished ( unsigned char InTournamentType, unsigned char InTournamentOrderType, int InTeamWinnerId )
	{
		static UFunction* pfnymTournamentFinished = NULL;

		if ( !pfnymTournamentFinished )
			pfnymTournamentFinished = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTournamentFinished" );

		UCCCheatManager_execymTournamentFinished_Parms ymTournamentFinished_Parms;
		ymTournamentFinished_Parms.InTournamentType = InTournamentType;
		ymTournamentFinished_Parms.InTournamentOrderType = InTournamentOrderType;
		ymTournamentFinished_Parms.InTeamWinnerId = InTeamWinnerId;

		this->ProcessEvent( pfnymTournamentFinished, &ymTournamentFinished_Parms, NULL );
	};

	void ymTournamentCanceled ( unsigned char InTournamentType )
	{
		static UFunction* pfnymTournamentCanceled = NULL;

		if ( !pfnymTournamentCanceled )
			pfnymTournamentCanceled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTournamentCanceled" );

		UCCCheatManager_execymTournamentCanceled_Parms ymTournamentCanceled_Parms;
		ymTournamentCanceled_Parms.InTournamentType = InTournamentType;

		this->ProcessEvent( pfnymTournamentCanceled, &ymTournamentCanceled_Parms, NULL );
	};

	void ymTournamentGameResult ( unsigned char InTournamentType, unsigned char InTournamentOrderType, unsigned char InStageNumber, unsigned char InGameNumber, unsigned char InResult, int InScore )
	{
		static UFunction* pfnymTournamentGameResult = NULL;

		if ( !pfnymTournamentGameResult )
			pfnymTournamentGameResult = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTournamentGameResult" );

		UCCCheatManager_execymTournamentGameResult_Parms ymTournamentGameResult_Parms;
		ymTournamentGameResult_Parms.InTournamentType = InTournamentType;
		ymTournamentGameResult_Parms.InTournamentOrderType = InTournamentOrderType;
		ymTournamentGameResult_Parms.InStageNumber = InStageNumber;
		ymTournamentGameResult_Parms.InGameNumber = InGameNumber;
		ymTournamentGameResult_Parms.InResult = InResult;
		ymTournamentGameResult_Parms.InScore = InScore;

		this->ProcessEvent( pfnymTournamentGameResult, &ymTournamentGameResult_Parms, NULL );
	};

	void ymTournamentInstanceSessionStarted ( int InInstanceId, int InSessionId, unsigned char InTournamentType )
	{
		static UFunction* pfnymTournamentInstanceSessionStarted = NULL;

		if ( !pfnymTournamentInstanceSessionStarted )
			pfnymTournamentInstanceSessionStarted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTournamentInstanceSessionStarted" );

		UCCCheatManager_execymTournamentInstanceSessionStarted_Parms ymTournamentInstanceSessionStarted_Parms;
		ymTournamentInstanceSessionStarted_Parms.InInstanceId = InInstanceId;
		ymTournamentInstanceSessionStarted_Parms.InSessionId = InSessionId;
		ymTournamentInstanceSessionStarted_Parms.InTournamentType = InTournamentType;

		this->ProcessEvent( pfnymTournamentInstanceSessionStarted, &ymTournamentInstanceSessionStarted_Parms, NULL );
	};

	void ymTournamentRegistrationStarted ( unsigned char InTournamentType, struct FServerDateTime InStartTournamentTime, unsigned long InIsAllowRegistration )
	{
		static UFunction* pfnymTournamentRegistrationStarted = NULL;

		if ( !pfnymTournamentRegistrationStarted )
			pfnymTournamentRegistrationStarted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTournamentRegistrationStarted" );

		UCCCheatManager_execymTournamentRegistrationStarted_Parms ymTournamentRegistrationStarted_Parms;
		ymTournamentRegistrationStarted_Parms.InTournamentType = InTournamentType;
		memcpy( &ymTournamentRegistrationStarted_Parms.InStartTournamentTime, &InStartTournamentTime, 0x8 );
		ymTournamentRegistrationStarted_Parms.InIsAllowRegistration = InIsAllowRegistration;

		this->ProcessEvent( pfnymTournamentRegistrationStarted, &ymTournamentRegistrationStarted_Parms, NULL );
	};

	void ymTournamentRegistrationNotification ( unsigned char InTournamentType, struct FServerDateTime InStartRegistrationTime )
	{
		static UFunction* pfnymTournamentRegistrationNotification = NULL;

		if ( !pfnymTournamentRegistrationNotification )
			pfnymTournamentRegistrationNotification = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTournamentRegistrationNotification" );

		UCCCheatManager_execymTournamentRegistrationNotification_Parms ymTournamentRegistrationNotification_Parms;
		ymTournamentRegistrationNotification_Parms.InTournamentType = InTournamentType;
		memcpy( &ymTournamentRegistrationNotification_Parms.InStartRegistrationTime, &InStartRegistrationTime, 0x8 );

		this->ProcessEvent( pfnymTournamentRegistrationNotification, &ymTournamentRegistrationNotification_Parms, NULL );
	};

	void ymUnregisterFromTournamentResponse ( unsigned char InResponse, unsigned char InTournamentType, int InCharacterId )
	{
		static UFunction* pfnymUnregisterFromTournamentResponse = NULL;

		if ( !pfnymUnregisterFromTournamentResponse )
			pfnymUnregisterFromTournamentResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUnregisterFromTournamentResponse" );

		UCCCheatManager_execymUnregisterFromTournamentResponse_Parms ymUnregisterFromTournamentResponse_Parms;
		ymUnregisterFromTournamentResponse_Parms.InResponse = InResponse;
		ymUnregisterFromTournamentResponse_Parms.InTournamentType = InTournamentType;
		ymUnregisterFromTournamentResponse_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymUnregisterFromTournamentResponse, &ymUnregisterFromTournamentResponse_Parms, NULL );
	};

	void ymUnregisterFromTournament ( unsigned char InToutnamentType )
	{
		static UFunction* pfnymUnregisterFromTournament = NULL;

		if ( !pfnymUnregisterFromTournament )
			pfnymUnregisterFromTournament = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUnregisterFromTournament" );

		UCCCheatManager_execymUnregisterFromTournament_Parms ymUnregisterFromTournament_Parms;
		ymUnregisterFromTournament_Parms.InToutnamentType = InToutnamentType;

		this->ProcessEvent( pfnymUnregisterFromTournament, &ymUnregisterFromTournament_Parms, NULL );
	};

	void ymRegisterToTournamentResponse ( unsigned char InResponse, int InParameterId )
	{
		static UFunction* pfnymRegisterToTournamentResponse = NULL;

		if ( !pfnymRegisterToTournamentResponse )
			pfnymRegisterToTournamentResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRegisterToTournamentResponse" );

		UCCCheatManager_execymRegisterToTournamentResponse_Parms ymRegisterToTournamentResponse_Parms;
		ymRegisterToTournamentResponse_Parms.InResponse = InResponse;
		ymRegisterToTournamentResponse_Parms.InParameterId = InParameterId;

		this->ProcessEvent( pfnymRegisterToTournamentResponse, &ymRegisterToTournamentResponse_Parms, NULL );
	};

	void ymRegisterToTournament ( unsigned char InToutnamentType, struct FString InTeamName, TArray< int > InTeammates )
	{
		static UFunction* pfnymRegisterToTournament = NULL;

		if ( !pfnymRegisterToTournament )
			pfnymRegisterToTournament = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRegisterToTournament" );

		UCCCheatManager_execymRegisterToTournament_Parms ymRegisterToTournament_Parms;
		ymRegisterToTournament_Parms.InToutnamentType = InToutnamentType;
		memcpy( &ymRegisterToTournament_Parms.InTeamName, &InTeamName, 0xC );
		ymRegisterToTournament_Parms.InTeammates = InTeammates;

		this->ProcessEvent( pfnymRegisterToTournament, &ymRegisterToTournament_Parms, NULL );
	};

	void ymSelectCharacterTitle ( int InTitleId )
	{
		static UFunction* pfnymSelectCharacterTitle = NULL;

		if ( !pfnymSelectCharacterTitle )
			pfnymSelectCharacterTitle = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSelectCharacterTitle" );

		UCCCheatManager_execymSelectCharacterTitle_Parms ymSelectCharacterTitle_Parms;
		ymSelectCharacterTitle_Parms.InTitleId = InTitleId;

		this->ProcessEvent( pfnymSelectCharacterTitle, &ymSelectCharacterTitle_Parms, NULL );
	};

	void ymNewCharacterTitleUnlocked ( int InTitleId )
	{
		static UFunction* pfnymNewCharacterTitleUnlocked = NULL;

		if ( !pfnymNewCharacterTitleUnlocked )
			pfnymNewCharacterTitleUnlocked = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNewCharacterTitleUnlocked" );

		UCCCheatManager_execymNewCharacterTitleUnlocked_Parms ymNewCharacterTitleUnlocked_Parms;
		ymNewCharacterTitleUnlocked_Parms.InTitleId = InTitleId;

		this->ProcessEvent( pfnymNewCharacterTitleUnlocked, &ymNewCharacterTitleUnlocked_Parms, NULL );
	};

	void ymNotifySelectedCharacterTitle ( int InTitleId )
	{
		static UFunction* pfnymNotifySelectedCharacterTitle = NULL;

		if ( !pfnymNotifySelectedCharacterTitle )
			pfnymNotifySelectedCharacterTitle = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifySelectedCharacterTitle" );

		UCCCheatManager_execymNotifySelectedCharacterTitle_Parms ymNotifySelectedCharacterTitle_Parms;
		ymNotifySelectedCharacterTitle_Parms.InTitleId = InTitleId;

		this->ProcessEvent( pfnymNotifySelectedCharacterTitle, &ymNotifySelectedCharacterTitle_Parms, NULL );
	};

	void ymNotifyCharacterTitles ( TArray< int > InTitleIds, int InSelectedTitleId )
	{
		static UFunction* pfnymNotifyCharacterTitles = NULL;

		if ( !pfnymNotifyCharacterTitles )
			pfnymNotifyCharacterTitles = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyCharacterTitles" );

		UCCCheatManager_execymNotifyCharacterTitles_Parms ymNotifyCharacterTitles_Parms;
		ymNotifyCharacterTitles_Parms.InTitleIds = InTitleIds;
		ymNotifyCharacterTitles_Parms.InSelectedTitleId = InSelectedTitleId;

		this->ProcessEvent( pfnymNotifyCharacterTitles, &ymNotifyCharacterTitles_Parms, NULL );
	};

	void ymServerShutdown ( int InSecondsToShutdown )
	{
		static UFunction* pfnymServerShutdown = NULL;

		if ( !pfnymServerShutdown )
			pfnymServerShutdown = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymServerShutdown" );

		UCCCheatManager_execymServerShutdown_Parms ymServerShutdown_Parms;
		ymServerShutdown_Parms.InSecondsToShutdown = InSecondsToShutdown;

		this->ProcessEvent( pfnymServerShutdown, &ymServerShutdown_Parms, NULL );
	};

	void ymPingAllResponseMessage ( int InPingId, TArray< unsigned char > InData )
	{
		static UFunction* pfnymPingAllResponseMessage = NULL;

		if ( !pfnymPingAllResponseMessage )
			pfnymPingAllResponseMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymPingAllResponseMessage" );

		UCCCheatManager_execymPingAllResponseMessage_Parms ymPingAllResponseMessage_Parms;
		ymPingAllResponseMessage_Parms.InPingId = InPingId;
		ymPingAllResponseMessage_Parms.InData = InData;

		this->ProcessEvent( pfnymPingAllResponseMessage, &ymPingAllResponseMessage_Parms, NULL );
	};

	void ymPingResponseMessage ( int InPingId, struct FString InData )
	{
		static UFunction* pfnymPingResponseMessage = NULL;

		if ( !pfnymPingResponseMessage )
			pfnymPingResponseMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymPingResponseMessage" );

		UCCCheatManager_execymPingResponseMessage_Parms ymPingResponseMessage_Parms;
		ymPingResponseMessage_Parms.InPingId = InPingId;
		memcpy( &ymPingResponseMessage_Parms.InData, &InData, 0xC );

		this->ProcessEvent( pfnymPingResponseMessage, &ymPingResponseMessage_Parms, NULL );
	};

	void ymNotifyProfessionAndCraftAbilities ( TArray< struct FNotifyProfessionAndCraftAbilities_ProfessionSkill > InProfession, TArray< int > InCraftAbilities )
	{
		static UFunction* pfnymNotifyProfessionAndCraftAbilities = NULL;

		if ( !pfnymNotifyProfessionAndCraftAbilities )
			pfnymNotifyProfessionAndCraftAbilities = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyProfessionAndCraftAbilities" );

		UCCCheatManager_execymNotifyProfessionAndCraftAbilities_Parms ymNotifyProfessionAndCraftAbilities_Parms;
		memcpy( &ymNotifyProfessionAndCraftAbilities_Parms.InProfession, &InProfession, 0xC );
		ymNotifyProfessionAndCraftAbilities_Parms.InCraftAbilities = InCraftAbilities;

		this->ProcessEvent( pfnymNotifyProfessionAndCraftAbilities, &ymNotifyProfessionAndCraftAbilities_Parms, NULL );
	};

	void ymAttachmentdollAvatar ( TArray< struct FAvatarAttribute > InAttributes )
	{
		static UFunction* pfnymAttachmentdollAvatar = NULL;

		if ( !pfnymAttachmentdollAvatar )
			pfnymAttachmentdollAvatar = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAttachmentdollAvatar" );

		UCCCheatManager_execymAttachmentdollAvatar_Parms ymAttachmentdollAvatar_Parms;
		memcpy( &ymAttachmentdollAvatar_Parms.InAttributes, &InAttributes, 0xC );

		this->ProcessEvent( pfnymAttachmentdollAvatar, &ymAttachmentdollAvatar_Parms, NULL );
	};

	void ymInitCharacterPaperdoll ( struct FPaperdoll InPaperdoll )
	{
		static UFunction* pfnymInitCharacterPaperdoll = NULL;

		if ( !pfnymInitCharacterPaperdoll )
			pfnymInitCharacterPaperdoll = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitCharacterPaperdoll" );

		UCCCheatManager_execymInitCharacterPaperdoll_Parms ymInitCharacterPaperdoll_Parms;
		memcpy( &ymInitCharacterPaperdoll_Parms.InPaperdoll, &InPaperdoll, 0x28 );

		this->ProcessEvent( pfnymInitCharacterPaperdoll, &ymInitCharacterPaperdoll_Parms, NULL );
	};

	void ymLobbyAvatar ( TArray< struct FAvatarAttribute > InAttributes, TArray< struct FAvatarAttribute > InGeneralWeaponAttributes, TArray< struct FAvatarAttribute > InClassWeaponAttributes, TArray< struct FAvatarAttribute > InPistolAttributes, TArray< int > InDisappearedAttributes )
	{
		static UFunction* pfnymLobbyAvatar = NULL;

		if ( !pfnymLobbyAvatar )
			pfnymLobbyAvatar = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLobbyAvatar" );

		UCCCheatManager_execymLobbyAvatar_Parms ymLobbyAvatar_Parms;
		memcpy( &ymLobbyAvatar_Parms.InAttributes, &InAttributes, 0xC );
		memcpy( &ymLobbyAvatar_Parms.InGeneralWeaponAttributes, &InGeneralWeaponAttributes, 0xC );
		memcpy( &ymLobbyAvatar_Parms.InClassWeaponAttributes, &InClassWeaponAttributes, 0xC );
		memcpy( &ymLobbyAvatar_Parms.InPistolAttributes, &InPistolAttributes, 0xC );
		ymLobbyAvatar_Parms.InDisappearedAttributes = InDisappearedAttributes;

		this->ProcessEvent( pfnymLobbyAvatar, &ymLobbyAvatar_Parms, NULL );
	};

	void ymS2CShowEmote ( int InCharacterId, int InEmoteId, float InElapsedTime )
	{
		static UFunction* pfnymS2CShowEmote = NULL;

		if ( !pfnymS2CShowEmote )
			pfnymS2CShowEmote = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymS2CShowEmote" );

		UCCCheatManager_execymS2CShowEmote_Parms ymS2CShowEmote_Parms;
		ymS2CShowEmote_Parms.InCharacterId = InCharacterId;
		ymS2CShowEmote_Parms.InEmoteId = InEmoteId;
		ymS2CShowEmote_Parms.InElapsedTime = InElapsedTime;

		this->ProcessEvent( pfnymS2CShowEmote, &ymS2CShowEmote_Parms, NULL );
	};

	void ymInitNpcs ( TArray< struct FInitNpcs_NpcDescription > Inm_npcs )
	{
		static UFunction* pfnymInitNpcs = NULL;

		if ( !pfnymInitNpcs )
			pfnymInitNpcs = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitNpcs" );

		UCCCheatManager_execymInitNpcs_Parms ymInitNpcs_Parms;
		memcpy( &ymInitNpcs_Parms.Inm_npcs, &Inm_npcs, 0xC );

		this->ProcessEvent( pfnymInitNpcs, &ymInitNpcs_Parms, NULL );
	};

	void ymNotifyCharacterLevelUp ( int InCharacterId, int InLevel )
	{
		static UFunction* pfnymNotifyCharacterLevelUp = NULL;

		if ( !pfnymNotifyCharacterLevelUp )
			pfnymNotifyCharacterLevelUp = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyCharacterLevelUp" );

		UCCCheatManager_execymNotifyCharacterLevelUp_Parms ymNotifyCharacterLevelUp_Parms;
		ymNotifyCharacterLevelUp_Parms.InCharacterId = InCharacterId;
		ymNotifyCharacterLevelUp_Parms.InLevel = InLevel;

		this->ProcessEvent( pfnymNotifyCharacterLevelUp, &ymNotifyCharacterLevelUp_Parms, NULL );
	};

	void ymSelectRealmResponse ( unsigned char InResponse, struct FString InConnectionIp, int InConnectionPort, struct FString InRealmName, int InTicket )
	{
		static UFunction* pfnymSelectRealmResponse = NULL;

		if ( !pfnymSelectRealmResponse )
			pfnymSelectRealmResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSelectRealmResponse" );

		UCCCheatManager_execymSelectRealmResponse_Parms ymSelectRealmResponse_Parms;
		ymSelectRealmResponse_Parms.InResponse = InResponse;
		memcpy( &ymSelectRealmResponse_Parms.InConnectionIp, &InConnectionIp, 0xC );
		ymSelectRealmResponse_Parms.InConnectionPort = InConnectionPort;
		memcpy( &ymSelectRealmResponse_Parms.InRealmName, &InRealmName, 0xC );
		ymSelectRealmResponse_Parms.InTicket = InTicket;

		this->ProcessEvent( pfnymSelectRealmResponse, &ymSelectRealmResponse_Parms, NULL );
	};

	void ymSelectRealm ( struct FString InRealmName )
	{
		static UFunction* pfnymSelectRealm = NULL;

		if ( !pfnymSelectRealm )
			pfnymSelectRealm = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSelectRealm" );

		UCCCheatManager_execymSelectRealm_Parms ymSelectRealm_Parms;
		memcpy( &ymSelectRealm_Parms.InRealmName, &InRealmName, 0xC );

		this->ProcessEvent( pfnymSelectRealm, &ymSelectRealm_Parms, NULL );
	};

	void ymRSAuthenticateResponse ( unsigned char InResult, TArray< struct FRealmInfo > InRealms, unsigned char InAccountType )
	{
		static UFunction* pfnymRSAuthenticateResponse = NULL;

		if ( !pfnymRSAuthenticateResponse )
			pfnymRSAuthenticateResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRSAuthenticateResponse" );

		UCCCheatManager_execymRSAuthenticateResponse_Parms ymRSAuthenticateResponse_Parms;
		ymRSAuthenticateResponse_Parms.InResult = InResult;
		memcpy( &ymRSAuthenticateResponse_Parms.InRealms, &InRealms, 0xC );
		ymRSAuthenticateResponse_Parms.InAccountType = InAccountType;

		this->ProcessEvent( pfnymRSAuthenticateResponse, &ymRSAuthenticateResponse_Parms, NULL );
	};

	void ymGetRealmsResponse ( TArray< struct FRealmInfo > InRealms )
	{
		static UFunction* pfnymGetRealmsResponse = NULL;

		if ( !pfnymGetRealmsResponse )
			pfnymGetRealmsResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGetRealmsResponse" );

		UCCCheatManager_execymGetRealmsResponse_Parms ymGetRealmsResponse_Parms;
		memcpy( &ymGetRealmsResponse_Parms.InRealms, &InRealms, 0xC );

		this->ProcessEvent( pfnymGetRealmsResponse, &ymGetRealmsResponse_Parms, NULL );
	};

	void ymGetRealms ()
	{
		static UFunction* pfnymGetRealms = NULL;

		if ( !pfnymGetRealms )
			pfnymGetRealms = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGetRealms" );

		UCCCheatManager_execymGetRealms_Parms ymGetRealms_Parms;

		this->ProcessEvent( pfnymGetRealms, &ymGetRealms_Parms, NULL );
	};

	void ymRSAuthenticate ( struct FString InLogin, struct FString InPassword, struct FString InClientVersion, struct FString InLanguage )
	{
		static UFunction* pfnymRSAuthenticate = NULL;

		if ( !pfnymRSAuthenticate )
			pfnymRSAuthenticate = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRSAuthenticate" );

		UCCCheatManager_execymRSAuthenticate_Parms ymRSAuthenticate_Parms;
		memcpy( &ymRSAuthenticate_Parms.InLogin, &InLogin, 0xC );
		memcpy( &ymRSAuthenticate_Parms.InPassword, &InPassword, 0xC );
		memcpy( &ymRSAuthenticate_Parms.InClientVersion, &InClientVersion, 0xC );
		memcpy( &ymRSAuthenticate_Parms.InLanguage, &InLanguage, 0xC );

		this->ProcessEvent( pfnymRSAuthenticate, &ymRSAuthenticate_Parms, NULL );
	};

	void ymTrackQuest ( int InQuestId, unsigned long InEnable )
	{
		static UFunction* pfnymTrackQuest = NULL;

		if ( !pfnymTrackQuest )
			pfnymTrackQuest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTrackQuest" );

		UCCCheatManager_execymTrackQuest_Parms ymTrackQuest_Parms;
		ymTrackQuest_Parms.InQuestId = InQuestId;
		ymTrackQuest_Parms.InEnable = InEnable;

		this->ProcessEvent( pfnymTrackQuest, &ymTrackQuest_Parms, NULL );
	};

	void ymQuestExpired ( int InQuestId )
	{
		static UFunction* pfnymQuestExpired = NULL;

		if ( !pfnymQuestExpired )
			pfnymQuestExpired = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymQuestExpired" );

		UCCCheatManager_execymQuestExpired_Parms ymQuestExpired_Parms;
		ymQuestExpired_Parms.InQuestId = InQuestId;

		this->ProcessEvent( pfnymQuestExpired, &ymQuestExpired_Parms, NULL );
	};

	void ymQuestCanceled ( int InQuestId )
	{
		static UFunction* pfnymQuestCanceled = NULL;

		if ( !pfnymQuestCanceled )
			pfnymQuestCanceled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymQuestCanceled" );

		UCCCheatManager_execymQuestCanceled_Parms ymQuestCanceled_Parms;
		ymQuestCanceled_Parms.InQuestId = InQuestId;

		this->ProcessEvent( pfnymQuestCanceled, &ymQuestCanceled_Parms, NULL );
	};

	void ymCancelQuestFailed ()
	{
		static UFunction* pfnymCancelQuestFailed = NULL;

		if ( !pfnymCancelQuestFailed )
			pfnymCancelQuestFailed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCancelQuestFailed" );

		UCCCheatManager_execymCancelQuestFailed_Parms ymCancelQuestFailed_Parms;

		this->ProcessEvent( pfnymCancelQuestFailed, &ymCancelQuestFailed_Parms, NULL );
	};

	void ymCancelQuest ( int InQuestId )
	{
		static UFunction* pfnymCancelQuest = NULL;

		if ( !pfnymCancelQuest )
			pfnymCancelQuest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCancelQuest" );

		UCCCheatManager_execymCancelQuest_Parms ymCancelQuest_Parms;
		ymCancelQuest_Parms.InQuestId = InQuestId;

		this->ProcessEvent( pfnymCancelQuest, &ymCancelQuest_Parms, NULL );
	};

	void ymQuestDelivered ( int InQuestId )
	{
		static UFunction* pfnymQuestDelivered = NULL;

		if ( !pfnymQuestDelivered )
			pfnymQuestDelivered = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymQuestDelivered" );

		UCCCheatManager_execymQuestDelivered_Parms ymQuestDelivered_Parms;
		ymQuestDelivered_Parms.InQuestId = InQuestId;

		this->ProcessEvent( pfnymQuestDelivered, &ymQuestDelivered_Parms, NULL );
	};

	void ymDeliverQuestFailed ()
	{
		static UFunction* pfnymDeliverQuestFailed = NULL;

		if ( !pfnymDeliverQuestFailed )
			pfnymDeliverQuestFailed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeliverQuestFailed" );

		UCCCheatManager_execymDeliverQuestFailed_Parms ymDeliverQuestFailed_Parms;

		this->ProcessEvent( pfnymDeliverQuestFailed, &ymDeliverQuestFailed_Parms, NULL );
	};

	void ymDeliverQuest ( int InQuestId, int InQuestStep, int InSetId )
	{
		static UFunction* pfnymDeliverQuest = NULL;

		if ( !pfnymDeliverQuest )
			pfnymDeliverQuest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeliverQuest" );

		UCCCheatManager_execymDeliverQuest_Parms ymDeliverQuest_Parms;
		ymDeliverQuest_Parms.InQuestId = InQuestId;
		ymDeliverQuest_Parms.InQuestStep = InQuestStep;
		ymDeliverQuest_Parms.InSetId = InSetId;

		this->ProcessEvent( pfnymDeliverQuest, &ymDeliverQuest_Parms, NULL );
	};

	void ymQuestTaken ( int InQuestId, int InQuestStep, TArray< struct FActiveQuestState > InConditions )
	{
		static UFunction* pfnymQuestTaken = NULL;

		if ( !pfnymQuestTaken )
			pfnymQuestTaken = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymQuestTaken" );

		UCCCheatManager_execymQuestTaken_Parms ymQuestTaken_Parms;
		ymQuestTaken_Parms.InQuestId = InQuestId;
		ymQuestTaken_Parms.InQuestStep = InQuestStep;
		memcpy( &ymQuestTaken_Parms.InConditions, &InConditions, 0xC );

		this->ProcessEvent( pfnymQuestTaken, &ymQuestTaken_Parms, NULL );
	};

	void ymTakeQuestFailed ()
	{
		static UFunction* pfnymTakeQuestFailed = NULL;

		if ( !pfnymTakeQuestFailed )
			pfnymTakeQuestFailed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTakeQuestFailed" );

		UCCCheatManager_execymTakeQuestFailed_Parms ymTakeQuestFailed_Parms;

		this->ProcessEvent( pfnymTakeQuestFailed, &ymTakeQuestFailed_Parms, NULL );
	};

	void ymTakeQuest ( int InQuestId )
	{
		static UFunction* pfnymTakeQuest = NULL;

		if ( !pfnymTakeQuest )
			pfnymTakeQuest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTakeQuest" );

		UCCCheatManager_execymTakeQuest_Parms ymTakeQuest_Parms;
		ymTakeQuest_Parms.InQuestId = InQuestId;

		this->ProcessEvent( pfnymTakeQuest, &ymTakeQuest_Parms, NULL );
	};

	void ymUpdateNpcQuests ( int InNpcId, TArray< struct FNpcFunctionalityDescription > InQuestFunctionality )
	{
		static UFunction* pfnymUpdateNpcQuests = NULL;

		if ( !pfnymUpdateNpcQuests )
			pfnymUpdateNpcQuests = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateNpcQuests" );

		UCCCheatManager_execymUpdateNpcQuests_Parms ymUpdateNpcQuests_Parms;
		ymUpdateNpcQuests_Parms.InNpcId = InNpcId;
		memcpy( &ymUpdateNpcQuests_Parms.InQuestFunctionality, &InQuestFunctionality, 0xC );

		this->ProcessEvent( pfnymUpdateNpcQuests, &ymUpdateNpcQuests_Parms, NULL );
	};

	void ymUpdateActiveQuest ( struct FActiveQuest InActiveQuest )
	{
		static UFunction* pfnymUpdateActiveQuest = NULL;

		if ( !pfnymUpdateActiveQuest )
			pfnymUpdateActiveQuest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateActiveQuest" );

		UCCCheatManager_execymUpdateActiveQuest_Parms ymUpdateActiveQuest_Parms;
		memcpy( &ymUpdateActiveQuest_Parms.InActiveQuest, &InActiveQuest, 0x18 );

		this->ProcessEvent( pfnymUpdateActiveQuest, &ymUpdateActiveQuest_Parms, NULL );
	};

	void ymSetActiveQuests ( TArray< struct FActiveQuest > InActiveQuests, TArray< struct FPassedQuest > InPassedQuests, struct FTutorialState InTutorialState, int InNativeLobby, unsigned long InCouldSkipTutorial, struct FString InTutorialSkipGuaranteeName )
	{
		static UFunction* pfnymSetActiveQuests = NULL;

		if ( !pfnymSetActiveQuests )
			pfnymSetActiveQuests = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSetActiveQuests" );

		UCCCheatManager_execymSetActiveQuests_Parms ymSetActiveQuests_Parms;
		memcpy( &ymSetActiveQuests_Parms.InActiveQuests, &InActiveQuests, 0xC );
		memcpy( &ymSetActiveQuests_Parms.InPassedQuests, &InPassedQuests, 0xC );
		memcpy( &ymSetActiveQuests_Parms.InTutorialState, &InTutorialState, 0x54 );
		ymSetActiveQuests_Parms.InNativeLobby = InNativeLobby;
		ymSetActiveQuests_Parms.InCouldSkipTutorial = InCouldSkipTutorial;
		memcpy( &ymSetActiveQuests_Parms.InTutorialSkipGuaranteeName, &InTutorialSkipGuaranteeName, 0xC );

		this->ProcessEvent( pfnymSetActiveQuests, &ymSetActiveQuests_Parms, NULL );
	};

	void ymSetTutorialState ( struct FTutorialState InTutorialState )
	{
		static UFunction* pfnymSetTutorialState = NULL;

		if ( !pfnymSetTutorialState )
			pfnymSetTutorialState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSetTutorialState" );

		UCCCheatManager_execymSetTutorialState_Parms ymSetTutorialState_Parms;
		memcpy( &ymSetTutorialState_Parms.InTutorialState, &InTutorialState, 0x54 );

		this->ProcessEvent( pfnymSetTutorialState, &ymSetTutorialState_Parms, NULL );
	};

	void ymSetTutorialInfo ( struct FTutorialState InTutorialState, unsigned long InCouldSkipTutorial, struct FString InTutorialSkipGuaranteeName )
	{
		static UFunction* pfnymSetTutorialInfo = NULL;

		if ( !pfnymSetTutorialInfo )
			pfnymSetTutorialInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSetTutorialInfo" );

		UCCCheatManager_execymSetTutorialInfo_Parms ymSetTutorialInfo_Parms;
		memcpy( &ymSetTutorialInfo_Parms.InTutorialState, &InTutorialState, 0x54 );
		ymSetTutorialInfo_Parms.InCouldSkipTutorial = InCouldSkipTutorial;
		memcpy( &ymSetTutorialInfo_Parms.InTutorialSkipGuaranteeName, &InTutorialSkipGuaranteeName, 0xC );

		this->ProcessEvent( pfnymSetTutorialInfo, &ymSetTutorialInfo_Parms, NULL );
	};

	void ymNotifyAboutKnownMenu ( int InServiceMenu, int InCharacterMenu )
	{
		static UFunction* pfnymNotifyAboutKnownMenu = NULL;

		if ( !pfnymNotifyAboutKnownMenu )
			pfnymNotifyAboutKnownMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyAboutKnownMenu" );

		UCCCheatManager_execymNotifyAboutKnownMenu_Parms ymNotifyAboutKnownMenu_Parms;
		ymNotifyAboutKnownMenu_Parms.InServiceMenu = InServiceMenu;
		ymNotifyAboutKnownMenu_Parms.InCharacterMenu = InCharacterMenu;

		this->ProcessEvent( pfnymNotifyAboutKnownMenu, &ymNotifyAboutKnownMenu_Parms, NULL );
	};

	void ymSetKnownMenu ( int InServiceMenu, int InCharacterMenu )
	{
		static UFunction* pfnymSetKnownMenu = NULL;

		if ( !pfnymSetKnownMenu )
			pfnymSetKnownMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSetKnownMenu" );

		UCCCheatManager_execymSetKnownMenu_Parms ymSetKnownMenu_Parms;
		ymSetKnownMenu_Parms.InServiceMenu = InServiceMenu;
		ymSetKnownMenu_Parms.InCharacterMenu = InCharacterMenu;

		this->ProcessEvent( pfnymSetKnownMenu, &ymSetKnownMenu_Parms, NULL );
	};

	void ymSetAccess ( int InAccess )
	{
		static UFunction* pfnymSetAccess = NULL;

		if ( !pfnymSetAccess )
			pfnymSetAccess = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSetAccess" );

		UCCCheatManager_execymSetAccess_Parms ymSetAccess_Parms;
		ymSetAccess_Parms.InAccess = InAccess;

		this->ProcessEvent( pfnymSetAccess, &ymSetAccess_Parms, NULL );
	};

	void ymPvPLadderSeasonFinished ()
	{
		static UFunction* pfnymPvPLadderSeasonFinished = NULL;

		if ( !pfnymPvPLadderSeasonFinished )
			pfnymPvPLadderSeasonFinished = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymPvPLadderSeasonFinished" );

		UCCCheatManager_execymPvPLadderSeasonFinished_Parms ymPvPLadderSeasonFinished_Parms;

		this->ProcessEvent( pfnymPvPLadderSeasonFinished, &ymPvPLadderSeasonFinished_Parms, NULL );
	};

	void ymPvPLadderSnapshotResponse ( TArray< struct FLadderSnapshotRecord > InSnapshot )
	{
		static UFunction* pfnymPvPLadderSnapshotResponse = NULL;

		if ( !pfnymPvPLadderSnapshotResponse )
			pfnymPvPLadderSnapshotResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymPvPLadderSnapshotResponse" );

		UCCCheatManager_execymPvPLadderSnapshotResponse_Parms ymPvPLadderSnapshotResponse_Parms;
		memcpy( &ymPvPLadderSnapshotResponse_Parms.InSnapshot, &InSnapshot, 0xC );

		this->ProcessEvent( pfnymPvPLadderSnapshotResponse, &ymPvPLadderSnapshotResponse_Parms, NULL );
	};

	void ymPvPLadderSnapshotRequest ()
	{
		static UFunction* pfnymPvPLadderSnapshotRequest = NULL;

		if ( !pfnymPvPLadderSnapshotRequest )
			pfnymPvPLadderSnapshotRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymPvPLadderSnapshotRequest" );

		UCCCheatManager_execymPvPLadderSnapshotRequest_Parms ymPvPLadderSnapshotRequest_Parms;

		this->ProcessEvent( pfnymPvPLadderSnapshotRequest, &ymPvPLadderSnapshotRequest_Parms, NULL );
	};

	void ymTopListResponse ( TArray< struct FLadderRecord > InTopList )
	{
		static UFunction* pfnymTopListResponse = NULL;

		if ( !pfnymTopListResponse )
			pfnymTopListResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTopListResponse" );

		UCCCheatManager_execymTopListResponse_Parms ymTopListResponse_Parms;
		memcpy( &ymTopListResponse_Parms.InTopList, &InTopList, 0xC );

		this->ProcessEvent( pfnymTopListResponse, &ymTopListResponse_Parms, NULL );
	};

	void ymTopListRequest ()
	{
		static UFunction* pfnymTopListRequest = NULL;

		if ( !pfnymTopListRequest )
			pfnymTopListRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTopListRequest" );

		UCCCheatManager_execymTopListRequest_Parms ymTopListRequest_Parms;

		this->ProcessEvent( pfnymTopListRequest, &ymTopListRequest_Parms, NULL );
	};

	void ymTakeAllItemsFromGarbage ( unsigned char InBackpackPage )
	{
		static UFunction* pfnymTakeAllItemsFromGarbage = NULL;

		if ( !pfnymTakeAllItemsFromGarbage )
			pfnymTakeAllItemsFromGarbage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTakeAllItemsFromGarbage" );

		UCCCheatManager_execymTakeAllItemsFromGarbage_Parms ymTakeAllItemsFromGarbage_Parms;
		ymTakeAllItemsFromGarbage_Parms.InBackpackPage = InBackpackPage;

		this->ProcessEvent( pfnymTakeAllItemsFromGarbage, &ymTakeAllItemsFromGarbage_Parms, NULL );
	};

	void ymGarbageSessionFinished ()
	{
		static UFunction* pfnymGarbageSessionFinished = NULL;

		if ( !pfnymGarbageSessionFinished )
			pfnymGarbageSessionFinished = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGarbageSessionFinished" );

		UCCCheatManager_execymGarbageSessionFinished_Parms ymGarbageSessionFinished_Parms;

		this->ProcessEvent( pfnymGarbageSessionFinished, &ymGarbageSessionFinished_Parms, NULL );
	};

	void ymGetGarbageItemsResponse ( unsigned char InResult )
	{
		static UFunction* pfnymGetGarbageItemsResponse = NULL;

		if ( !pfnymGetGarbageItemsResponse )
			pfnymGetGarbageItemsResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGetGarbageItemsResponse" );

		UCCCheatManager_execymGetGarbageItemsResponse_Parms ymGetGarbageItemsResponse_Parms;
		ymGetGarbageItemsResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymGetGarbageItemsResponse, &ymGetGarbageItemsResponse_Parms, NULL );
	};

	void ymGetGarbageItems ()
	{
		static UFunction* pfnymGetGarbageItems = NULL;

		if ( !pfnymGetGarbageItems )
			pfnymGetGarbageItems = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGetGarbageItems" );

		UCCCheatManager_execymGetGarbageItems_Parms ymGetGarbageItems_Parms;

		this->ProcessEvent( pfnymGetGarbageItems, &ymGetGarbageItems_Parms, NULL );
	};

	void ymFinishRealmNpcInteraction ()
	{
		static UFunction* pfnymFinishRealmNpcInteraction = NULL;

		if ( !pfnymFinishRealmNpcInteraction )
			pfnymFinishRealmNpcInteraction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymFinishRealmNpcInteraction" );

		UCCCheatManager_execymFinishRealmNpcInteraction_Parms ymFinishRealmNpcInteraction_Parms;

		this->ProcessEvent( pfnymFinishRealmNpcInteraction, &ymFinishRealmNpcInteraction_Parms, NULL );
	};

	void ymRequestRealmNpcInteraction ( int Inm_npcId )
	{
		static UFunction* pfnymRequestRealmNpcInteraction = NULL;

		if ( !pfnymRequestRealmNpcInteraction )
			pfnymRequestRealmNpcInteraction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestRealmNpcInteraction" );

		UCCCheatManager_execymRequestRealmNpcInteraction_Parms ymRequestRealmNpcInteraction_Parms;
		ymRequestRealmNpcInteraction_Parms.Inm_npcId = Inm_npcId;

		this->ProcessEvent( pfnymRequestRealmNpcInteraction, &ymRequestRealmNpcInteraction_Parms, NULL );
	};

	void ymResponseRealmNpcInteraction ( unsigned long Inm_interactionAllowed, TArray< struct FNpcFunctionalityDescription > InEnableFunctionality )
	{
		static UFunction* pfnymResponseRealmNpcInteraction = NULL;

		if ( !pfnymResponseRealmNpcInteraction )
			pfnymResponseRealmNpcInteraction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymResponseRealmNpcInteraction" );

		UCCCheatManager_execymResponseRealmNpcInteraction_Parms ymResponseRealmNpcInteraction_Parms;
		ymResponseRealmNpcInteraction_Parms.Inm_interactionAllowed = Inm_interactionAllowed;
		memcpy( &ymResponseRealmNpcInteraction_Parms.InEnableFunctionality, &InEnableFunctionality, 0xC );

		this->ProcessEvent( pfnymResponseRealmNpcInteraction, &ymResponseRealmNpcInteraction_Parms, NULL );
	};

	void ymFinishNpcInteraction ()
	{
		static UFunction* pfnymFinishNpcInteraction = NULL;

		if ( !pfnymFinishNpcInteraction )
			pfnymFinishNpcInteraction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymFinishNpcInteraction" );

		UCCCheatManager_execymFinishNpcInteraction_Parms ymFinishNpcInteraction_Parms;

		this->ProcessEvent( pfnymFinishNpcInteraction, &ymFinishNpcInteraction_Parms, NULL );
	};

	void ymRequestNpcInteraction ( int Inm_npcId )
	{
		static UFunction* pfnymRequestNpcInteraction = NULL;

		if ( !pfnymRequestNpcInteraction )
			pfnymRequestNpcInteraction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestNpcInteraction" );

		UCCCheatManager_execymRequestNpcInteraction_Parms ymRequestNpcInteraction_Parms;
		ymRequestNpcInteraction_Parms.Inm_npcId = Inm_npcId;

		this->ProcessEvent( pfnymRequestNpcInteraction, &ymRequestNpcInteraction_Parms, NULL );
	};

	void ymResponseNpcInteraction ( unsigned long Inm_interactionAllowed, unsigned long Inm_isKnownNpc, TArray< struct FNpcFunctionalityDescription > InEnableFunctionality )
	{
		static UFunction* pfnymResponseNpcInteraction = NULL;

		if ( !pfnymResponseNpcInteraction )
			pfnymResponseNpcInteraction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymResponseNpcInteraction" );

		UCCCheatManager_execymResponseNpcInteraction_Parms ymResponseNpcInteraction_Parms;
		ymResponseNpcInteraction_Parms.Inm_interactionAllowed = Inm_interactionAllowed;
		ymResponseNpcInteraction_Parms.Inm_isKnownNpc = Inm_isKnownNpc;
		memcpy( &ymResponseNpcInteraction_Parms.InEnableFunctionality, &InEnableFunctionality, 0xC );

		this->ProcessEvent( pfnymResponseNpcInteraction, &ymResponseNpcInteraction_Parms, NULL );
	};

	void ymSpawnRealmNpc ( int Inm_npcId, int Invisual_key, struct FCharacterPosition Inm_position )
	{
		static UFunction* pfnymSpawnRealmNpc = NULL;

		if ( !pfnymSpawnRealmNpc )
			pfnymSpawnRealmNpc = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSpawnRealmNpc" );

		UCCCheatManager_execymSpawnRealmNpc_Parms ymSpawnRealmNpc_Parms;
		ymSpawnRealmNpc_Parms.Inm_npcId = Inm_npcId;
		ymSpawnRealmNpc_Parms.Invisual_key = Invisual_key;
		memcpy( &ymSpawnRealmNpc_Parms.Inm_position, &Inm_position, 0x10 );

		this->ProcessEvent( pfnymSpawnRealmNpc, &ymSpawnRealmNpc_Parms, NULL );
	};

	void ymSpawnPassiveNpc ( int Inm_npcId, struct FCharacterPosition Inm_position )
	{
		static UFunction* pfnymSpawnPassiveNpc = NULL;

		if ( !pfnymSpawnPassiveNpc )
			pfnymSpawnPassiveNpc = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSpawnPassiveNpc" );

		UCCCheatManager_execymSpawnPassiveNpc_Parms ymSpawnPassiveNpc_Parms;
		ymSpawnPassiveNpc_Parms.Inm_npcId = Inm_npcId;
		memcpy( &ymSpawnPassiveNpc_Parms.Inm_position, &Inm_position, 0x10 );

		this->ProcessEvent( pfnymSpawnPassiveNpc, &ymSpawnPassiveNpc_Parms, NULL );
	};

	void ymDespawnNpc ( int Inm_npcId )
	{
		static UFunction* pfnymDespawnNpc = NULL;

		if ( !pfnymDespawnNpc )
			pfnymDespawnNpc = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDespawnNpc" );

		UCCCheatManager_execymDespawnNpc_Parms ymDespawnNpc_Parms;
		ymDespawnNpc_Parms.Inm_npcId = Inm_npcId;

		this->ProcessEvent( pfnymDespawnNpc, &ymDespawnNpc_Parms, NULL );
	};

	void ymStopNpcMovement ( int Inm_npcId, unsigned char Inm_stopReason, int Inm_path, int Inm_link, struct FCharacterPosition Inm_position )
	{
		static UFunction* pfnymStopNpcMovement = NULL;

		if ( !pfnymStopNpcMovement )
			pfnymStopNpcMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymStopNpcMovement" );

		UCCCheatManager_execymStopNpcMovement_Parms ymStopNpcMovement_Parms;
		ymStopNpcMovement_Parms.Inm_npcId = Inm_npcId;
		ymStopNpcMovement_Parms.Inm_stopReason = Inm_stopReason;
		ymStopNpcMovement_Parms.Inm_path = Inm_path;
		ymStopNpcMovement_Parms.Inm_link = Inm_link;
		memcpy( &ymStopNpcMovement_Parms.Inm_position, &Inm_position, 0x10 );

		this->ProcessEvent( pfnymStopNpcMovement, &ymStopNpcMovement_Parms, NULL );
	};

	void ymStartNpcMovement ( int Inm_npcId, int Inm_path, int Inm_link, struct FCharacterPosition Inm_position )
	{
		static UFunction* pfnymStartNpcMovement = NULL;

		if ( !pfnymStartNpcMovement )
			pfnymStartNpcMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymStartNpcMovement" );

		UCCCheatManager_execymStartNpcMovement_Parms ymStartNpcMovement_Parms;
		ymStartNpcMovement_Parms.Inm_npcId = Inm_npcId;
		ymStartNpcMovement_Parms.Inm_path = Inm_path;
		ymStartNpcMovement_Parms.Inm_link = Inm_link;
		memcpy( &ymStartNpcMovement_Parms.Inm_position, &Inm_position, 0x10 );

		this->ProcessEvent( pfnymStartNpcMovement, &ymStartNpcMovement_Parms, NULL );
	};

	void ymSyncTime ( float Inm_time )
	{
		static UFunction* pfnymSyncTime = NULL;

		if ( !pfnymSyncTime )
			pfnymSyncTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSyncTime" );

		UCCCheatManager_execymSyncTime_Parms ymSyncTime_Parms;
		ymSyncTime_Parms.Inm_time = Inm_time;

		this->ProcessEvent( pfnymSyncTime, &ymSyncTime_Parms, NULL );
	};

	void ymEndItemAttaching ()
	{
		static UFunction* pfnymEndItemAttaching = NULL;

		if ( !pfnymEndItemAttaching )
			pfnymEndItemAttaching = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymEndItemAttaching" );

		UCCCheatManager_execymEndItemAttaching_Parms ymEndItemAttaching_Parms;

		this->ProcessEvent( pfnymEndItemAttaching, &ymEndItemAttaching_Parms, NULL );
	};

	void ymItemAttachingBegun ()
	{
		static UFunction* pfnymItemAttachingBegun = NULL;

		if ( !pfnymItemAttachingBegun )
			pfnymItemAttachingBegun = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymItemAttachingBegun" );

		UCCCheatManager_execymItemAttachingBegun_Parms ymItemAttachingBegun_Parms;

		this->ProcessEvent( pfnymItemAttachingBegun, &ymItemAttachingBegun_Parms, NULL );
	};

	void ymBeginItemAttachingFailed ()
	{
		static UFunction* pfnymBeginItemAttachingFailed = NULL;

		if ( !pfnymBeginItemAttachingFailed )
			pfnymBeginItemAttachingFailed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBeginItemAttachingFailed" );

		UCCCheatManager_execymBeginItemAttachingFailed_Parms ymBeginItemAttachingFailed_Parms;

		this->ProcessEvent( pfnymBeginItemAttachingFailed, &ymBeginItemAttachingFailed_Parms, NULL );
	};

	void ymBeginItemAttaching ( int InItemId )
	{
		static UFunction* pfnymBeginItemAttaching = NULL;

		if ( !pfnymBeginItemAttaching )
			pfnymBeginItemAttaching = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBeginItemAttaching" );

		UCCCheatManager_execymBeginItemAttaching_Parms ymBeginItemAttaching_Parms;
		ymBeginItemAttaching_Parms.InItemId = InItemId;

		this->ProcessEvent( pfnymBeginItemAttaching, &ymBeginItemAttaching_Parms, NULL );
	};

	void ymExpireMail ( int InMailId )
	{
		static UFunction* pfnymExpireMail = NULL;

		if ( !pfnymExpireMail )
			pfnymExpireMail = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymExpireMail" );

		UCCCheatManager_execymExpireMail_Parms ymExpireMail_Parms;
		ymExpireMail_Parms.InMailId = InMailId;

		this->ProcessEvent( pfnymExpireMail, &ymExpireMail_Parms, NULL );
	};

	void ymDeattachedAll ( unsigned char InResult )
	{
		static UFunction* pfnymDeattachedAll = NULL;

		if ( !pfnymDeattachedAll )
			pfnymDeattachedAll = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeattachedAll" );

		UCCCheatManager_execymDeattachedAll_Parms ymDeattachedAll_Parms;
		ymDeattachedAll_Parms.InResult = InResult;

		this->ProcessEvent( pfnymDeattachedAll, &ymDeattachedAll_Parms, NULL );
	};

	void ymDeattachAll ( int InMailId, unsigned char InBackpackPage )
	{
		static UFunction* pfnymDeattachAll = NULL;

		if ( !pfnymDeattachAll )
			pfnymDeattachAll = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeattachAll" );

		UCCCheatManager_execymDeattachAll_Parms ymDeattachAll_Parms;
		ymDeattachAll_Parms.InMailId = InMailId;
		ymDeattachAll_Parms.InBackpackPage = InBackpackPage;

		this->ProcessEvent( pfnymDeattachAll, &ymDeattachAll_Parms, NULL );
	};

	void ymDeattachedItem ( unsigned char InResult )
	{
		static UFunction* pfnymDeattachedItem = NULL;

		if ( !pfnymDeattachedItem )
			pfnymDeattachedItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeattachedItem" );

		UCCCheatManager_execymDeattachedItem_Parms ymDeattachedItem_Parms;
		ymDeattachedItem_Parms.InResult = InResult;

		this->ProcessEvent( pfnymDeattachedItem, &ymDeattachedItem_Parms, NULL );
	};

	void ymDeattachItem ( int InMailId, int InItemId, unsigned char InSlot )
	{
		static UFunction* pfnymDeattachItem = NULL;

		if ( !pfnymDeattachItem )
			pfnymDeattachItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeattachItem" );

		UCCCheatManager_execymDeattachItem_Parms ymDeattachItem_Parms;
		ymDeattachItem_Parms.InMailId = InMailId;
		ymDeattachItem_Parms.InItemId = InItemId;
		ymDeattachItem_Parms.InSlot = InSlot;

		this->ProcessEvent( pfnymDeattachItem, &ymDeattachItem_Parms, NULL );
	};

	void ymSendedMail ( unsigned char InResult )
	{
		static UFunction* pfnymSendedMail = NULL;

		if ( !pfnymSendedMail )
			pfnymSendedMail = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSendedMail" );

		UCCCheatManager_execymSendedMail_Parms ymSendedMail_Parms;
		ymSendedMail_Parms.InResult = InResult;

		this->ProcessEvent( pfnymSendedMail, &ymSendedMail_Parms, NULL );
	};

	void ymSendMail ( struct FString InReceiverName, struct FString InSubject, struct FString InMessage, int InTTL, int InCoD, int InMoneyAttach, TArray< int > InItems )
	{
		static UFunction* pfnymSendMail = NULL;

		if ( !pfnymSendMail )
			pfnymSendMail = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSendMail" );

		UCCCheatManager_execymSendMail_Parms ymSendMail_Parms;
		memcpy( &ymSendMail_Parms.InReceiverName, &InReceiverName, 0xC );
		memcpy( &ymSendMail_Parms.InSubject, &InSubject, 0xC );
		memcpy( &ymSendMail_Parms.InMessage, &InMessage, 0xC );
		ymSendMail_Parms.InTTL = InTTL;
		ymSendMail_Parms.InCoD = InCoD;
		ymSendMail_Parms.InMoneyAttach = InMoneyAttach;
		ymSendMail_Parms.InItems = InItems;

		this->ProcessEvent( pfnymSendMail, &ymSendMail_Parms, NULL );
	};

	void ymMarkReadMail ( int InMailId )
	{
		static UFunction* pfnymMarkReadMail = NULL;

		if ( !pfnymMarkReadMail )
			pfnymMarkReadMail = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymMarkReadMail" );

		UCCCheatManager_execymMarkReadMail_Parms ymMarkReadMail_Parms;
		ymMarkReadMail_Parms.InMailId = InMailId;

		this->ProcessEvent( pfnymMarkReadMail, &ymMarkReadMail_Parms, NULL );
	};

	void ymReturnedMail ( unsigned char InResult )
	{
		static UFunction* pfnymReturnedMail = NULL;

		if ( !pfnymReturnedMail )
			pfnymReturnedMail = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymReturnedMail" );

		UCCCheatManager_execymReturnedMail_Parms ymReturnedMail_Parms;
		ymReturnedMail_Parms.InResult = InResult;

		this->ProcessEvent( pfnymReturnedMail, &ymReturnedMail_Parms, NULL );
	};

	void ymReturnMail ( TArray< int > InMailIds )
	{
		static UFunction* pfnymReturnMail = NULL;

		if ( !pfnymReturnMail )
			pfnymReturnMail = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymReturnMail" );

		UCCCheatManager_execymReturnMail_Parms ymReturnMail_Parms;
		ymReturnMail_Parms.InMailIds = InMailIds;

		this->ProcessEvent( pfnymReturnMail, &ymReturnMail_Parms, NULL );
	};

	void ymDeattachedMoney ( unsigned char InResult )
	{
		static UFunction* pfnymDeattachedMoney = NULL;

		if ( !pfnymDeattachedMoney )
			pfnymDeattachedMoney = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeattachedMoney" );

		UCCCheatManager_execymDeattachedMoney_Parms ymDeattachedMoney_Parms;
		ymDeattachedMoney_Parms.InResult = InResult;

		this->ProcessEvent( pfnymDeattachedMoney, &ymDeattachedMoney_Parms, NULL );
	};

	void ymDeattachMoney ( TArray< int > InMailIds )
	{
		static UFunction* pfnymDeattachMoney = NULL;

		if ( !pfnymDeattachMoney )
			pfnymDeattachMoney = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeattachMoney" );

		UCCCheatManager_execymDeattachMoney_Parms ymDeattachMoney_Parms;
		ymDeattachMoney_Parms.InMailIds = InMailIds;

		this->ProcessEvent( pfnymDeattachMoney, &ymDeattachMoney_Parms, NULL );
	};

	void ymPaidCoD ( unsigned char InResult )
	{
		static UFunction* pfnymPaidCoD = NULL;

		if ( !pfnymPaidCoD )
			pfnymPaidCoD = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymPaidCoD" );

		UCCCheatManager_execymPaidCoD_Parms ymPaidCoD_Parms;
		ymPaidCoD_Parms.InResult = InResult;

		this->ProcessEvent( pfnymPaidCoD, &ymPaidCoD_Parms, NULL );
	};

	void ymPayCoD ( TArray< int > InMailIds )
	{
		static UFunction* pfnymPayCoD = NULL;

		if ( !pfnymPayCoD )
			pfnymPayCoD = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymPayCoD" );

		UCCCheatManager_execymPayCoD_Parms ymPayCoD_Parms;
		ymPayCoD_Parms.InMailIds = InMailIds;

		this->ProcessEvent( pfnymPayCoD, &ymPayCoD_Parms, NULL );
	};

	void ymMarkedProtectionFlag ( unsigned char InResult )
	{
		static UFunction* pfnymMarkedProtectionFlag = NULL;

		if ( !pfnymMarkedProtectionFlag )
			pfnymMarkedProtectionFlag = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymMarkedProtectionFlag" );

		UCCCheatManager_execymMarkedProtectionFlag_Parms ymMarkedProtectionFlag_Parms;
		ymMarkedProtectionFlag_Parms.InResult = InResult;

		this->ProcessEvent( pfnymMarkedProtectionFlag, &ymMarkedProtectionFlag_Parms, NULL );
	};

	void ymMarkProtectionFlag ( unsigned long InFlag, TArray< int > InMailIds )
	{
		static UFunction* pfnymMarkProtectionFlag = NULL;

		if ( !pfnymMarkProtectionFlag )
			pfnymMarkProtectionFlag = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymMarkProtectionFlag" );

		UCCCheatManager_execymMarkProtectionFlag_Parms ymMarkProtectionFlag_Parms;
		ymMarkProtectionFlag_Parms.InFlag = InFlag;
		ymMarkProtectionFlag_Parms.InMailIds = InMailIds;

		this->ProcessEvent( pfnymMarkProtectionFlag, &ymMarkProtectionFlag_Parms, NULL );
	};

	void ymDeletedMail ( unsigned char InResult )
	{
		static UFunction* pfnymDeletedMail = NULL;

		if ( !pfnymDeletedMail )
			pfnymDeletedMail = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeletedMail" );

		UCCCheatManager_execymDeletedMail_Parms ymDeletedMail_Parms;
		ymDeletedMail_Parms.InResult = InResult;

		this->ProcessEvent( pfnymDeletedMail, &ymDeletedMail_Parms, NULL );
	};

	void ymDeleteMail ( TArray< int > InMailIds )
	{
		static UFunction* pfnymDeleteMail = NULL;

		if ( !pfnymDeleteMail )
			pfnymDeleteMail = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeleteMail" );

		UCCCheatManager_execymDeleteMail_Parms ymDeleteMail_Parms;
		ymDeleteMail_Parms.InMailIds = InMailIds;

		this->ProcessEvent( pfnymDeleteMail, &ymDeleteMail_Parms, NULL );
	};

	void ymRollSkipped ( unsigned char Inm_slot )
	{
		static UFunction* pfnymRollSkipped = NULL;

		if ( !pfnymRollSkipped )
			pfnymRollSkipped = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRollSkipped" );

		UCCCheatManager_execymRollSkipped_Parms ymRollSkipped_Parms;
		ymRollSkipped_Parms.Inm_slot = Inm_slot;

		this->ProcessEvent( pfnymRollSkipped, &ymRollSkipped_Parms, NULL );
	};

	void ymRollDrawed ( unsigned char Inm_slot, int Inm_characterId )
	{
		static UFunction* pfnymRollDrawed = NULL;

		if ( !pfnymRollDrawed )
			pfnymRollDrawed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRollDrawed" );

		UCCCheatManager_execymRollDrawed_Parms ymRollDrawed_Parms;
		ymRollDrawed_Parms.Inm_slot = Inm_slot;
		ymRollDrawed_Parms.Inm_characterId = Inm_characterId;

		this->ProcessEvent( pfnymRollDrawed, &ymRollDrawed_Parms, NULL );
	};

	void ymRollStatusChanged ( unsigned char Inm_slot, int Inm_characterId, unsigned char Inm_status )
	{
		static UFunction* pfnymRollStatusChanged = NULL;

		if ( !pfnymRollStatusChanged )
			pfnymRollStatusChanged = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRollStatusChanged" );

		UCCCheatManager_execymRollStatusChanged_Parms ymRollStatusChanged_Parms;
		ymRollStatusChanged_Parms.Inm_slot = Inm_slot;
		ymRollStatusChanged_Parms.Inm_characterId = Inm_characterId;
		ymRollStatusChanged_Parms.Inm_status = Inm_status;

		this->ProcessEvent( pfnymRollStatusChanged, &ymRollStatusChanged_Parms, NULL );
	};

	void ymSetRollStatus ( unsigned char Inm_slot, unsigned char Inm_status )
	{
		static UFunction* pfnymSetRollStatus = NULL;

		if ( !pfnymSetRollStatus )
			pfnymSetRollStatus = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSetRollStatus" );

		UCCCheatManager_execymSetRollStatus_Parms ymSetRollStatus_Parms;
		ymSetRollStatus_Parms.Inm_slot = Inm_slot;
		ymSetRollStatus_Parms.Inm_status = Inm_status;

		this->ProcessEvent( pfnymSetRollStatus, &ymSetRollStatus_Parms, NULL );
	};

	void ymStartRollProcess ( int Inm_timeout )
	{
		static UFunction* pfnymStartRollProcess = NULL;

		if ( !pfnymStartRollProcess )
			pfnymStartRollProcess = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymStartRollProcess" );

		UCCCheatManager_execymStartRollProcess_Parms ymStartRollProcess_Parms;
		ymStartRollProcess_Parms.Inm_timeout = Inm_timeout;

		this->ProcessEvent( pfnymStartRollProcess, &ymStartRollProcess_Parms, NULL );
	};

	void ymFinishLootList ( unsigned long InTakeAll, int InBackpackPage )
	{
		static UFunction* pfnymFinishLootList = NULL;

		if ( !pfnymFinishLootList )
			pfnymFinishLootList = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymFinishLootList" );

		UCCCheatManager_execymFinishLootList_Parms ymFinishLootList_Parms;
		ymFinishLootList_Parms.InTakeAll = InTakeAll;
		ymFinishLootList_Parms.InBackpackPage = InBackpackPage;

		this->ProcessEvent( pfnymFinishLootList, &ymFinishLootList_Parms, NULL );
	};

	void ymInitLootList ( int Inm_xpReward, int Inm_cashReward, int Inm_pvpReward, TArray< struct FInitLootList_RollItemDesc > Inm_rolls, unsigned char Inm_place, int Inm_score, int Inm_topScore, float Inm_powerReward )
	{
		static UFunction* pfnymInitLootList = NULL;

		if ( !pfnymInitLootList )
			pfnymInitLootList = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitLootList" );

		UCCCheatManager_execymInitLootList_Parms ymInitLootList_Parms;
		ymInitLootList_Parms.Inm_xpReward = Inm_xpReward;
		ymInitLootList_Parms.Inm_cashReward = Inm_cashReward;
		ymInitLootList_Parms.Inm_pvpReward = Inm_pvpReward;
		memcpy( &ymInitLootList_Parms.Inm_rolls, &Inm_rolls, 0xC );
		ymInitLootList_Parms.Inm_place = Inm_place;
		ymInitLootList_Parms.Inm_score = Inm_score;
		ymInitLootList_Parms.Inm_topScore = Inm_topScore;
		ymInitLootList_Parms.Inm_powerReward = Inm_powerReward;

		this->ProcessEvent( pfnymInitLootList, &ymInitLootList_Parms, NULL );
	};

	void ymDeleteCharacterResponse ( unsigned char InResult )
	{
		static UFunction* pfnymDeleteCharacterResponse = NULL;

		if ( !pfnymDeleteCharacterResponse )
			pfnymDeleteCharacterResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeleteCharacterResponse" );

		UCCCheatManager_execymDeleteCharacterResponse_Parms ymDeleteCharacterResponse_Parms;
		ymDeleteCharacterResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymDeleteCharacterResponse, &ymDeleteCharacterResponse_Parms, NULL );
	};

	void ymCreateCharacterResponse ( unsigned char InResult, struct FCreateCharacterResponse_Character Inm_character )
	{
		static UFunction* pfnymCreateCharacterResponse = NULL;

		if ( !pfnymCreateCharacterResponse )
			pfnymCreateCharacterResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCreateCharacterResponse" );

		UCCCheatManager_execymCreateCharacterResponse_Parms ymCreateCharacterResponse_Parms;
		ymCreateCharacterResponse_Parms.InResult = InResult;
		memcpy( &ymCreateCharacterResponse_Parms.Inm_character, &Inm_character, 0x20 );

		this->ProcessEvent( pfnymCreateCharacterResponse, &ymCreateCharacterResponse_Parms, NULL );
	};

	void ymNotifyPlayerCharacters ( TArray< struct FNotifyPlayerCharacters_Character > InCharacters, unsigned long InIsOriginalGangster, int InExtraCharacterSlots )
	{
		static UFunction* pfnymNotifyPlayerCharacters = NULL;

		if ( !pfnymNotifyPlayerCharacters )
			pfnymNotifyPlayerCharacters = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyPlayerCharacters" );

		UCCCheatManager_execymNotifyPlayerCharacters_Parms ymNotifyPlayerCharacters_Parms;
		memcpy( &ymNotifyPlayerCharacters_Parms.InCharacters, &InCharacters, 0xC );
		ymNotifyPlayerCharacters_Parms.InIsOriginalGangster = InIsOriginalGangster;
		ymNotifyPlayerCharacters_Parms.InExtraCharacterSlots = InExtraCharacterSlots;

		this->ProcessEvent( pfnymNotifyPlayerCharacters, &ymNotifyPlayerCharacters_Parms, NULL );
	};

	void ymConnectToAdServer ( struct FString InBaseRemotingUrl, struct FString InBaseImagesUrl, unsigned long InIsMale, int InAge )
	{
		static UFunction* pfnymConnectToAdServer = NULL;

		if ( !pfnymConnectToAdServer )
			pfnymConnectToAdServer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymConnectToAdServer" );

		UCCCheatManager_execymConnectToAdServer_Parms ymConnectToAdServer_Parms;
		memcpy( &ymConnectToAdServer_Parms.InBaseRemotingUrl, &InBaseRemotingUrl, 0xC );
		memcpy( &ymConnectToAdServer_Parms.InBaseImagesUrl, &InBaseImagesUrl, 0xC );
		ymConnectToAdServer_Parms.InIsMale = InIsMale;
		ymConnectToAdServer_Parms.InAge = InAge;

		this->ProcessEvent( pfnymConnectToAdServer, &ymConnectToAdServer_Parms, NULL );
	};

	void ymKickNotification ( struct FString InReason )
	{
		static UFunction* pfnymKickNotification = NULL;

		if ( !pfnymKickNotification )
			pfnymKickNotification = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymKickNotification" );

		UCCCheatManager_execymKickNotification_Parms ymKickNotification_Parms;
		memcpy( &ymKickNotification_Parms.InReason, &InReason, 0xC );

		this->ProcessEvent( pfnymKickNotification, &ymKickNotification_Parms, NULL );
	};

	void ymLogicalReconnect ( int InReconnectTime, struct FString InReason )
	{
		static UFunction* pfnymLogicalReconnect = NULL;

		if ( !pfnymLogicalReconnect )
			pfnymLogicalReconnect = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLogicalReconnect" );

		UCCCheatManager_execymLogicalReconnect_Parms ymLogicalReconnect_Parms;
		ymLogicalReconnect_Parms.InReconnectTime = InReconnectTime;
		memcpy( &ymLogicalReconnect_Parms.InReason, &InReason, 0xC );

		this->ProcessEvent( pfnymLogicalReconnect, &ymLogicalReconnect_Parms, NULL );
	};

	void ymServerInfo ( int InDesignDataVersion, int InServerId )
	{
		static UFunction* pfnymServerInfo = NULL;

		if ( !pfnymServerInfo )
			pfnymServerInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymServerInfo" );

		UCCCheatManager_execymServerInfo_Parms ymServerInfo_Parms;
		ymServerInfo_Parms.InDesignDataVersion = InDesignDataVersion;
		ymServerInfo_Parms.InServerId = InServerId;

		this->ProcessEvent( pfnymServerInfo, &ymServerInfo_Parms, NULL );
	};

	void ymAuthenticateResponse ( unsigned char InResult )
	{
		static UFunction* pfnymAuthenticateResponse = NULL;

		if ( !pfnymAuthenticateResponse )
			pfnymAuthenticateResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAuthenticateResponse" );

		UCCCheatManager_execymAuthenticateResponse_Parms ymAuthenticateResponse_Parms;
		ymAuthenticateResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymAuthenticateResponse, &ymAuthenticateResponse_Parms, NULL );
	};

	void ymSelectCharacterResponse ( unsigned char InResult )
	{
		static UFunction* pfnymSelectCharacterResponse = NULL;

		if ( !pfnymSelectCharacterResponse )
			pfnymSelectCharacterResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSelectCharacterResponse" );

		UCCCheatManager_execymSelectCharacterResponse_Parms ymSelectCharacterResponse_Parms;
		ymSelectCharacterResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymSelectCharacterResponse, &ymSelectCharacterResponse_Parms, NULL );
	};

	void ymGotoCharacterSelectScreen ()
	{
		static UFunction* pfnymGotoCharacterSelectScreen = NULL;

		if ( !pfnymGotoCharacterSelectScreen )
			pfnymGotoCharacterSelectScreen = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGotoCharacterSelectScreen" );

		UCCCheatManager_execymGotoCharacterSelectScreen_Parms ymGotoCharacterSelectScreen_Parms;

		this->ProcessEvent( pfnymGotoCharacterSelectScreen, &ymGotoCharacterSelectScreen_Parms, NULL );
	};

	void ymSelectCharacter ( int InCharacterId )
	{
		static UFunction* pfnymSelectCharacter = NULL;

		if ( !pfnymSelectCharacter )
			pfnymSelectCharacter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSelectCharacter" );

		UCCCheatManager_execymSelectCharacter_Parms ymSelectCharacter_Parms;
		ymSelectCharacter_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymSelectCharacter, &ymSelectCharacter_Parms, NULL );
	};

	void ymDeleteCharacter ( int InCharacterId )
	{
		static UFunction* pfnymDeleteCharacter = NULL;

		if ( !pfnymDeleteCharacter )
			pfnymDeleteCharacter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeleteCharacter" );

		UCCCheatManager_execymDeleteCharacter_Parms ymDeleteCharacter_Parms;
		ymDeleteCharacter_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymDeleteCharacter, &ymDeleteCharacter_Parms, NULL );
	};

	void ymCreateCharacter ( struct FString InName, struct FCharacterAppearance InAppearance, unsigned char InClass, TArray< int > InInventory )
	{
		static UFunction* pfnymCreateCharacter = NULL;

		if ( !pfnymCreateCharacter )
			pfnymCreateCharacter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCreateCharacter" );

		UCCCheatManager_execymCreateCharacter_Parms ymCreateCharacter_Parms;
		memcpy( &ymCreateCharacter_Parms.InName, &InName, 0xC );
		memcpy( &ymCreateCharacter_Parms.InAppearance, &InAppearance, 0x8 );
		ymCreateCharacter_Parms.InClass = InClass;
		ymCreateCharacter_Parms.InInventory = InInventory;

		this->ProcessEvent( pfnymCreateCharacter, &ymCreateCharacter_Parms, NULL );
	};

	void ymCheckedCharacterNameUnique ( unsigned long InIsUnique )
	{
		static UFunction* pfnymCheckedCharacterNameUnique = NULL;

		if ( !pfnymCheckedCharacterNameUnique )
			pfnymCheckedCharacterNameUnique = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheckedCharacterNameUnique" );

		UCCCheatManager_execymCheckedCharacterNameUnique_Parms ymCheckedCharacterNameUnique_Parms;
		ymCheckedCharacterNameUnique_Parms.InIsUnique = InIsUnique;

		this->ProcessEvent( pfnymCheckedCharacterNameUnique, &ymCheckedCharacterNameUnique_Parms, NULL );
	};

	void ymCheckCharacterNameUnique ( struct FString InName )
	{
		static UFunction* pfnymCheckCharacterNameUnique = NULL;

		if ( !pfnymCheckCharacterNameUnique )
			pfnymCheckCharacterNameUnique = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheckCharacterNameUnique" );

		UCCCheatManager_execymCheckCharacterNameUnique_Parms ymCheckCharacterNameUnique_Parms;
		memcpy( &ymCheckCharacterNameUnique_Parms.InName, &InName, 0xC );

		this->ProcessEvent( pfnymCheckCharacterNameUnique, &ymCheckCharacterNameUnique_Parms, NULL );
	};

	void ymLogout ()
	{
		static UFunction* pfnymLogout = NULL;

		if ( !pfnymLogout )
			pfnymLogout = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLogout" );

		UCCCheatManager_execymLogout_Parms ymLogout_Parms;

		this->ProcessEvent( pfnymLogout, &ymLogout_Parms, NULL );
	};

	void ymTicketAuthenticate ( int InTicket )
	{
		static UFunction* pfnymTicketAuthenticate = NULL;

		if ( !pfnymTicketAuthenticate )
			pfnymTicketAuthenticate = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTicketAuthenticate" );

		UCCCheatManager_execymTicketAuthenticate_Parms ymTicketAuthenticate_Parms;
		ymTicketAuthenticate_Parms.InTicket = InTicket;

		this->ProcessEvent( pfnymTicketAuthenticate, &ymTicketAuthenticate_Parms, NULL );
	};

	void ymAuthenticate ( struct FString InLogin, struct FString InPassword )
	{
		static UFunction* pfnymAuthenticate = NULL;

		if ( !pfnymAuthenticate )
			pfnymAuthenticate = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAuthenticate" );

		UCCCheatManager_execymAuthenticate_Parms ymAuthenticate_Parms;
		memcpy( &ymAuthenticate_Parms.InLogin, &InLogin, 0xC );
		memcpy( &ymAuthenticate_Parms.InPassword, &InPassword, 0xC );

		this->ProcessEvent( pfnymAuthenticate, &ymAuthenticate_Parms, NULL );
	};

	void ymCharacterLostRelevancy ( int InCharacterId )
	{
		static UFunction* pfnymCharacterLostRelevancy = NULL;

		if ( !pfnymCharacterLostRelevancy )
			pfnymCharacterLostRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCharacterLostRelevancy" );

		UCCCheatManager_execymCharacterLostRelevancy_Parms ymCharacterLostRelevancy_Parms;
		ymCharacterLostRelevancy_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymCharacterLostRelevancy, &ymCharacterLostRelevancy_Parms, NULL );
	};

	void ymNewRelevantCharacter ( struct FCharacterPosition InPosition, int InCharacterId )
	{
		static UFunction* pfnymNewRelevantCharacter = NULL;

		if ( !pfnymNewRelevantCharacter )
			pfnymNewRelevantCharacter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNewRelevantCharacter" );

		UCCCheatManager_execymNewRelevantCharacter_Parms ymNewRelevantCharacter_Parms;
		memcpy( &ymNewRelevantCharacter_Parms.InPosition, &InPosition, 0x10 );
		ymNewRelevantCharacter_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymNewRelevantCharacter, &ymNewRelevantCharacter_Parms, NULL );
	};

	void ymSetSpawnPosition ( struct FCharacterPosition Inm_newPosition, int Inm_lobbyId )
	{
		static UFunction* pfnymSetSpawnPosition = NULL;

		if ( !pfnymSetSpawnPosition )
			pfnymSetSpawnPosition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSetSpawnPosition" );

		UCCCheatManager_execymSetSpawnPosition_Parms ymSetSpawnPosition_Parms;
		memcpy( &ymSetSpawnPosition_Parms.Inm_newPosition, &Inm_newPosition, 0x10 );
		ymSetSpawnPosition_Parms.Inm_lobbyId = Inm_lobbyId;

		this->ProcessEvent( pfnymSetSpawnPosition, &ymSetSpawnPosition_Parms, NULL );
	};

	void ymExitLobbyResponse ( unsigned char InResult )
	{
		static UFunction* pfnymExitLobbyResponse = NULL;

		if ( !pfnymExitLobbyResponse )
			pfnymExitLobbyResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymExitLobbyResponse" );

		UCCCheatManager_execymExitLobbyResponse_Parms ymExitLobbyResponse_Parms;
		ymExitLobbyResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymExitLobbyResponse, &ymExitLobbyResponse_Parms, NULL );
	};

	void ymNotifyCharacterMovement ( int InCharacterId, float Intime, struct FCharacterPosition InPosition, float InVelocityX, float InVelocityY, float InVelocityZ )
	{
		static UFunction* pfnymNotifyCharacterMovement = NULL;

		if ( !pfnymNotifyCharacterMovement )
			pfnymNotifyCharacterMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyCharacterMovement" );

		UCCCheatManager_execymNotifyCharacterMovement_Parms ymNotifyCharacterMovement_Parms;
		ymNotifyCharacterMovement_Parms.InCharacterId = InCharacterId;
		ymNotifyCharacterMovement_Parms.Intime = Intime;
		memcpy( &ymNotifyCharacterMovement_Parms.InPosition, &InPosition, 0x10 );
		ymNotifyCharacterMovement_Parms.InVelocityX = InVelocityX;
		ymNotifyCharacterMovement_Parms.InVelocityY = InVelocityY;
		ymNotifyCharacterMovement_Parms.InVelocityZ = InVelocityZ;

		this->ProcessEvent( pfnymNotifyCharacterMovement, &ymNotifyCharacterMovement_Parms, NULL );
	};

	void ymNotifyPlayerMovement ( float Intime, struct FCharacterPosition InPosition, float InVelocityX, float InVelocityY, float InVelocityZ )
	{
		static UFunction* pfnymNotifyPlayerMovement = NULL;

		if ( !pfnymNotifyPlayerMovement )
			pfnymNotifyPlayerMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyPlayerMovement" );

		UCCCheatManager_execymNotifyPlayerMovement_Parms ymNotifyPlayerMovement_Parms;
		ymNotifyPlayerMovement_Parms.Intime = Intime;
		memcpy( &ymNotifyPlayerMovement_Parms.InPosition, &InPosition, 0x10 );
		ymNotifyPlayerMovement_Parms.InVelocityX = InVelocityX;
		ymNotifyPlayerMovement_Parms.InVelocityY = InVelocityY;
		ymNotifyPlayerMovement_Parms.InVelocityZ = InVelocityZ;

		this->ProcessEvent( pfnymNotifyPlayerMovement, &ymNotifyPlayerMovement_Parms, NULL );
	};

	void ymExitLobby ( unsigned char Inm_exit )
	{
		static UFunction* pfnymExitLobby = NULL;

		if ( !pfnymExitLobby )
			pfnymExitLobby = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymExitLobby" );

		UCCCheatManager_execymExitLobby_Parms ymExitLobby_Parms;
		ymExitLobby_Parms.Inm_exit = Inm_exit;

		this->ProcessEvent( pfnymExitLobby, &ymExitLobby_Parms, NULL );
	};

	void ymEnterLobbyResponse ( unsigned char InResult )
	{
		static UFunction* pfnymEnterLobbyResponse = NULL;

		if ( !pfnymEnterLobbyResponse )
			pfnymEnterLobbyResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymEnterLobbyResponse" );

		UCCCheatManager_execymEnterLobbyResponse_Parms ymEnterLobbyResponse_Parms;
		ymEnterLobbyResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymEnterLobbyResponse, &ymEnterLobbyResponse_Parms, NULL );
	};

	void ymEnterLobby ()
	{
		static UFunction* pfnymEnterLobby = NULL;

		if ( !pfnymEnterLobby )
			pfnymEnterLobby = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymEnterLobby" );

		UCCCheatManager_execymEnterLobby_Parms ymEnterLobby_Parms;

		this->ProcessEvent( pfnymEnterLobby, &ymEnterLobby_Parms, NULL );
	};

	void ymExtraCharacterSlotsAdded ( int Inm_slotsCount )
	{
		static UFunction* pfnymExtraCharacterSlotsAdded = NULL;

		if ( !pfnymExtraCharacterSlotsAdded )
			pfnymExtraCharacterSlotsAdded = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymExtraCharacterSlotsAdded" );

		UCCCheatManager_execymExtraCharacterSlotsAdded_Parms ymExtraCharacterSlotsAdded_Parms;
		ymExtraCharacterSlotsAdded_Parms.Inm_slotsCount = Inm_slotsCount;

		this->ProcessEvent( pfnymExtraCharacterSlotsAdded, &ymExtraCharacterSlotsAdded_Parms, NULL );
	};

	void ymItemTransaction ( TArray< struct FItemOperation > InOperations )
	{
		static UFunction* pfnymItemTransaction = NULL;

		if ( !pfnymItemTransaction )
			pfnymItemTransaction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymItemTransaction" );

		UCCCheatManager_execymItemTransaction_Parms ymItemTransaction_Parms;
		memcpy( &ymItemTransaction_Parms.InOperations, &InOperations, 0xC );

		this->ProcessEvent( pfnymItemTransaction, &ymItemTransaction_Parms, NULL );
	};

	void ymItemManagementResponse ( unsigned char InResponse )
	{
		static UFunction* pfnymItemManagementResponse = NULL;

		if ( !pfnymItemManagementResponse )
			pfnymItemManagementResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymItemManagementResponse" );

		UCCCheatManager_execymItemManagementResponse_Parms ymItemManagementResponse_Parms;
		ymItemManagementResponse_Parms.InResponse = InResponse;

		this->ProcessEvent( pfnymItemManagementResponse, &ymItemManagementResponse_Parms, NULL );
	};

	void ymUndoSorting ()
	{
		static UFunction* pfnymUndoSorting = NULL;

		if ( !pfnymUndoSorting )
			pfnymUndoSorting = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUndoSorting" );

		UCCCheatManager_execymUndoSorting_Parms ymUndoSorting_Parms;

		this->ProcessEvent( pfnymUndoSorting, &ymUndoSorting_Parms, NULL );
	};

	void ymItemsSorted ( int InItemsRevision, int InItemsAttributesRevision )
	{
		static UFunction* pfnymItemsSorted = NULL;

		if ( !pfnymItemsSorted )
			pfnymItemsSorted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymItemsSorted" );

		UCCCheatManager_execymItemsSorted_Parms ymItemsSorted_Parms;
		ymItemsSorted_Parms.InItemsRevision = InItemsRevision;
		ymItemsSorted_Parms.InItemsAttributesRevision = InItemsAttributesRevision;

		this->ProcessEvent( pfnymItemsSorted, &ymItemsSorted_Parms, NULL );
	};

	void ymSortItems ( unsigned char InSortType, unsigned char InContainerType, int InContainerIndex )
	{
		static UFunction* pfnymSortItems = NULL;

		if ( !pfnymSortItems )
			pfnymSortItems = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSortItems" );

		UCCCheatManager_execymSortItems_Parms ymSortItems_Parms;
		ymSortItems_Parms.InSortType = InSortType;
		ymSortItems_Parms.InContainerType = InContainerType;
		ymSortItems_Parms.InContainerIndex = InContainerIndex;

		this->ProcessEvent( pfnymSortItems, &ymSortItems_Parms, NULL );
	};

	void ymOpenItem_Error ( int InItemId, unsigned char InErrorType )
	{
		static UFunction* pfnymOpenItem_Error = NULL;

		if ( !pfnymOpenItem_Error )
			pfnymOpenItem_Error = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymOpenItem_Error" );

		UCCCheatManager_execymOpenItem_Error_Parms ymOpenItem_Error_Parms;
		ymOpenItem_Error_Parms.InItemId = InItemId;
		ymOpenItem_Error_Parms.InErrorType = InErrorType;

		this->ProcessEvent( pfnymOpenItem_Error, &ymOpenItem_Error_Parms, NULL );
	};

	void ymOpenItem_Succeed ( int InItemId )
	{
		static UFunction* pfnymOpenItem_Succeed = NULL;

		if ( !pfnymOpenItem_Succeed )
			pfnymOpenItem_Succeed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymOpenItem_Succeed" );

		UCCCheatManager_execymOpenItem_Succeed_Parms ymOpenItem_Succeed_Parms;
		ymOpenItem_Succeed_Parms.InItemId = InItemId;

		this->ProcessEvent( pfnymOpenItem_Succeed, &ymOpenItem_Succeed_Parms, NULL );
	};

	void ymRedeemBonusItem ( int InItemTemplateId, int InContainerType, unsigned char InSlot )
	{
		static UFunction* pfnymRedeemBonusItem = NULL;

		if ( !pfnymRedeemBonusItem )
			pfnymRedeemBonusItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRedeemBonusItem" );

		UCCCheatManager_execymRedeemBonusItem_Parms ymRedeemBonusItem_Parms;
		ymRedeemBonusItem_Parms.InItemTemplateId = InItemTemplateId;
		ymRedeemBonusItem_Parms.InContainerType = InContainerType;
		ymRedeemBonusItem_Parms.InSlot = InSlot;

		this->ProcessEvent( pfnymRedeemBonusItem, &ymRedeemBonusItem_Parms, NULL );
	};

	void ymNotifyAccountBonusItems ( TArray< int > InItemTemplateIDs )
	{
		static UFunction* pfnymNotifyAccountBonusItems = NULL;

		if ( !pfnymNotifyAccountBonusItems )
			pfnymNotifyAccountBonusItems = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyAccountBonusItems" );

		UCCCheatManager_execymNotifyAccountBonusItems_Parms ymNotifyAccountBonusItems_Parms;
		ymNotifyAccountBonusItems_Parms.InItemTemplateIDs = InItemTemplateIDs;

		this->ProcessEvent( pfnymNotifyAccountBonusItems, &ymNotifyAccountBonusItems_Parms, NULL );
	};

	void ymOpenNewspaperResult ( unsigned long InIsOpenNewspaperRequest, int InNewspaperId, struct FServerDateTime InDate, TArray< struct FNewspaperArticleData > InArticles )
	{
		static UFunction* pfnymOpenNewspaperResult = NULL;

		if ( !pfnymOpenNewspaperResult )
			pfnymOpenNewspaperResult = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymOpenNewspaperResult" );

		UCCCheatManager_execymOpenNewspaperResult_Parms ymOpenNewspaperResult_Parms;
		ymOpenNewspaperResult_Parms.InIsOpenNewspaperRequest = InIsOpenNewspaperRequest;
		ymOpenNewspaperResult_Parms.InNewspaperId = InNewspaperId;
		memcpy( &ymOpenNewspaperResult_Parms.InDate, &InDate, 0x8 );
		memcpy( &ymOpenNewspaperResult_Parms.InArticles, &InArticles, 0xC );

		this->ProcessEvent( pfnymOpenNewspaperResult, &ymOpenNewspaperResult_Parms, NULL );
	};

	void ymOpenNewspaper ( int InNewspaperId )
	{
		static UFunction* pfnymOpenNewspaper = NULL;

		if ( !pfnymOpenNewspaper )
			pfnymOpenNewspaper = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymOpenNewspaper" );

		UCCCheatManager_execymOpenNewspaper_Parms ymOpenNewspaper_Parms;
		ymOpenNewspaper_Parms.InNewspaperId = InNewspaperId;

		this->ProcessEvent( pfnymOpenNewspaper, &ymOpenNewspaper_Parms, NULL );
	};

	void ymGetNewspaperResponse ( unsigned char InResponse )
	{
		static UFunction* pfnymGetNewspaperResponse = NULL;

		if ( !pfnymGetNewspaperResponse )
			pfnymGetNewspaperResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGetNewspaperResponse" );

		UCCCheatManager_execymGetNewspaperResponse_Parms ymGetNewspaperResponse_Parms;
		ymGetNewspaperResponse_Parms.InResponse = InResponse;

		this->ProcessEvent( pfnymGetNewspaperResponse, &ymGetNewspaperResponse_Parms, NULL );
	};

	void ymGetNewspaper ()
	{
		static UFunction* pfnymGetNewspaper = NULL;

		if ( !pfnymGetNewspaper )
			pfnymGetNewspaper = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGetNewspaper" );

		UCCCheatManager_execymGetNewspaper_Parms ymGetNewspaper_Parms;

		this->ProcessEvent( pfnymGetNewspaper, &ymGetNewspaper_Parms, NULL );
	};

	void ymGetNewspapersByMonthResponse ( TArray< struct FGetNewspapersByMonthStruct > InNewspapers )
	{
		static UFunction* pfnymGetNewspapersByMonthResponse = NULL;

		if ( !pfnymGetNewspapersByMonthResponse )
			pfnymGetNewspapersByMonthResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGetNewspapersByMonthResponse" );

		UCCCheatManager_execymGetNewspapersByMonthResponse_Parms ymGetNewspapersByMonthResponse_Parms;
		memcpy( &ymGetNewspapersByMonthResponse_Parms.InNewspapers, &InNewspapers, 0xC );

		this->ProcessEvent( pfnymGetNewspapersByMonthResponse, &ymGetNewspapersByMonthResponse_Parms, NULL );
	};

	void ymGetNewspapersByMonth ( int InYear, int InMonth )
	{
		static UFunction* pfnymGetNewspapersByMonth = NULL;

		if ( !pfnymGetNewspapersByMonth )
			pfnymGetNewspapersByMonth = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGetNewspapersByMonth" );

		UCCCheatManager_execymGetNewspapersByMonth_Parms ymGetNewspapersByMonth_Parms;
		ymGetNewspapersByMonth_Parms.InYear = InYear;
		ymGetNewspapersByMonth_Parms.InMonth = InMonth;

		this->ProcessEvent( pfnymGetNewspapersByMonth, &ymGetNewspapersByMonth_Parms, NULL );
	};

	void ymOpenItem ( int InItemId )
	{
		static UFunction* pfnymOpenItem = NULL;

		if ( !pfnymOpenItem )
			pfnymOpenItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymOpenItem" );

		UCCCheatManager_execymOpenItem_Parms ymOpenItem_Parms;
		ymOpenItem_Parms.InItemId = InItemId;

		this->ProcessEvent( pfnymOpenItem, &ymOpenItem_Parms, NULL );
	};

	void ymMergeItem ( int InItemIdSource, int InItemIdDestination, int InCount )
	{
		static UFunction* pfnymMergeItem = NULL;

		if ( !pfnymMergeItem )
			pfnymMergeItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymMergeItem" );

		UCCCheatManager_execymMergeItem_Parms ymMergeItem_Parms;
		ymMergeItem_Parms.InItemIdSource = InItemIdSource;
		ymMergeItem_Parms.InItemIdDestination = InItemIdDestination;
		ymMergeItem_Parms.InCount = InCount;

		this->ProcessEvent( pfnymMergeItem, &ymMergeItem_Parms, NULL );
	};

	void ymSplitItem ( int InItemId, int InContainerType, unsigned char InSlot, int InCount )
	{
		static UFunction* pfnymSplitItem = NULL;

		if ( !pfnymSplitItem )
			pfnymSplitItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSplitItem" );

		UCCCheatManager_execymSplitItem_Parms ymSplitItem_Parms;
		ymSplitItem_Parms.InItemId = InItemId;
		ymSplitItem_Parms.InContainerType = InContainerType;
		ymSplitItem_Parms.InSlot = InSlot;
		ymSplitItem_Parms.InCount = InCount;

		this->ProcessEvent( pfnymSplitItem, &ymSplitItem_Parms, NULL );
	};

	void ymSwapItems ( int InItemId1, int InItemId2 )
	{
		static UFunction* pfnymSwapItems = NULL;

		if ( !pfnymSwapItems )
			pfnymSwapItems = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSwapItems" );

		UCCCheatManager_execymSwapItems_Parms ymSwapItems_Parms;
		ymSwapItems_Parms.InItemId1 = InItemId1;
		ymSwapItems_Parms.InItemId2 = InItemId2;

		this->ProcessEvent( pfnymSwapItems, &ymSwapItems_Parms, NULL );
	};

	void ymRemoveItem ( int InItemId )
	{
		static UFunction* pfnymRemoveItem = NULL;

		if ( !pfnymRemoveItem )
			pfnymRemoveItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRemoveItem" );

		UCCCheatManager_execymRemoveItem_Parms ymRemoveItem_Parms;
		ymRemoveItem_Parms.InItemId = InItemId;

		this->ProcessEvent( pfnymRemoveItem, &ymRemoveItem_Parms, NULL );
	};

	void ymMoveItemToSlot ( int InItemId, int InContainerType, unsigned char InSlot )
	{
		static UFunction* pfnymMoveItemToSlot = NULL;

		if ( !pfnymMoveItemToSlot )
			pfnymMoveItemToSlot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymMoveItemToSlot" );

		UCCCheatManager_execymMoveItemToSlot_Parms ymMoveItemToSlot_Parms;
		ymMoveItemToSlot_Parms.InItemId = InItemId;
		ymMoveItemToSlot_Parms.InContainerType = InContainerType;
		ymMoveItemToSlot_Parms.InSlot = InSlot;

		this->ProcessEvent( pfnymMoveItemToSlot, &ymMoveItemToSlot_Parms, NULL );
	};

	void ymUDSWaitingCharacters ( TArray< struct FWaitingCharacter > InCharacters )
	{
		static UFunction* pfnymUDSWaitingCharacters = NULL;

		if ( !pfnymUDSWaitingCharacters )
			pfnymUDSWaitingCharacters = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUDSWaitingCharacters" );

		UCCCheatManager_execymUDSWaitingCharacters_Parms ymUDSWaitingCharacters_Parms;
		memcpy( &ymUDSWaitingCharacters_Parms.InCharacters, &InCharacters, 0xC );

		this->ProcessEvent( pfnymUDSWaitingCharacters, &ymUDSWaitingCharacters_Parms, NULL );
	};

	void ymSoloScoreBoard ( int InMinLevel, int InMaxLevel, TArray< struct FScoreBoardPlace > InPlaces )
	{
		static UFunction* pfnymSoloScoreBoard = NULL;

		if ( !pfnymSoloScoreBoard )
			pfnymSoloScoreBoard = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSoloScoreBoard" );

		UCCCheatManager_execymSoloScoreBoard_Parms ymSoloScoreBoard_Parms;
		ymSoloScoreBoard_Parms.InMinLevel = InMinLevel;
		ymSoloScoreBoard_Parms.InMaxLevel = InMaxLevel;
		memcpy( &ymSoloScoreBoard_Parms.InPlaces, &InPlaces, 0xC );

		this->ProcessEvent( pfnymSoloScoreBoard, &ymSoloScoreBoard_Parms, NULL );
	};

	void ymUDSInstanceStatistics ( TArray< struct FUDSInstanceStatistics_PlayerStat > InPlayerStats, TArray< struct FUDSInstanceStatistics_GameStat > InGameStats )
	{
		static UFunction* pfnymUDSInstanceStatistics = NULL;

		if ( !pfnymUDSInstanceStatistics )
			pfnymUDSInstanceStatistics = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUDSInstanceStatistics" );

		UCCCheatManager_execymUDSInstanceStatistics_Parms ymUDSInstanceStatistics_Parms;
		memcpy( &ymUDSInstanceStatistics_Parms.InPlayerStats, &InPlayerStats, 0xC );
		memcpy( &ymUDSInstanceStatistics_Parms.InGameStats, &InGameStats, 0xC );

		this->ProcessEvent( pfnymUDSInstanceStatistics, &ymUDSInstanceStatistics_Parms, NULL );
	};

	void ymUDSAvatarInfoFailed ( int InCharacterId )
	{
		static UFunction* pfnymUDSAvatarInfoFailed = NULL;

		if ( !pfnymUDSAvatarInfoFailed )
			pfnymUDSAvatarInfoFailed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUDSAvatarInfoFailed" );

		UCCCheatManager_execymUDSAvatarInfoFailed_Parms ymUDSAvatarInfoFailed_Parms;
		ymUDSAvatarInfoFailed_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymUDSAvatarInfoFailed, &ymUDSAvatarInfoFailed_Parms, NULL );
	};

	void ymUDSSpectatorResponse ( int InCharacterId )
	{
		static UFunction* pfnymUDSSpectatorResponse = NULL;

		if ( !pfnymUDSSpectatorResponse )
			pfnymUDSSpectatorResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUDSSpectatorResponse" );

		UCCCheatManager_execymUDSSpectatorResponse_Parms ymUDSSpectatorResponse_Parms;
		ymUDSSpectatorResponse_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymUDSSpectatorResponse, &ymUDSSpectatorResponse_Parms, NULL );
	};

	void ymUDSAvatarInfoResponse ( int InCharacterId, unsigned char InClassId, int InPvPRank, int InPvPTitleId, float InHandicapFactor, int InClanLogoId, int InClanLogoColorId, struct FCharacterAppearance InAppearance, struct FPaperdoll InPaperdoll, unsigned char InTeam, TArray< struct FAvatarAttribute > InBaseAttributes, TArray< struct FWeaponProfile > InWeaponProfiles, TArray< struct FAbilityInfo > InActionBarAbilities, TArray< struct FDrugInfo > InExtraDrugAbilities, TArray< struct FFeatStat > InFeatStats, TArray< int > InExtraActions )
	{
		static UFunction* pfnymUDSAvatarInfoResponse = NULL;

		if ( !pfnymUDSAvatarInfoResponse )
			pfnymUDSAvatarInfoResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUDSAvatarInfoResponse" );

		UCCCheatManager_execymUDSAvatarInfoResponse_Parms ymUDSAvatarInfoResponse_Parms;
		ymUDSAvatarInfoResponse_Parms.InCharacterId = InCharacterId;
		ymUDSAvatarInfoResponse_Parms.InClassId = InClassId;
		ymUDSAvatarInfoResponse_Parms.InPvPRank = InPvPRank;
		ymUDSAvatarInfoResponse_Parms.InPvPTitleId = InPvPTitleId;
		ymUDSAvatarInfoResponse_Parms.InHandicapFactor = InHandicapFactor;
		ymUDSAvatarInfoResponse_Parms.InClanLogoId = InClanLogoId;
		ymUDSAvatarInfoResponse_Parms.InClanLogoColorId = InClanLogoColorId;
		memcpy( &ymUDSAvatarInfoResponse_Parms.InAppearance, &InAppearance, 0x8 );
		memcpy( &ymUDSAvatarInfoResponse_Parms.InPaperdoll, &InPaperdoll, 0x28 );
		ymUDSAvatarInfoResponse_Parms.InTeam = InTeam;
		memcpy( &ymUDSAvatarInfoResponse_Parms.InBaseAttributes, &InBaseAttributes, 0xC );
		memcpy( &ymUDSAvatarInfoResponse_Parms.InWeaponProfiles, &InWeaponProfiles, 0xC );
		memcpy( &ymUDSAvatarInfoResponse_Parms.InActionBarAbilities, &InActionBarAbilities, 0xC );
		memcpy( &ymUDSAvatarInfoResponse_Parms.InExtraDrugAbilities, &InExtraDrugAbilities, 0xC );
		memcpy( &ymUDSAvatarInfoResponse_Parms.InFeatStats, &InFeatStats, 0xC );
		ymUDSAvatarInfoResponse_Parms.InExtraActions = InExtraActions;

		this->ProcessEvent( pfnymUDSAvatarInfoResponse, &ymUDSAvatarInfoResponse_Parms, NULL );
	};

	void ymListenUDSAvatarInfoRequest ( int InCharacterId, int InInstanceId )
	{
		static UFunction* pfnymListenUDSAvatarInfoRequest = NULL;

		if ( !pfnymListenUDSAvatarInfoRequest )
			pfnymListenUDSAvatarInfoRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymListenUDSAvatarInfoRequest" );

		UCCCheatManager_execymListenUDSAvatarInfoRequest_Parms ymListenUDSAvatarInfoRequest_Parms;
		ymListenUDSAvatarInfoRequest_Parms.InCharacterId = InCharacterId;
		ymListenUDSAvatarInfoRequest_Parms.InInstanceId = InInstanceId;

		this->ProcessEvent( pfnymListenUDSAvatarInfoRequest, &ymListenUDSAvatarInfoRequest_Parms, NULL );
	};

	void ymUDSAvatarInfoRequest ( int InCharacterId )
	{
		static UFunction* pfnymUDSAvatarInfoRequest = NULL;

		if ( !pfnymUDSAvatarInfoRequest )
			pfnymUDSAvatarInfoRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUDSAvatarInfoRequest" );

		UCCCheatManager_execymUDSAvatarInfoRequest_Parms ymUDSAvatarInfoRequest_Parms;
		ymUDSAvatarInfoRequest_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymUDSAvatarInfoRequest, &ymUDSAvatarInfoRequest_Parms, NULL );
	};

	void ymUDSChangeTeam ( int InCharacterId, unsigned char InTeam )
	{
		static UFunction* pfnymUDSChangeTeam = NULL;

		if ( !pfnymUDSChangeTeam )
			pfnymUDSChangeTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUDSChangeTeam" );

		UCCCheatManager_execymUDSChangeTeam_Parms ymUDSChangeTeam_Parms;
		ymUDSChangeTeam_Parms.InCharacterId = InCharacterId;
		ymUDSChangeTeam_Parms.InTeam = InTeam;

		this->ProcessEvent( pfnymUDSChangeTeam, &ymUDSChangeTeam_Parms, NULL );
	};

	void ymUDSBeginGame ()
	{
		static UFunction* pfnymUDSBeginGame = NULL;

		if ( !pfnymUDSBeginGame )
			pfnymUDSBeginGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUDSBeginGame" );

		UCCCheatManager_execymUDSBeginGame_Parms ymUDSBeginGame_Parms;

		this->ProcessEvent( pfnymUDSBeginGame, &ymUDSBeginGame_Parms, NULL );
	};

	void ymUDSBeginWarmup ()
	{
		static UFunction* pfnymUDSBeginWarmup = NULL;

		if ( !pfnymUDSBeginWarmup )
			pfnymUDSBeginWarmup = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUDSBeginWarmup" );

		UCCCheatManager_execymUDSBeginWarmup_Parms ymUDSBeginWarmup_Parms;

		this->ProcessEvent( pfnymUDSBeginWarmup, &ymUDSBeginWarmup_Parms, NULL );
	};

	void ymCheatUDSFinished ( int InWinnerTeam, int InAdditionalSeconds )
	{
		static UFunction* pfnymCheatUDSFinished = NULL;

		if ( !pfnymCheatUDSFinished )
			pfnymCheatUDSFinished = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheatUDSFinished" );

		UCCCheatManager_execymCheatUDSFinished_Parms ymCheatUDSFinished_Parms;
		ymCheatUDSFinished_Parms.InWinnerTeam = InWinnerTeam;
		ymCheatUDSFinished_Parms.InAdditionalSeconds = InAdditionalSeconds;

		this->ProcessEvent( pfnymCheatUDSFinished, &ymCheatUDSFinished_Parms, NULL );
	};

	void ymUDSFinished ( int InWinnerTeam )
	{
		static UFunction* pfnymUDSFinished = NULL;

		if ( !pfnymUDSFinished )
			pfnymUDSFinished = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUDSFinished" );

		UCCCheatManager_execymUDSFinished_Parms ymUDSFinished_Parms;
		ymUDSFinished_Parms.InWinnerTeam = InWinnerTeam;

		this->ProcessEvent( pfnymUDSFinished, &ymUDSFinished_Parms, NULL );
	};

	void ymUDSStarted ( int InUdsId, struct FConnectionData InConnectionData )
	{
		static UFunction* pfnymUDSStarted = NULL;

		if ( !pfnymUDSStarted )
			pfnymUDSStarted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUDSStarted" );

		UCCCheatManager_execymUDSStarted_Parms ymUDSStarted_Parms;
		ymUDSStarted_Parms.InUdsId = InUdsId;
		memcpy( &ymUDSStarted_Parms.InConnectionData, &InConnectionData, 0x10 );

		this->ProcessEvent( pfnymUDSStarted, &ymUDSStarted_Parms, NULL );
	};

	void ymUDSAbnormalClosed ( int InSessionId )
	{
		static UFunction* pfnymUDSAbnormalClosed = NULL;

		if ( !pfnymUDSAbnormalClosed )
			pfnymUDSAbnormalClosed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUDSAbnormalClosed" );

		UCCCheatManager_execymUDSAbnormalClosed_Parms ymUDSAbnormalClosed_Parms;
		ymUDSAbnormalClosed_Parms.InSessionId = InSessionId;

		this->ProcessEvent( pfnymUDSAbnormalClosed, &ymUDSAbnormalClosed_Parms, NULL );
	};

	void ymStopAutoCloseTimer ()
	{
		static UFunction* pfnymStopAutoCloseTimer = NULL;

		if ( !pfnymStopAutoCloseTimer )
			pfnymStopAutoCloseTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymStopAutoCloseTimer" );

		UCCCheatManager_execymStopAutoCloseTimer_Parms ymStopAutoCloseTimer_Parms;

		this->ProcessEvent( pfnymStopAutoCloseTimer, &ymStopAutoCloseTimer_Parms, NULL );
	};

	void ymStartAutoCloseTimer ( int InTimeout )
	{
		static UFunction* pfnymStartAutoCloseTimer = NULL;

		if ( !pfnymStartAutoCloseTimer )
			pfnymStartAutoCloseTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymStartAutoCloseTimer" );

		UCCCheatManager_execymStartAutoCloseTimer_Parms ymStartAutoCloseTimer_Parms;
		ymStartAutoCloseTimer_Parms.InTimeout = InTimeout;

		this->ProcessEvent( pfnymStartAutoCloseTimer, &ymStartAutoCloseTimer_Parms, NULL );
	};

	void ymStopAutoBalanceTimer ()
	{
		static UFunction* pfnymStopAutoBalanceTimer = NULL;

		if ( !pfnymStopAutoBalanceTimer )
			pfnymStopAutoBalanceTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymStopAutoBalanceTimer" );

		UCCCheatManager_execymStopAutoBalanceTimer_Parms ymStopAutoBalanceTimer_Parms;

		this->ProcessEvent( pfnymStopAutoBalanceTimer, &ymStopAutoBalanceTimer_Parms, NULL );
	};

	void ymStartAutoBalanceTimer ( int InTimeout )
	{
		static UFunction* pfnymStartAutoBalanceTimer = NULL;

		if ( !pfnymStartAutoBalanceTimer )
			pfnymStartAutoBalanceTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymStartAutoBalanceTimer" );

		UCCCheatManager_execymStartAutoBalanceTimer_Parms ymStartAutoBalanceTimer_Parms;
		ymStartAutoBalanceTimer_Parms.InTimeout = InTimeout;

		this->ProcessEvent( pfnymStartAutoBalanceTimer, &ymStartAutoBalanceTimer_Parms, NULL );
	};

	void ymForbidInstanceLoading ( int InSessionId )
	{
		static UFunction* pfnymForbidInstanceLoading = NULL;

		if ( !pfnymForbidInstanceLoading )
			pfnymForbidInstanceLoading = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymForbidInstanceLoading" );

		UCCCheatManager_execymForbidInstanceLoading_Parms ymForbidInstanceLoading_Parms;
		ymForbidInstanceLoading_Parms.InSessionId = InSessionId;

		this->ProcessEvent( pfnymForbidInstanceLoading, &ymForbidInstanceLoading_Parms, NULL );
	};

	void ymAllowInstanceLoading ( int InSessionId )
	{
		static UFunction* pfnymAllowInstanceLoading = NULL;

		if ( !pfnymAllowInstanceLoading )
			pfnymAllowInstanceLoading = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAllowInstanceLoading" );

		UCCCheatManager_execymAllowInstanceLoading_Parms ymAllowInstanceLoading_Parms;
		ymAllowInstanceLoading_Parms.InSessionId = InSessionId;

		this->ProcessEvent( pfnymAllowInstanceLoading, &ymAllowInstanceLoading_Parms, NULL );
	};

	void ymInstanceLeaved ()
	{
		static UFunction* pfnymInstanceLeaved = NULL;

		if ( !pfnymInstanceLeaved )
			pfnymInstanceLeaved = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInstanceLeaved" );

		UCCCheatManager_execymInstanceLeaved_Parms ymInstanceLeaved_Parms;

		this->ProcessEvent( pfnymInstanceLeaved, &ymInstanceLeaved_Parms, NULL );
	};

	void ymInstanceEntered ( int InSessionId )
	{
		static UFunction* pfnymInstanceEntered = NULL;

		if ( !pfnymInstanceEntered )
			pfnymInstanceEntered = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInstanceEntered" );

		UCCCheatManager_execymInstanceEntered_Parms ymInstanceEntered_Parms;
		ymInstanceEntered_Parms.InSessionId = InSessionId;

		this->ProcessEvent( pfnymInstanceEntered, &ymInstanceEntered_Parms, NULL );
	};

	void ymInstanceFailed ( int InSessionId )
	{
		static UFunction* pfnymInstanceFailed = NULL;

		if ( !pfnymInstanceFailed )
			pfnymInstanceFailed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInstanceFailed" );

		UCCCheatManager_execymInstanceFailed_Parms ymInstanceFailed_Parms;
		ymInstanceFailed_Parms.InSessionId = InSessionId;

		this->ProcessEvent( pfnymInstanceFailed, &ymInstanceFailed_Parms, NULL );
	};

	void ymInstanceCanceled ( int InSessionId )
	{
		static UFunction* pfnymInstanceCanceled = NULL;

		if ( !pfnymInstanceCanceled )
			pfnymInstanceCanceled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInstanceCanceled" );

		UCCCheatManager_execymInstanceCanceled_Parms ymInstanceCanceled_Parms;
		ymInstanceCanceled_Parms.InSessionId = InSessionId;

		this->ProcessEvent( pfnymInstanceCanceled, &ymInstanceCanceled_Parms, NULL );
	};

	void ymInstanceAccepted ( int InSessionId )
	{
		static UFunction* pfnymInstanceAccepted = NULL;

		if ( !pfnymInstanceAccepted )
			pfnymInstanceAccepted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInstanceAccepted" );

		UCCCheatManager_execymInstanceAccepted_Parms ymInstanceAccepted_Parms;
		ymInstanceAccepted_Parms.InSessionId = InSessionId;

		this->ProcessEvent( pfnymInstanceAccepted, &ymInstanceAccepted_Parms, NULL );
	};

	void ymInstanceFinished ( int InLobbyId, float InPosX, float InPosY, float InPosZ, int InYaw )
	{
		static UFunction* pfnymInstanceFinished = NULL;

		if ( !pfnymInstanceFinished )
			pfnymInstanceFinished = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInstanceFinished" );

		UCCCheatManager_execymInstanceFinished_Parms ymInstanceFinished_Parms;
		ymInstanceFinished_Parms.InLobbyId = InLobbyId;
		ymInstanceFinished_Parms.InPosX = InPosX;
		ymInstanceFinished_Parms.InPosY = InPosY;
		ymInstanceFinished_Parms.InPosZ = InPosZ;
		ymInstanceFinished_Parms.InYaw = InYaw;

		this->ProcessEvent( pfnymInstanceFinished, &ymInstanceFinished_Parms, NULL );
	};

	void ymInstanceExpired ( int InSessionId )
	{
		static UFunction* pfnymInstanceExpired = NULL;

		if ( !pfnymInstanceExpired )
			pfnymInstanceExpired = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInstanceExpired" );

		UCCCheatManager_execymInstanceExpired_Parms ymInstanceExpired_Parms;
		ymInstanceExpired_Parms.InSessionId = InSessionId;

		this->ProcessEvent( pfnymInstanceExpired, &ymInstanceExpired_Parms, NULL );
	};

	void ymInstanceStarted ( int InSessionId, struct FConnectionData InConnectionData, int InTeam )
	{
		static UFunction* pfnymInstanceStarted = NULL;

		if ( !pfnymInstanceStarted )
			pfnymInstanceStarted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInstanceStarted" );

		UCCCheatManager_execymInstanceStarted_Parms ymInstanceStarted_Parms;
		ymInstanceStarted_Parms.InSessionId = InSessionId;
		memcpy( &ymInstanceStarted_Parms.InConnectionData, &InConnectionData, 0x10 );
		ymInstanceStarted_Parms.InTeam = InTeam;

		this->ProcessEvent( pfnymInstanceStarted, &ymInstanceStarted_Parms, NULL );
	};

	void ymClanLeaderJoinedInstanceSession ( int InInstanceId, int InSessionId )
	{
		static UFunction* pfnymClanLeaderJoinedInstanceSession = NULL;

		if ( !pfnymClanLeaderJoinedInstanceSession )
			pfnymClanLeaderJoinedInstanceSession = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymClanLeaderJoinedInstanceSession" );

		UCCCheatManager_execymClanLeaderJoinedInstanceSession_Parms ymClanLeaderJoinedInstanceSession_Parms;
		ymClanLeaderJoinedInstanceSession_Parms.InInstanceId = InInstanceId;
		ymClanLeaderJoinedInstanceSession_Parms.InSessionId = InSessionId;

		this->ProcessEvent( pfnymClanLeaderJoinedInstanceSession, &ymClanLeaderJoinedInstanceSession_Parms, NULL );
	};

	void ymGroupLeaderCanceledInstanceSession ( int InSessionId )
	{
		static UFunction* pfnymGroupLeaderCanceledInstanceSession = NULL;

		if ( !pfnymGroupLeaderCanceledInstanceSession )
			pfnymGroupLeaderCanceledInstanceSession = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGroupLeaderCanceledInstanceSession" );

		UCCCheatManager_execymGroupLeaderCanceledInstanceSession_Parms ymGroupLeaderCanceledInstanceSession_Parms;
		ymGroupLeaderCanceledInstanceSession_Parms.InSessionId = InSessionId;

		this->ProcessEvent( pfnymGroupLeaderCanceledInstanceSession, &ymGroupLeaderCanceledInstanceSession_Parms, NULL );
	};

	void ymGroupLeaderJoinedInstanceSession ( int InInstanceId, int InSessionId )
	{
		static UFunction* pfnymGroupLeaderJoinedInstanceSession = NULL;

		if ( !pfnymGroupLeaderJoinedInstanceSession )
			pfnymGroupLeaderJoinedInstanceSession = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGroupLeaderJoinedInstanceSession" );

		UCCCheatManager_execymGroupLeaderJoinedInstanceSession_Parms ymGroupLeaderJoinedInstanceSession_Parms;
		ymGroupLeaderJoinedInstanceSession_Parms.InInstanceId = InInstanceId;
		ymGroupLeaderJoinedInstanceSession_Parms.InSessionId = InSessionId;

		this->ProcessEvent( pfnymGroupLeaderJoinedInstanceSession, &ymGroupLeaderJoinedInstanceSession_Parms, NULL );
	};

	void ymJoinInstanceSessionForSmbFailed ( unsigned char InReturnState )
	{
		static UFunction* pfnymJoinInstanceSessionForSmbFailed = NULL;

		if ( !pfnymJoinInstanceSessionForSmbFailed )
			pfnymJoinInstanceSessionForSmbFailed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymJoinInstanceSessionForSmbFailed" );

		UCCCheatManager_execymJoinInstanceSessionForSmbFailed_Parms ymJoinInstanceSessionForSmbFailed_Parms;
		ymJoinInstanceSessionForSmbFailed_Parms.InReturnState = InReturnState;

		this->ProcessEvent( pfnymJoinInstanceSessionForSmbFailed, &ymJoinInstanceSessionForSmbFailed_Parms, NULL );
	};

	void ymInstanceSessionForSmbJoined ( int InInstanceId, int InSessionId, unsigned long InSameTeam )
	{
		static UFunction* pfnymInstanceSessionForSmbJoined = NULL;

		if ( !pfnymInstanceSessionForSmbJoined )
			pfnymInstanceSessionForSmbJoined = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInstanceSessionForSmbJoined" );

		UCCCheatManager_execymInstanceSessionForSmbJoined_Parms ymInstanceSessionForSmbJoined_Parms;
		ymInstanceSessionForSmbJoined_Parms.InInstanceId = InInstanceId;
		ymInstanceSessionForSmbJoined_Parms.InSessionId = InSessionId;
		ymInstanceSessionForSmbJoined_Parms.InSameTeam = InSameTeam;

		this->ProcessEvent( pfnymInstanceSessionForSmbJoined, &ymInstanceSessionForSmbJoined_Parms, NULL );
	};

	void ymJoinInstanceSessionForSmb ( int InCharacterId )
	{
		static UFunction* pfnymJoinInstanceSessionForSmb = NULL;

		if ( !pfnymJoinInstanceSessionForSmb )
			pfnymJoinInstanceSessionForSmb = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymJoinInstanceSessionForSmb" );

		UCCCheatManager_execymJoinInstanceSessionForSmb_Parms ymJoinInstanceSessionForSmb_Parms;
		ymJoinInstanceSessionForSmb_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymJoinInstanceSessionForSmb, &ymJoinInstanceSessionForSmb_Parms, NULL );
	};

	void ymJoinInstanceSessionFailed ( unsigned char InReturnState )
	{
		static UFunction* pfnymJoinInstanceSessionFailed = NULL;

		if ( !pfnymJoinInstanceSessionFailed )
			pfnymJoinInstanceSessionFailed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymJoinInstanceSessionFailed" );

		UCCCheatManager_execymJoinInstanceSessionFailed_Parms ymJoinInstanceSessionFailed_Parms;
		ymJoinInstanceSessionFailed_Parms.InReturnState = InReturnState;

		this->ProcessEvent( pfnymJoinInstanceSessionFailed, &ymJoinInstanceSessionFailed_Parms, NULL );
	};

	void ymInstanceSessionJoined ( int InInstanceId, int InSessionId, unsigned long InIsQuickPlay )
	{
		static UFunction* pfnymInstanceSessionJoined = NULL;

		if ( !pfnymInstanceSessionJoined )
			pfnymInstanceSessionJoined = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInstanceSessionJoined" );

		UCCCheatManager_execymInstanceSessionJoined_Parms ymInstanceSessionJoined_Parms;
		ymInstanceSessionJoined_Parms.InInstanceId = InInstanceId;
		ymInstanceSessionJoined_Parms.InSessionId = InSessionId;
		ymInstanceSessionJoined_Parms.InIsQuickPlay = InIsQuickPlay;

		this->ProcessEvent( pfnymInstanceSessionJoined, &ymInstanceSessionJoined_Parms, NULL );
	};

	void ymJoinInstanceSession ( int InInstanceId, int InSessionId )
	{
		static UFunction* pfnymJoinInstanceSession = NULL;

		if ( !pfnymJoinInstanceSession )
			pfnymJoinInstanceSession = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymJoinInstanceSession" );

		UCCCheatManager_execymJoinInstanceSession_Parms ymJoinInstanceSession_Parms;
		ymJoinInstanceSession_Parms.InInstanceId = InInstanceId;
		ymJoinInstanceSession_Parms.InSessionId = InSessionId;

		this->ProcessEvent( pfnymJoinInstanceSession, &ymJoinInstanceSession_Parms, NULL );
	};

	void ymAutoJoinInstance ( int InInstanceId, int InSessionId )
	{
		static UFunction* pfnymAutoJoinInstance = NULL;

		if ( !pfnymAutoJoinInstance )
			pfnymAutoJoinInstance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAutoJoinInstance" );

		UCCCheatManager_execymAutoJoinInstance_Parms ymAutoJoinInstance_Parms;
		ymAutoJoinInstance_Parms.InInstanceId = InInstanceId;
		ymAutoJoinInstance_Parms.InSessionId = InSessionId;

		this->ProcessEvent( pfnymAutoJoinInstance, &ymAutoJoinInstance_Parms, NULL );
	};

	void ymInstancesForAutoJoin ( TArray< struct FInstanceSessionDescription > InInstances )
	{
		static UFunction* pfnymInstancesForAutoJoin = NULL;

		if ( !pfnymInstancesForAutoJoin )
			pfnymInstancesForAutoJoin = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInstancesForAutoJoin" );

		UCCCheatManager_execymInstancesForAutoJoin_Parms ymInstancesForAutoJoin_Parms;
		memcpy( &ymInstancesForAutoJoin_Parms.InInstances, &InInstances, 0xC );

		this->ProcessEvent( pfnymInstancesForAutoJoin, &ymInstancesForAutoJoin_Parms, NULL );
	};

	void ymInstanceForQuickPlay ( int InInstanceId )
	{
		static UFunction* pfnymInstanceForQuickPlay = NULL;

		if ( !pfnymInstanceForQuickPlay )
			pfnymInstanceForQuickPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInstanceForQuickPlay" );

		UCCCheatManager_execymInstanceForQuickPlay_Parms ymInstanceForQuickPlay_Parms;
		ymInstanceForQuickPlay_Parms.InInstanceId = InInstanceId;

		this->ProcessEvent( pfnymInstanceForQuickPlay, &ymInstanceForQuickPlay_Parms, NULL );
	};

	void ymNotifyPlayerInstanceAutoJoinSettings ( unsigned long InEnabled, unsigned long InOnlyStartup, TArray< int > InInstances )
	{
		static UFunction* pfnymNotifyPlayerInstanceAutoJoinSettings = NULL;

		if ( !pfnymNotifyPlayerInstanceAutoJoinSettings )
			pfnymNotifyPlayerInstanceAutoJoinSettings = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyPlayerInstanceAutoJoinSettings" );

		UCCCheatManager_execymNotifyPlayerInstanceAutoJoinSettings_Parms ymNotifyPlayerInstanceAutoJoinSettings_Parms;
		ymNotifyPlayerInstanceAutoJoinSettings_Parms.InEnabled = InEnabled;
		ymNotifyPlayerInstanceAutoJoinSettings_Parms.InOnlyStartup = InOnlyStartup;
		ymNotifyPlayerInstanceAutoJoinSettings_Parms.InInstances = InInstances;

		this->ProcessEvent( pfnymNotifyPlayerInstanceAutoJoinSettings, &ymNotifyPlayerInstanceAutoJoinSettings_Parms, NULL );
	};

	void ymEnableInstanceAutoJoin ( unsigned long InEnabled, unsigned long InOnlyStartup, TArray< int > InInstances )
	{
		static UFunction* pfnymEnableInstanceAutoJoin = NULL;

		if ( !pfnymEnableInstanceAutoJoin )
			pfnymEnableInstanceAutoJoin = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymEnableInstanceAutoJoin" );

		UCCCheatManager_execymEnableInstanceAutoJoin_Parms ymEnableInstanceAutoJoin_Parms;
		ymEnableInstanceAutoJoin_Parms.InEnabled = InEnabled;
		ymEnableInstanceAutoJoin_Parms.InOnlyStartup = InOnlyStartup;
		ymEnableInstanceAutoJoin_Parms.InInstances = InInstances;

		this->ProcessEvent( pfnymEnableInstanceAutoJoin, &ymEnableInstanceAutoJoin_Parms, NULL );
	};

	void ymUpdateInstanceSession ( struct FInstanceSessionDescription InInstanceSession )
	{
		static UFunction* pfnymUpdateInstanceSession = NULL;

		if ( !pfnymUpdateInstanceSession )
			pfnymUpdateInstanceSession = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateInstanceSession" );

		UCCCheatManager_execymUpdateInstanceSession_Parms ymUpdateInstanceSession_Parms;
		memcpy( &ymUpdateInstanceSession_Parms.InInstanceSession, &InInstanceSession, 0x1C );

		this->ProcessEvent( pfnymUpdateInstanceSession, &ymUpdateInstanceSession_Parms, NULL );
	};

	void ymChangeGroupLeaderFailed ()
	{
		static UFunction* pfnymChangeGroupLeaderFailed = NULL;

		if ( !pfnymChangeGroupLeaderFailed )
			pfnymChangeGroupLeaderFailed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymChangeGroupLeaderFailed" );

		UCCCheatManager_execymChangeGroupLeaderFailed_Parms ymChangeGroupLeaderFailed_Parms;

		this->ProcessEvent( pfnymChangeGroupLeaderFailed, &ymChangeGroupLeaderFailed_Parms, NULL );
	};

	void ymGroupLeaderChanged ( int InCharacterId )
	{
		static UFunction* pfnymGroupLeaderChanged = NULL;

		if ( !pfnymGroupLeaderChanged )
			pfnymGroupLeaderChanged = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGroupLeaderChanged" );

		UCCCheatManager_execymGroupLeaderChanged_Parms ymGroupLeaderChanged_Parms;
		ymGroupLeaderChanged_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymGroupLeaderChanged, &ymGroupLeaderChanged_Parms, NULL );
	};

	void ymChangeGroupLeader ( int InCharacterId )
	{
		static UFunction* pfnymChangeGroupLeader = NULL;

		if ( !pfnymChangeGroupLeader )
			pfnymChangeGroupLeader = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymChangeGroupLeader" );

		UCCCheatManager_execymChangeGroupLeader_Parms ymChangeGroupLeader_Parms;
		ymChangeGroupLeader_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymChangeGroupLeader, &ymChangeGroupLeader_Parms, NULL );
	};

	void ymCharacterKickedFromGroup ( int InCharacterId )
	{
		static UFunction* pfnymCharacterKickedFromGroup = NULL;

		if ( !pfnymCharacterKickedFromGroup )
			pfnymCharacterKickedFromGroup = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCharacterKickedFromGroup" );

		UCCCheatManager_execymCharacterKickedFromGroup_Parms ymCharacterKickedFromGroup_Parms;
		ymCharacterKickedFromGroup_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymCharacterKickedFromGroup, &ymCharacterKickedFromGroup_Parms, NULL );
	};

	void ymCharacterLeftGroup ( int InCharacterId )
	{
		static UFunction* pfnymCharacterLeftGroup = NULL;

		if ( !pfnymCharacterLeftGroup )
			pfnymCharacterLeftGroup = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCharacterLeftGroup" );

		UCCCheatManager_execymCharacterLeftGroup_Parms ymCharacterLeftGroup_Parms;
		ymCharacterLeftGroup_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymCharacterLeftGroup, &ymCharacterLeftGroup_Parms, NULL );
	};

	void ymCharacterEnteredGroup ( int InCharacterId, struct FString InCharacterName )
	{
		static UFunction* pfnymCharacterEnteredGroup = NULL;

		if ( !pfnymCharacterEnteredGroup )
			pfnymCharacterEnteredGroup = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCharacterEnteredGroup" );

		UCCCheatManager_execymCharacterEnteredGroup_Parms ymCharacterEnteredGroup_Parms;
		ymCharacterEnteredGroup_Parms.InCharacterId = InCharacterId;
		memcpy( &ymCharacterEnteredGroup_Parms.InCharacterName, &InCharacterName, 0xC );

		this->ProcessEvent( pfnymCharacterEnteredGroup, &ymCharacterEnteredGroup_Parms, NULL );
	};

	void ymKickMemberFailed ()
	{
		static UFunction* pfnymKickMemberFailed = NULL;

		if ( !pfnymKickMemberFailed )
			pfnymKickMemberFailed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymKickMemberFailed" );

		UCCCheatManager_execymKickMemberFailed_Parms ymKickMemberFailed_Parms;

		this->ProcessEvent( pfnymKickMemberFailed, &ymKickMemberFailed_Parms, NULL );
	};

	void ymMemberKicked ()
	{
		static UFunction* pfnymMemberKicked = NULL;

		if ( !pfnymMemberKicked )
			pfnymMemberKicked = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymMemberKicked" );

		UCCCheatManager_execymMemberKicked_Parms ymMemberKicked_Parms;

		this->ProcessEvent( pfnymMemberKicked, &ymMemberKicked_Parms, NULL );
	};

	void ymKickMember ( int InCharacterId )
	{
		static UFunction* pfnymKickMember = NULL;

		if ( !pfnymKickMember )
			pfnymKickMember = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymKickMember" );

		UCCCheatManager_execymKickMember_Parms ymKickMember_Parms;
		ymKickMember_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymKickMember, &ymKickMember_Parms, NULL );
	};

	void ymLeaveGroupFailed ()
	{
		static UFunction* pfnymLeaveGroupFailed = NULL;

		if ( !pfnymLeaveGroupFailed )
			pfnymLeaveGroupFailed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLeaveGroupFailed" );

		UCCCheatManager_execymLeaveGroupFailed_Parms ymLeaveGroupFailed_Parms;

		this->ProcessEvent( pfnymLeaveGroupFailed, &ymLeaveGroupFailed_Parms, NULL );
	};

	void ymGroupLeft ()
	{
		static UFunction* pfnymGroupLeft = NULL;

		if ( !pfnymGroupLeft )
			pfnymGroupLeft = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGroupLeft" );

		UCCCheatManager_execymGroupLeft_Parms ymGroupLeft_Parms;

		this->ProcessEvent( pfnymGroupLeft, &ymGroupLeft_Parms, NULL );
	};

	void ymLeaveGroup ()
	{
		static UFunction* pfnymLeaveGroup = NULL;

		if ( !pfnymLeaveGroup )
			pfnymLeaveGroup = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLeaveGroup" );

		UCCCheatManager_execymLeaveGroup_Parms ymLeaveGroup_Parms;

		this->ProcessEvent( pfnymLeaveGroup, &ymLeaveGroup_Parms, NULL );
	};

	void ymEnterGroupFailed ()
	{
		static UFunction* pfnymEnterGroupFailed = NULL;

		if ( !pfnymEnterGroupFailed )
			pfnymEnterGroupFailed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymEnterGroupFailed" );

		UCCCheatManager_execymEnterGroupFailed_Parms ymEnterGroupFailed_Parms;

		this->ProcessEvent( pfnymEnterGroupFailed, &ymEnterGroupFailed_Parms, NULL );
	};

	void ymGroupEntered ()
	{
		static UFunction* pfnymGroupEntered = NULL;

		if ( !pfnymGroupEntered )
			pfnymGroupEntered = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGroupEntered" );

		UCCCheatManager_execymGroupEntered_Parms ymGroupEntered_Parms;

		this->ProcessEvent( pfnymGroupEntered, &ymGroupEntered_Parms, NULL );
	};

	void ymEnterGroup ( int InInvitationId )
	{
		static UFunction* pfnymEnterGroup = NULL;

		if ( !pfnymEnterGroup )
			pfnymEnterGroup = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymEnterGroup" );

		UCCCheatManager_execymEnterGroup_Parms ymEnterGroup_Parms;
		ymEnterGroup_Parms.InInvitationId = InInvitationId;

		this->ProcessEvent( pfnymEnterGroup, &ymEnterGroup_Parms, NULL );
	};

	void ymGroupInvitationRejected ( int InInvitationId )
	{
		static UFunction* pfnymGroupInvitationRejected = NULL;

		if ( !pfnymGroupInvitationRejected )
			pfnymGroupInvitationRejected = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGroupInvitationRejected" );

		UCCCheatManager_execymGroupInvitationRejected_Parms ymGroupInvitationRejected_Parms;
		ymGroupInvitationRejected_Parms.InInvitationId = InInvitationId;

		this->ProcessEvent( pfnymGroupInvitationRejected, &ymGroupInvitationRejected_Parms, NULL );
	};

	void ymRejectGroupInvitation ( int InInvitationId )
	{
		static UFunction* pfnymRejectGroupInvitation = NULL;

		if ( !pfnymRejectGroupInvitation )
			pfnymRejectGroupInvitation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRejectGroupInvitation" );

		UCCCheatManager_execymRejectGroupInvitation_Parms ymRejectGroupInvitation_Parms;
		ymRejectGroupInvitation_Parms.InInvitationId = InInvitationId;

		this->ProcessEvent( pfnymRejectGroupInvitation, &ymRejectGroupInvitation_Parms, NULL );
	};

	void ymGroupInvitationExpired ( int InInvitationId )
	{
		static UFunction* pfnymGroupInvitationExpired = NULL;

		if ( !pfnymGroupInvitationExpired )
			pfnymGroupInvitationExpired = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGroupInvitationExpired" );

		UCCCheatManager_execymGroupInvitationExpired_Parms ymGroupInvitationExpired_Parms;
		ymGroupInvitationExpired_Parms.InInvitationId = InInvitationId;

		this->ProcessEvent( pfnymGroupInvitationExpired, &ymGroupInvitationExpired_Parms, NULL );
	};

	void ymGroupInvitationRecieved ( int InInvitationId, int InCharacterId, struct FString InCharacterName )
	{
		static UFunction* pfnymGroupInvitationRecieved = NULL;

		if ( !pfnymGroupInvitationRecieved )
			pfnymGroupInvitationRecieved = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGroupInvitationRecieved" );

		UCCCheatManager_execymGroupInvitationRecieved_Parms ymGroupInvitationRecieved_Parms;
		ymGroupInvitationRecieved_Parms.InInvitationId = InInvitationId;
		ymGroupInvitationRecieved_Parms.InCharacterId = InCharacterId;
		memcpy( &ymGroupInvitationRecieved_Parms.InCharacterName, &InCharacterName, 0xC );

		this->ProcessEvent( pfnymGroupInvitationRecieved, &ymGroupInvitationRecieved_Parms, NULL );
	};

	void ymSendGroupInvitationFailed ( unsigned char InResult )
	{
		static UFunction* pfnymSendGroupInvitationFailed = NULL;

		if ( !pfnymSendGroupInvitationFailed )
			pfnymSendGroupInvitationFailed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSendGroupInvitationFailed" );

		UCCCheatManager_execymSendGroupInvitationFailed_Parms ymSendGroupInvitationFailed_Parms;
		ymSendGroupInvitationFailed_Parms.InResult = InResult;

		this->ProcessEvent( pfnymSendGroupInvitationFailed, &ymSendGroupInvitationFailed_Parms, NULL );
	};

	void ymGroupInvitationSent ( int InCharacterId, int InInvitationId )
	{
		static UFunction* pfnymGroupInvitationSent = NULL;

		if ( !pfnymGroupInvitationSent )
			pfnymGroupInvitationSent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGroupInvitationSent" );

		UCCCheatManager_execymGroupInvitationSent_Parms ymGroupInvitationSent_Parms;
		ymGroupInvitationSent_Parms.InCharacterId = InCharacterId;
		ymGroupInvitationSent_Parms.InInvitationId = InInvitationId;

		this->ProcessEvent( pfnymGroupInvitationSent, &ymGroupInvitationSent_Parms, NULL );
	};

	void ymSendGroupInvitationEx ( struct FString InCharacterName )
	{
		static UFunction* pfnymSendGroupInvitationEx = NULL;

		if ( !pfnymSendGroupInvitationEx )
			pfnymSendGroupInvitationEx = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSendGroupInvitationEx" );

		UCCCheatManager_execymSendGroupInvitationEx_Parms ymSendGroupInvitationEx_Parms;
		memcpy( &ymSendGroupInvitationEx_Parms.InCharacterName, &InCharacterName, 0xC );

		this->ProcessEvent( pfnymSendGroupInvitationEx, &ymSendGroupInvitationEx_Parms, NULL );
	};

	void ymSendGroupInvitation ( int InCharacterId )
	{
		static UFunction* pfnymSendGroupInvitation = NULL;

		if ( !pfnymSendGroupInvitation )
			pfnymSendGroupInvitation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSendGroupInvitation" );

		UCCCheatManager_execymSendGroupInvitation_Parms ymSendGroupInvitation_Parms;
		ymSendGroupInvitation_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymSendGroupInvitation, &ymSendGroupInvitation_Parms, NULL );
	};

	void ymGroupInfo ( TArray< struct FGroupMemberInfo > InMembers )
	{
		static UFunction* pfnymGroupInfo = NULL;

		if ( !pfnymGroupInfo )
			pfnymGroupInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGroupInfo" );

		UCCCheatManager_execymGroupInfo_Parms ymGroupInfo_Parms;
		memcpy( &ymGroupInfo_Parms.InMembers, &InMembers, 0xC );

		this->ProcessEvent( pfnymGroupInfo, &ymGroupInfo_Parms, NULL );
	};

	void ymRequestCharacterStats ( struct FString InCharacterName )
	{
		static UFunction* pfnymRequestCharacterStats = NULL;

		if ( !pfnymRequestCharacterStats )
			pfnymRequestCharacterStats = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestCharacterStats" );

		UCCCheatManager_execymRequestCharacterStats_Parms ymRequestCharacterStats_Parms;
		memcpy( &ymRequestCharacterStats_Parms.InCharacterName, &InCharacterName, 0xC );

		this->ProcessEvent( pfnymRequestCharacterStats, &ymRequestCharacterStats_Parms, NULL );
	};

	void ymCallCharacter ( struct FString InCharacterName )
	{
		static UFunction* pfnymCallCharacter = NULL;

		if ( !pfnymCallCharacter )
			pfnymCallCharacter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCallCharacter" );

		UCCCheatManager_execymCallCharacter_Parms ymCallCharacter_Parms;
		memcpy( &ymCallCharacter_Parms.InCharacterName, &InCharacterName, 0xC );

		this->ProcessEvent( pfnymCallCharacter, &ymCallCharacter_Parms, NULL );
	};

	void ymRequestCharacterInfo ( struct FString InCharacterName )
	{
		static UFunction* pfnymRequestCharacterInfo = NULL;

		if ( !pfnymRequestCharacterInfo )
			pfnymRequestCharacterInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestCharacterInfo" );

		UCCCheatManager_execymRequestCharacterInfo_Parms ymRequestCharacterInfo_Parms;
		memcpy( &ymRequestCharacterInfo_Parms.InCharacterName, &InCharacterName, 0xC );

		this->ProcessEvent( pfnymRequestCharacterInfo, &ymRequestCharacterInfo_Parms, NULL );
	};

	void ymRequestCharacterLocation ( struct FString InCharacterName )
	{
		static UFunction* pfnymRequestCharacterLocation = NULL;

		if ( !pfnymRequestCharacterLocation )
			pfnymRequestCharacterLocation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestCharacterLocation" );

		UCCCheatManager_execymRequestCharacterLocation_Parms ymRequestCharacterLocation_Parms;
		memcpy( &ymRequestCharacterLocation_Parms.InCharacterName, &InCharacterName, 0xC );

		this->ProcessEvent( pfnymRequestCharacterLocation, &ymRequestCharacterLocation_Parms, NULL );
	};

	void ymSystemOpMessage ( struct FString InCharacterName, struct FString InMessageText )
	{
		static UFunction* pfnymSystemOpMessage = NULL;

		if ( !pfnymSystemOpMessage )
			pfnymSystemOpMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSystemOpMessage" );

		UCCCheatManager_execymSystemOpMessage_Parms ymSystemOpMessage_Parms;
		memcpy( &ymSystemOpMessage_Parms.InCharacterName, &InCharacterName, 0xC );
		memcpy( &ymSystemOpMessage_Parms.InMessageText, &InMessageText, 0xC );

		this->ProcessEvent( pfnymSystemOpMessage, &ymSystemOpMessage_Parms, NULL );
	};

	void ymSetLevelToCharacter ( unsigned char InLevel )
	{
		static UFunction* pfnymSetLevelToCharacter = NULL;

		if ( !pfnymSetLevelToCharacter )
			pfnymSetLevelToCharacter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSetLevelToCharacter" );

		UCCCheatManager_execymSetLevelToCharacter_Parms ymSetLevelToCharacter_Parms;
		ymSetLevelToCharacter_Parms.InLevel = InLevel;

		this->ProcessEvent( pfnymSetLevelToCharacter, &ymSetLevelToCharacter_Parms, NULL );
	};

	void ymMuteMessage ( struct FString InCharacterName, int InChatChannelId, int InDuration )
	{
		static UFunction* pfnymMuteMessage = NULL;

		if ( !pfnymMuteMessage )
			pfnymMuteMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymMuteMessage" );

		UCCCheatManager_execymMuteMessage_Parms ymMuteMessage_Parms;
		memcpy( &ymMuteMessage_Parms.InCharacterName, &InCharacterName, 0xC );
		ymMuteMessage_Parms.InChatChannelId = InChatChannelId;
		ymMuteMessage_Parms.InDuration = InDuration;

		this->ProcessEvent( pfnymMuteMessage, &ymMuteMessage_Parms, NULL );
	};

	void ymGMHelpRequest ()
	{
		static UFunction* pfnymGMHelpRequest = NULL;

		if ( !pfnymGMHelpRequest )
			pfnymGMHelpRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGMHelpRequest" );

		UCCCheatManager_execymGMHelpRequest_Parms ymGMHelpRequest_Parms;

		this->ProcessEvent( pfnymGMHelpRequest, &ymGMHelpRequest_Parms, NULL );
	};

	void ymKickPlayer ( struct FString InName )
	{
		static UFunction* pfnymKickPlayer = NULL;

		if ( !pfnymKickPlayer )
			pfnymKickPlayer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymKickPlayer" );

		UCCCheatManager_execymKickPlayer_Parms ymKickPlayer_Parms;
		memcpy( &ymKickPlayer_Parms.InName, &InName, 0xC );

		this->ProcessEvent( pfnymKickPlayer, &ymKickPlayer_Parms, NULL );
	};

	void ymKickAll ()
	{
		static UFunction* pfnymKickAll = NULL;

		if ( !pfnymKickAll )
			pfnymKickAll = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymKickAll" );

		UCCCheatManager_execymKickAll_Parms ymKickAll_Parms;

		this->ProcessEvent( pfnymKickAll, &ymKickAll_Parms, NULL );
	};

	void ymSetVisible ()
	{
		static UFunction* pfnymSetVisible = NULL;

		if ( !pfnymSetVisible )
			pfnymSetVisible = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSetVisible" );

		UCCCheatManager_execymSetVisible_Parms ymSetVisible_Parms;

		this->ProcessEvent( pfnymSetVisible, &ymSetVisible_Parms, NULL );
	};

	void ymToggleGod ()
	{
		static UFunction* pfnymToggleGod = NULL;

		if ( !pfnymToggleGod )
			pfnymToggleGod = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymToggleGod" );

		UCCCheatManager_execymToggleGod_Parms ymToggleGod_Parms;

		this->ProcessEvent( pfnymToggleGod, &ymToggleGod_Parms, NULL );
	};

	void ymAddExpToCharacter ( int inAmount )
	{
		static UFunction* pfnymAddExpToCharacter = NULL;

		if ( !pfnymAddExpToCharacter )
			pfnymAddExpToCharacter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAddExpToCharacter" );

		UCCCheatManager_execymAddExpToCharacter_Parms ymAddExpToCharacter_Parms;
		ymAddExpToCharacter_Parms.inAmount = inAmount;

		this->ProcessEvent( pfnymAddExpToCharacter, &ymAddExpToCharacter_Parms, NULL );
	};

	void ymAddCashToCharacter ( int inAmount )
	{
		static UFunction* pfnymAddCashToCharacter = NULL;

		if ( !pfnymAddCashToCharacter )
			pfnymAddCashToCharacter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAddCashToCharacter" );

		UCCCheatManager_execymAddCashToCharacter_Parms ymAddCashToCharacter_Parms;
		ymAddCashToCharacter_Parms.inAmount = inAmount;

		this->ProcessEvent( pfnymAddCashToCharacter, &ymAddCashToCharacter_Parms, NULL );
	};

	void ymAddAPToCharacter ( int inAmount )
	{
		static UFunction* pfnymAddAPToCharacter = NULL;

		if ( !pfnymAddAPToCharacter )
			pfnymAddAPToCharacter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAddAPToCharacter" );

		UCCCheatManager_execymAddAPToCharacter_Parms ymAddAPToCharacter_Parms;
		ymAddAPToCharacter_Parms.inAmount = inAmount;

		this->ProcessEvent( pfnymAddAPToCharacter, &ymAddAPToCharacter_Parms, NULL );
	};

	void ymAddRepToCharacter ( int inAmount )
	{
		static UFunction* pfnymAddRepToCharacter = NULL;

		if ( !pfnymAddRepToCharacter )
			pfnymAddRepToCharacter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAddRepToCharacter" );

		UCCCheatManager_execymAddRepToCharacter_Parms ymAddRepToCharacter_Parms;
		ymAddRepToCharacter_Parms.inAmount = inAmount;

		this->ProcessEvent( pfnymAddRepToCharacter, &ymAddRepToCharacter_Parms, NULL );
	};

	void ymSetSpeedFactor ( float InFactor )
	{
		static UFunction* pfnymSetSpeedFactor = NULL;

		if ( !pfnymSetSpeedFactor )
			pfnymSetSpeedFactor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSetSpeedFactor" );

		UCCCheatManager_execymSetSpeedFactor_Parms ymSetSpeedFactor_Parms;
		ymSetSpeedFactor_Parms.InFactor = InFactor;

		this->ProcessEvent( pfnymSetSpeedFactor, &ymSetSpeedFactor_Parms, NULL );
	};

	void ymCheckFlyMode ()
	{
		static UFunction* pfnymCheckFlyMode = NULL;

		if ( !pfnymCheckFlyMode )
			pfnymCheckFlyMode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheckFlyMode" );

		UCCCheatManager_execymCheckFlyMode_Parms ymCheckFlyMode_Parms;

		this->ProcessEvent( pfnymCheckFlyMode, &ymCheckFlyMode_Parms, NULL );
	};

	void ymAddItemToCharacter ( struct FString InItemName, int InQuantity )
	{
		static UFunction* pfnymAddItemToCharacter = NULL;

		if ( !pfnymAddItemToCharacter )
			pfnymAddItemToCharacter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAddItemToCharacter" );

		UCCCheatManager_execymAddItemToCharacter_Parms ymAddItemToCharacter_Parms;
		memcpy( &ymAddItemToCharacter_Parms.InItemName, &InItemName, 0xC );
		ymAddItemToCharacter_Parms.InQuantity = InQuantity;

		this->ProcessEvent( pfnymAddItemToCharacter, &ymAddItemToCharacter_Parms, NULL );
	};

	void ymGotoCharacterToCharacter ( struct FString InCharacterName )
	{
		static UFunction* pfnymGotoCharacterToCharacter = NULL;

		if ( !pfnymGotoCharacterToCharacter )
			pfnymGotoCharacterToCharacter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGotoCharacterToCharacter" );

		UCCCheatManager_execymGotoCharacterToCharacter_Parms ymGotoCharacterToCharacter_Parms;
		memcpy( &ymGotoCharacterToCharacter_Parms.InCharacterName, &InCharacterName, 0xC );

		this->ProcessEvent( pfnymGotoCharacterToCharacter, &ymGotoCharacterToCharacter_Parms, NULL );
	};

	void ymGotoCharacterToPosition ( struct FCharacterPosition InCharacterPosition, int InLobbyId )
	{
		static UFunction* pfnymGotoCharacterToPosition = NULL;

		if ( !pfnymGotoCharacterToPosition )
			pfnymGotoCharacterToPosition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGotoCharacterToPosition" );

		UCCCheatManager_execymGotoCharacterToPosition_Parms ymGotoCharacterToPosition_Parms;
		memcpy( &ymGotoCharacterToPosition_Parms.InCharacterPosition, &InCharacterPosition, 0x10 );
		ymGotoCharacterToPosition_Parms.InLobbyId = InLobbyId;

		this->ProcessEvent( pfnymGotoCharacterToPosition, &ymGotoCharacterToPosition_Parms, NULL );
	};

	void ymResponseCharacterStats ( unsigned char InError, struct FResponseCharacterStats_CharacterStatsDesc InCharacterStats )
	{
		static UFunction* pfnymResponseCharacterStats = NULL;

		if ( !pfnymResponseCharacterStats )
			pfnymResponseCharacterStats = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymResponseCharacterStats" );

		UCCCheatManager_execymResponseCharacterStats_Parms ymResponseCharacterStats_Parms;
		ymResponseCharacterStats_Parms.InError = InError;
		memcpy( &ymResponseCharacterStats_Parms.InCharacterStats, &InCharacterStats, 0x20 );

		this->ProcessEvent( pfnymResponseCharacterStats, &ymResponseCharacterStats_Parms, NULL );
	};

	void ymResponseCharacterInfo ( struct FString InAccountLogin, TArray< struct FCharacterInfoShort > InCharacters )
	{
		static UFunction* pfnymResponseCharacterInfo = NULL;

		if ( !pfnymResponseCharacterInfo )
			pfnymResponseCharacterInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymResponseCharacterInfo" );

		UCCCheatManager_execymResponseCharacterInfo_Parms ymResponseCharacterInfo_Parms;
		memcpy( &ymResponseCharacterInfo_Parms.InAccountLogin, &InAccountLogin, 0xC );
		memcpy( &ymResponseCharacterInfo_Parms.InCharacters, &InCharacters, 0xC );

		this->ProcessEvent( pfnymResponseCharacterInfo, &ymResponseCharacterInfo_Parms, NULL );
	};

	void ymResponseCharacterLocation ( unsigned char InError, unsigned char InStatus, int InLocation, struct FCharacterPosition InCharacterPosition )
	{
		static UFunction* pfnymResponseCharacterLocation = NULL;

		if ( !pfnymResponseCharacterLocation )
			pfnymResponseCharacterLocation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymResponseCharacterLocation" );

		UCCCheatManager_execymResponseCharacterLocation_Parms ymResponseCharacterLocation_Parms;
		ymResponseCharacterLocation_Parms.InError = InError;
		ymResponseCharacterLocation_Parms.InStatus = InStatus;
		ymResponseCharacterLocation_Parms.InLocation = InLocation;
		memcpy( &ymResponseCharacterLocation_Parms.InCharacterPosition, &InCharacterPosition, 0x10 );

		this->ProcessEvent( pfnymResponseCharacterLocation, &ymResponseCharacterLocation_Parms, NULL );
	};

	void ymSetLevelToCharacterResult ( unsigned long InAccepted )
	{
		static UFunction* pfnymSetLevelToCharacterResult = NULL;

		if ( !pfnymSetLevelToCharacterResult )
			pfnymSetLevelToCharacterResult = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSetLevelToCharacterResult" );

		UCCCheatManager_execymSetLevelToCharacterResult_Parms ymSetLevelToCharacterResult_Parms;
		ymSetLevelToCharacterResult_Parms.InAccepted = InAccepted;

		this->ProcessEvent( pfnymSetLevelToCharacterResult, &ymSetLevelToCharacterResult_Parms, NULL );
	};

	void ymMuteMessageResponse ( int InCharacterId, int InChatChannelId, int InDuration )
	{
		static UFunction* pfnymMuteMessageResponse = NULL;

		if ( !pfnymMuteMessageResponse )
			pfnymMuteMessageResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymMuteMessageResponse" );

		UCCCheatManager_execymMuteMessageResponse_Parms ymMuteMessageResponse_Parms;
		ymMuteMessageResponse_Parms.InCharacterId = InCharacterId;
		ymMuteMessageResponse_Parms.InChatChannelId = InChatChannelId;
		ymMuteMessageResponse_Parms.InDuration = InDuration;

		this->ProcessEvent( pfnymMuteMessageResponse, &ymMuteMessageResponse_Parms, NULL );
	};

	void ymSetVisibleResult ( unsigned long InVisible )
	{
		static UFunction* pfnymSetVisibleResult = NULL;

		if ( !pfnymSetVisibleResult )
			pfnymSetVisibleResult = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSetVisibleResult" );

		UCCCheatManager_execymSetVisibleResult_Parms ymSetVisibleResult_Parms;
		ymSetVisibleResult_Parms.InVisible = InVisible;

		this->ProcessEvent( pfnymSetVisibleResult, &ymSetVisibleResult_Parms, NULL );
	};

	void ymSetGodMode ( unsigned long InIsGod )
	{
		static UFunction* pfnymSetGodMode = NULL;

		if ( !pfnymSetGodMode )
			pfnymSetGodMode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSetGodMode" );

		UCCCheatManager_execymSetGodMode_Parms ymSetGodMode_Parms;
		ymSetGodMode_Parms.InIsGod = InIsGod;

		this->ProcessEvent( pfnymSetGodMode, &ymSetGodMode_Parms, NULL );
	};

	void ymAddCashToCharacterResult ( unsigned long InAccepted )
	{
		static UFunction* pfnymAddCashToCharacterResult = NULL;

		if ( !pfnymAddCashToCharacterResult )
			pfnymAddCashToCharacterResult = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAddCashToCharacterResult" );

		UCCCheatManager_execymAddCashToCharacterResult_Parms ymAddCashToCharacterResult_Parms;
		ymAddCashToCharacterResult_Parms.InAccepted = InAccepted;

		this->ProcessEvent( pfnymAddCashToCharacterResult, &ymAddCashToCharacterResult_Parms, NULL );
	};

	void ymAddExpToCharacterResult ( unsigned long InAccepted )
	{
		static UFunction* pfnymAddExpToCharacterResult = NULL;

		if ( !pfnymAddExpToCharacterResult )
			pfnymAddExpToCharacterResult = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAddExpToCharacterResult" );

		UCCCheatManager_execymAddExpToCharacterResult_Parms ymAddExpToCharacterResult_Parms;
		ymAddExpToCharacterResult_Parms.InAccepted = InAccepted;

		this->ProcessEvent( pfnymAddExpToCharacterResult, &ymAddExpToCharacterResult_Parms, NULL );
	};

	void ymSetSpeedFactorResult ( float InFactor )
	{
		static UFunction* pfnymSetSpeedFactorResult = NULL;

		if ( !pfnymSetSpeedFactorResult )
			pfnymSetSpeedFactorResult = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSetSpeedFactorResult" );

		UCCCheatManager_execymSetSpeedFactorResult_Parms ymSetSpeedFactorResult_Parms;
		ymSetSpeedFactorResult_Parms.InFactor = InFactor;

		this->ProcessEvent( pfnymSetSpeedFactorResult, &ymSetSpeedFactorResult_Parms, NULL );
	};

	void ymAddAPToCharacterResult ( unsigned long InAccepted )
	{
		static UFunction* pfnymAddAPToCharacterResult = NULL;

		if ( !pfnymAddAPToCharacterResult )
			pfnymAddAPToCharacterResult = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAddAPToCharacterResult" );

		UCCCheatManager_execymAddAPToCharacterResult_Parms ymAddAPToCharacterResult_Parms;
		ymAddAPToCharacterResult_Parms.InAccepted = InAccepted;

		this->ProcessEvent( pfnymAddAPToCharacterResult, &ymAddAPToCharacterResult_Parms, NULL );
	};

	void ymCheckFlyModeResult ( unsigned long InCanFly )
	{
		static UFunction* pfnymCheckFlyModeResult = NULL;

		if ( !pfnymCheckFlyModeResult )
			pfnymCheckFlyModeResult = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheckFlyModeResult" );

		UCCCheatManager_execymCheckFlyModeResult_Parms ymCheckFlyModeResult_Parms;
		ymCheckFlyModeResult_Parms.InCanFly = InCanFly;

		this->ProcessEvent( pfnymCheckFlyModeResult, &ymCheckFlyModeResult_Parms, NULL );
	};

	void ymAddRepToCharacterResult ( unsigned long InAccepted )
	{
		static UFunction* pfnymAddRepToCharacterResult = NULL;

		if ( !pfnymAddRepToCharacterResult )
			pfnymAddRepToCharacterResult = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAddRepToCharacterResult" );

		UCCCheatManager_execymAddRepToCharacterResult_Parms ymAddRepToCharacterResult_Parms;
		ymAddRepToCharacterResult_Parms.InAccepted = InAccepted;

		this->ProcessEvent( pfnymAddRepToCharacterResult, &ymAddRepToCharacterResult_Parms, NULL );
	};

	void ymAddItemToCharacterResult ( unsigned long InAccepted )
	{
		static UFunction* pfnymAddItemToCharacterResult = NULL;

		if ( !pfnymAddItemToCharacterResult )
			pfnymAddItemToCharacterResult = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAddItemToCharacterResult" );

		UCCCheatManager_execymAddItemToCharacterResult_Parms ymAddItemToCharacterResult_Parms;
		ymAddItemToCharacterResult_Parms.InAccepted = InAccepted;

		this->ProcessEvent( pfnymAddItemToCharacterResult, &ymAddItemToCharacterResult_Parms, NULL );
	};

	void ymGMDisbandClanResult ( unsigned long InIsSuccess )
	{
		static UFunction* pfnymGMDisbandClanResult = NULL;

		if ( !pfnymGMDisbandClanResult )
			pfnymGMDisbandClanResult = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGMDisbandClanResult" );

		UCCCheatManager_execymGMDisbandClanResult_Parms ymGMDisbandClanResult_Parms;
		ymGMDisbandClanResult_Parms.InIsSuccess = InIsSuccess;

		this->ProcessEvent( pfnymGMDisbandClanResult, &ymGMDisbandClanResult_Parms, NULL );
	};

	void ymGMDisbandClan ( struct FString InClanName )
	{
		static UFunction* pfnymGMDisbandClan = NULL;

		if ( !pfnymGMDisbandClan )
			pfnymGMDisbandClan = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGMDisbandClan" );

		UCCCheatManager_execymGMDisbandClan_Parms ymGMDisbandClan_Parms;
		memcpy( &ymGMDisbandClan_Parms.InClanName, &InClanName, 0xC );

		this->ProcessEvent( pfnymGMDisbandClan, &ymGMDisbandClan_Parms, NULL );
	};

	void ymPingClientResponseMessage ( int InPingId, struct FString InData )
	{
		static UFunction* pfnymPingClientResponseMessage = NULL;

		if ( !pfnymPingClientResponseMessage )
			pfnymPingClientResponseMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymPingClientResponseMessage" );

		UCCCheatManager_execymPingClientResponseMessage_Parms ymPingClientResponseMessage_Parms;
		ymPingClientResponseMessage_Parms.InPingId = InPingId;
		memcpy( &ymPingClientResponseMessage_Parms.InData, &InData, 0xC );

		this->ProcessEvent( pfnymPingClientResponseMessage, &ymPingClientResponseMessage_Parms, NULL );
	};

	void ymPingClientMessage ( int InPingId, struct FString InData )
	{
		static UFunction* pfnymPingClientMessage = NULL;

		if ( !pfnymPingClientMessage )
			pfnymPingClientMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymPingClientMessage" );

		UCCCheatManager_execymPingClientMessage_Parms ymPingClientMessage_Parms;
		ymPingClientMessage_Parms.InPingId = InPingId;
		memcpy( &ymPingClientMessage_Parms.InData, &InData, 0xC );

		this->ProcessEvent( pfnymPingClientMessage, &ymPingClientMessage_Parms, NULL );
	};

	void ymPingPlayerResponse ( struct FString InIP, int InMinTime, int InMaxTime, int InAvgTime )
	{
		static UFunction* pfnymPingPlayerResponse = NULL;

		if ( !pfnymPingPlayerResponse )
			pfnymPingPlayerResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymPingPlayerResponse" );

		UCCCheatManager_execymPingPlayerResponse_Parms ymPingPlayerResponse_Parms;
		memcpy( &ymPingPlayerResponse_Parms.InIP, &InIP, 0xC );
		ymPingPlayerResponse_Parms.InMinTime = InMinTime;
		ymPingPlayerResponse_Parms.InMaxTime = InMaxTime;
		ymPingPlayerResponse_Parms.InAvgTime = InAvgTime;

		this->ProcessEvent( pfnymPingPlayerResponse, &ymPingPlayerResponse_Parms, NULL );
	};

	void ymPingPlayer ( struct FString InCharacterName )
	{
		static UFunction* pfnymPingPlayer = NULL;

		if ( !pfnymPingPlayer )
			pfnymPingPlayer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymPingPlayer" );

		UCCCheatManager_execymPingPlayer_Parms ymPingPlayer_Parms;
		memcpy( &ymPingPlayer_Parms.InCharacterName, &InCharacterName, 0xC );

		this->ProcessEvent( pfnymPingPlayer, &ymPingPlayer_Parms, NULL );
	};

	void ymAddSkillToCharacterResult ( unsigned long InAccepted )
	{
		static UFunction* pfnymAddSkillToCharacterResult = NULL;

		if ( !pfnymAddSkillToCharacterResult )
			pfnymAddSkillToCharacterResult = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAddSkillToCharacterResult" );

		UCCCheatManager_execymAddSkillToCharacterResult_Parms ymAddSkillToCharacterResult_Parms;
		ymAddSkillToCharacterResult_Parms.InAccepted = InAccepted;

		this->ProcessEvent( pfnymAddSkillToCharacterResult, &ymAddSkillToCharacterResult_Parms, NULL );
	};

	void ymAddSkillToCharacter ( struct FString InSkillName, int InLevel )
	{
		static UFunction* pfnymAddSkillToCharacter = NULL;

		if ( !pfnymAddSkillToCharacter )
			pfnymAddSkillToCharacter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAddSkillToCharacter" );

		UCCCheatManager_execymAddSkillToCharacter_Parms ymAddSkillToCharacter_Parms;
		memcpy( &ymAddSkillToCharacter_Parms.InSkillName, &InSkillName, 0xC );
		ymAddSkillToCharacter_Parms.InLevel = InLevel;

		this->ProcessEvent( pfnymAddSkillToCharacter, &ymAddSkillToCharacter_Parms, NULL );
	};

	void ymMoveCharacterToPosition ( struct FString InCharacterName, struct FCharacterPosition InCharacterPosition, int InLobbyId )
	{
		static UFunction* pfnymMoveCharacterToPosition = NULL;

		if ( !pfnymMoveCharacterToPosition )
			pfnymMoveCharacterToPosition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymMoveCharacterToPosition" );

		UCCCheatManager_execymMoveCharacterToPosition_Parms ymMoveCharacterToPosition_Parms;
		memcpy( &ymMoveCharacterToPosition_Parms.InCharacterName, &InCharacterName, 0xC );
		memcpy( &ymMoveCharacterToPosition_Parms.InCharacterPosition, &InCharacterPosition, 0x10 );
		ymMoveCharacterToPosition_Parms.InLobbyId = InLobbyId;

		this->ProcessEvent( pfnymMoveCharacterToPosition, &ymMoveCharacterToPosition_Parms, NULL );
	};

	void ymResponseWho ( unsigned char InError, TArray< struct FCharacterInfoShort > InCharacters )
	{
		static UFunction* pfnymResponseWho = NULL;

		if ( !pfnymResponseWho )
			pfnymResponseWho = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymResponseWho" );

		UCCCheatManager_execymResponseWho_Parms ymResponseWho_Parms;
		ymResponseWho_Parms.InError = InError;
		memcpy( &ymResponseWho_Parms.InCharacters, &InCharacters, 0xC );

		this->ProcessEvent( pfnymResponseWho, &ymResponseWho_Parms, NULL );
	};

	void ymRequestWho ( unsigned char InZone )
	{
		static UFunction* pfnymRequestWho = NULL;

		if ( !pfnymRequestWho )
			pfnymRequestWho = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestWho" );

		UCCCheatManager_execymRequestWho_Parms ymRequestWho_Parms;
		ymRequestWho_Parms.InZone = InZone;

		this->ProcessEvent( pfnymRequestWho, &ymRequestWho_Parms, NULL );
	};

	void ymGMMessage ( struct FString InMessage )
	{
		static UFunction* pfnymGMMessage = NULL;

		if ( !pfnymGMMessage )
			pfnymGMMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGMMessage" );

		UCCCheatManager_execymGMMessage_Parms ymGMMessage_Parms;
		memcpy( &ymGMMessage_Parms.InMessage, &InMessage, 0xC );

		this->ProcessEvent( pfnymGMMessage, &ymGMMessage_Parms, NULL );
	};

	void ymNotifyRareShopItemsDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyRareShopItemsDataRelevancy = NULL;

		if ( !pfnymNotifyRareShopItemsDataRelevancy )
			pfnymNotifyRareShopItemsDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyRareShopItemsDataRelevancy" );

		UCCCheatManager_execymNotifyRareShopItemsDataRelevancy_Parms ymNotifyRareShopItemsDataRelevancy_Parms;
		ymNotifyRareShopItemsDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyRareShopItemsDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyRareShopItemsDataRelevancy, &ymNotifyRareShopItemsDataRelevancy_Parms, NULL );
	};

	void ymRequestRareShopItemsData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestRareShopItemsData = NULL;

		if ( !pfnymRequestRareShopItemsData )
			pfnymRequestRareShopItemsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestRareShopItemsData" );

		UCCCheatManager_execymRequestRareShopItemsData_Parms ymRequestRareShopItemsData_Parms;
		ymRequestRareShopItemsData_Parms.InSourceId = InSourceId;
		ymRequestRareShopItemsData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestRareShopItemsData, &ymRequestRareShopItemsData_Parms, NULL );
	};

	void ymUpdateRareShopItemsData ( int InSourceId, int InRevision, TArray< struct FRareShopItemDesc > InUpdatedRareShopItems, TArray< int > InDeletedRareShopItems )
	{
		static UFunction* pfnymUpdateRareShopItemsData = NULL;

		if ( !pfnymUpdateRareShopItemsData )
			pfnymUpdateRareShopItemsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateRareShopItemsData" );

		UCCCheatManager_execymUpdateRareShopItemsData_Parms ymUpdateRareShopItemsData_Parms;
		ymUpdateRareShopItemsData_Parms.InSourceId = InSourceId;
		ymUpdateRareShopItemsData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateRareShopItemsData_Parms.InUpdatedRareShopItems, &InUpdatedRareShopItems, 0xC );
		ymUpdateRareShopItemsData_Parms.InDeletedRareShopItems = InDeletedRareShopItems;

		this->ProcessEvent( pfnymUpdateRareShopItemsData, &ymUpdateRareShopItemsData_Parms, NULL );
	};

	void ymInitRareShopItemsData ( int InSourceId, int InRevision, TArray< struct FRareShopItemDesc > InItems )
	{
		static UFunction* pfnymInitRareShopItemsData = NULL;

		if ( !pfnymInitRareShopItemsData )
			pfnymInitRareShopItemsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitRareShopItemsData" );

		UCCCheatManager_execymInitRareShopItemsData_Parms ymInitRareShopItemsData_Parms;
		ymInitRareShopItemsData_Parms.InSourceId = InSourceId;
		ymInitRareShopItemsData_Parms.InRevision = InRevision;
		memcpy( &ymInitRareShopItemsData_Parms.InItems, &InItems, 0xC );

		this->ProcessEvent( pfnymInitRareShopItemsData, &ymInitRareShopItemsData_Parms, NULL );
	};

	void ymNotifyTournamentDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyTournamentDataRelevancy = NULL;

		if ( !pfnymNotifyTournamentDataRelevancy )
			pfnymNotifyTournamentDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyTournamentDataRelevancy" );

		UCCCheatManager_execymNotifyTournamentDataRelevancy_Parms ymNotifyTournamentDataRelevancy_Parms;
		ymNotifyTournamentDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyTournamentDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyTournamentDataRelevancy, &ymNotifyTournamentDataRelevancy_Parms, NULL );
	};

	void ymRequestTournamentData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestTournamentData = NULL;

		if ( !pfnymRequestTournamentData )
			pfnymRequestTournamentData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestTournamentData" );

		UCCCheatManager_execymRequestTournamentData_Parms ymRequestTournamentData_Parms;
		ymRequestTournamentData_Parms.InSourceId = InSourceId;
		ymRequestTournamentData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestTournamentData, &ymRequestTournamentData_Parms, NULL );
	};

	void ymUpdateTournamentData ( int InSourceId, int InRevision, unsigned char InTournamentState, TArray< struct FTeam > InTeamsAdded, TArray< int > InTeamsDeleted, TArray< struct FGame > InGamesUpdated, TArray< int > InBannedPlayersUpdated )
	{
		static UFunction* pfnymUpdateTournamentData = NULL;

		if ( !pfnymUpdateTournamentData )
			pfnymUpdateTournamentData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateTournamentData" );

		UCCCheatManager_execymUpdateTournamentData_Parms ymUpdateTournamentData_Parms;
		ymUpdateTournamentData_Parms.InSourceId = InSourceId;
		ymUpdateTournamentData_Parms.InRevision = InRevision;
		ymUpdateTournamentData_Parms.InTournamentState = InTournamentState;
		memcpy( &ymUpdateTournamentData_Parms.InTeamsAdded, &InTeamsAdded, 0xC );
		ymUpdateTournamentData_Parms.InTeamsDeleted = InTeamsDeleted;
		memcpy( &ymUpdateTournamentData_Parms.InGamesUpdated, &InGamesUpdated, 0xC );
		ymUpdateTournamentData_Parms.InBannedPlayersUpdated = InBannedPlayersUpdated;

		this->ProcessEvent( pfnymUpdateTournamentData, &ymUpdateTournamentData_Parms, NULL );
	};

	void ymInitTournamentData ( int InSourceId, int InRevision, unsigned char InTournamentType, unsigned char InTournamentOrderType, unsigned char InTournamentState, TArray< struct FTeam > InTeams, TArray< struct FGame > InGames, TArray< int > InBannedPlayers )
	{
		static UFunction* pfnymInitTournamentData = NULL;

		if ( !pfnymInitTournamentData )
			pfnymInitTournamentData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitTournamentData" );

		UCCCheatManager_execymInitTournamentData_Parms ymInitTournamentData_Parms;
		ymInitTournamentData_Parms.InSourceId = InSourceId;
		ymInitTournamentData_Parms.InRevision = InRevision;
		ymInitTournamentData_Parms.InTournamentType = InTournamentType;
		ymInitTournamentData_Parms.InTournamentOrderType = InTournamentOrderType;
		ymInitTournamentData_Parms.InTournamentState = InTournamentState;
		memcpy( &ymInitTournamentData_Parms.InTeams, &InTeams, 0xC );
		memcpy( &ymInitTournamentData_Parms.InGames, &InGames, 0xC );
		ymInitTournamentData_Parms.InBannedPlayers = InBannedPlayers;

		this->ProcessEvent( pfnymInitTournamentData, &ymInitTournamentData_Parms, NULL );
	};

	void ymNotifyCharacterCountersDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyCharacterCountersDataRelevancy = NULL;

		if ( !pfnymNotifyCharacterCountersDataRelevancy )
			pfnymNotifyCharacterCountersDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyCharacterCountersDataRelevancy" );

		UCCCheatManager_execymNotifyCharacterCountersDataRelevancy_Parms ymNotifyCharacterCountersDataRelevancy_Parms;
		ymNotifyCharacterCountersDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyCharacterCountersDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyCharacterCountersDataRelevancy, &ymNotifyCharacterCountersDataRelevancy_Parms, NULL );
	};

	void ymRequestCharacterCountersData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestCharacterCountersData = NULL;

		if ( !pfnymRequestCharacterCountersData )
			pfnymRequestCharacterCountersData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestCharacterCountersData" );

		UCCCheatManager_execymRequestCharacterCountersData_Parms ymRequestCharacterCountersData_Parms;
		ymRequestCharacterCountersData_Parms.InSourceId = InSourceId;
		ymRequestCharacterCountersData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestCharacterCountersData, &ymRequestCharacterCountersData_Parms, NULL );
	};

	void ymUpdateCharacterCountersData ( int InSourceId, int InRevision, TArray< struct FCharacterCounter > InUpdatedCounters )
	{
		static UFunction* pfnymUpdateCharacterCountersData = NULL;

		if ( !pfnymUpdateCharacterCountersData )
			pfnymUpdateCharacterCountersData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateCharacterCountersData" );

		UCCCheatManager_execymUpdateCharacterCountersData_Parms ymUpdateCharacterCountersData_Parms;
		ymUpdateCharacterCountersData_Parms.InSourceId = InSourceId;
		ymUpdateCharacterCountersData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateCharacterCountersData_Parms.InUpdatedCounters, &InUpdatedCounters, 0xC );

		this->ProcessEvent( pfnymUpdateCharacterCountersData, &ymUpdateCharacterCountersData_Parms, NULL );
	};

	void ymInitCharacterCountersData ( int InSourceId, int InRevision, TArray< struct FCharacterCounter > InCounters )
	{
		static UFunction* pfnymInitCharacterCountersData = NULL;

		if ( !pfnymInitCharacterCountersData )
			pfnymInitCharacterCountersData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitCharacterCountersData" );

		UCCCheatManager_execymInitCharacterCountersData_Parms ymInitCharacterCountersData_Parms;
		ymInitCharacterCountersData_Parms.InSourceId = InSourceId;
		ymInitCharacterCountersData_Parms.InRevision = InRevision;
		memcpy( &ymInitCharacterCountersData_Parms.InCounters, &InCounters, 0xC );

		this->ProcessEvent( pfnymInitCharacterCountersData, &ymInitCharacterCountersData_Parms, NULL );
	};

	void ymNotifyRealmNPCInfoDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyRealmNPCInfoDataRelevancy = NULL;

		if ( !pfnymNotifyRealmNPCInfoDataRelevancy )
			pfnymNotifyRealmNPCInfoDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyRealmNPCInfoDataRelevancy" );

		UCCCheatManager_execymNotifyRealmNPCInfoDataRelevancy_Parms ymNotifyRealmNPCInfoDataRelevancy_Parms;
		ymNotifyRealmNPCInfoDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyRealmNPCInfoDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyRealmNPCInfoDataRelevancy, &ymNotifyRealmNPCInfoDataRelevancy_Parms, NULL );
	};

	void ymRequestRealmNPCInfoData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestRealmNPCInfoData = NULL;

		if ( !pfnymRequestRealmNPCInfoData )
			pfnymRequestRealmNPCInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestRealmNPCInfoData" );

		UCCCheatManager_execymRequestRealmNPCInfoData_Parms ymRequestRealmNPCInfoData_Parms;
		ymRequestRealmNPCInfoData_Parms.InSourceId = InSourceId;
		ymRequestRealmNPCInfoData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestRealmNPCInfoData, &ymRequestRealmNPCInfoData_Parms, NULL );
	};

	void ymUpdateRealmNPCInfoData ( int InSourceId, int InRevision, struct FString InName, int InVisualKey, TArray< struct FNpcFunctionalityDescription > InFunctionalityList )
	{
		static UFunction* pfnymUpdateRealmNPCInfoData = NULL;

		if ( !pfnymUpdateRealmNPCInfoData )
			pfnymUpdateRealmNPCInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateRealmNPCInfoData" );

		UCCCheatManager_execymUpdateRealmNPCInfoData_Parms ymUpdateRealmNPCInfoData_Parms;
		ymUpdateRealmNPCInfoData_Parms.InSourceId = InSourceId;
		ymUpdateRealmNPCInfoData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateRealmNPCInfoData_Parms.InName, &InName, 0xC );
		ymUpdateRealmNPCInfoData_Parms.InVisualKey = InVisualKey;
		memcpy( &ymUpdateRealmNPCInfoData_Parms.InFunctionalityList, &InFunctionalityList, 0xC );

		this->ProcessEvent( pfnymUpdateRealmNPCInfoData, &ymUpdateRealmNPCInfoData_Parms, NULL );
	};

	void ymInitRealmNPCInfoData ( int InSourceId, int InRevision, struct FString InName, int InVisualKey, TArray< struct FNpcFunctionalityDescription > InFunctionalityList )
	{
		static UFunction* pfnymInitRealmNPCInfoData = NULL;

		if ( !pfnymInitRealmNPCInfoData )
			pfnymInitRealmNPCInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitRealmNPCInfoData" );

		UCCCheatManager_execymInitRealmNPCInfoData_Parms ymInitRealmNPCInfoData_Parms;
		ymInitRealmNPCInfoData_Parms.InSourceId = InSourceId;
		ymInitRealmNPCInfoData_Parms.InRevision = InRevision;
		memcpy( &ymInitRealmNPCInfoData_Parms.InName, &InName, 0xC );
		ymInitRealmNPCInfoData_Parms.InVisualKey = InVisualKey;
		memcpy( &ymInitRealmNPCInfoData_Parms.InFunctionalityList, &InFunctionalityList, 0xC );

		this->ProcessEvent( pfnymInitRealmNPCInfoData, &ymInitRealmNPCInfoData_Parms, NULL );
	};

	void ymNotifyMailBoxDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyMailBoxDataRelevancy = NULL;

		if ( !pfnymNotifyMailBoxDataRelevancy )
			pfnymNotifyMailBoxDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyMailBoxDataRelevancy" );

		UCCCheatManager_execymNotifyMailBoxDataRelevancy_Parms ymNotifyMailBoxDataRelevancy_Parms;
		ymNotifyMailBoxDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyMailBoxDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyMailBoxDataRelevancy, &ymNotifyMailBoxDataRelevancy_Parms, NULL );
	};

	void ymRequestMailBoxData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestMailBoxData = NULL;

		if ( !pfnymRequestMailBoxData )
			pfnymRequestMailBoxData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestMailBoxData" );

		UCCCheatManager_execymRequestMailBoxData_Parms ymRequestMailBoxData_Parms;
		ymRequestMailBoxData_Parms.InSourceId = InSourceId;
		ymRequestMailBoxData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestMailBoxData, &ymRequestMailBoxData_Parms, NULL );
	};

	void ymUpdateMailBoxData ( int InSourceId, int InRevision, TArray< struct FMailDesc > InMailsAdded, TArray< int > InMailsDeleted )
	{
		static UFunction* pfnymUpdateMailBoxData = NULL;

		if ( !pfnymUpdateMailBoxData )
			pfnymUpdateMailBoxData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateMailBoxData" );

		UCCCheatManager_execymUpdateMailBoxData_Parms ymUpdateMailBoxData_Parms;
		ymUpdateMailBoxData_Parms.InSourceId = InSourceId;
		ymUpdateMailBoxData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateMailBoxData_Parms.InMailsAdded, &InMailsAdded, 0xC );
		ymUpdateMailBoxData_Parms.InMailsDeleted = InMailsDeleted;

		this->ProcessEvent( pfnymUpdateMailBoxData, &ymUpdateMailBoxData_Parms, NULL );
	};

	void ymInitMailBoxData ( int InSourceId, int InRevision, TArray< struct FMailDesc > InMails )
	{
		static UFunction* pfnymInitMailBoxData = NULL;

		if ( !pfnymInitMailBoxData )
			pfnymInitMailBoxData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitMailBoxData" );

		UCCCheatManager_execymInitMailBoxData_Parms ymInitMailBoxData_Parms;
		ymInitMailBoxData_Parms.InSourceId = InSourceId;
		ymInitMailBoxData_Parms.InRevision = InRevision;
		memcpy( &ymInitMailBoxData_Parms.InMails, &InMails, 0xC );

		this->ProcessEvent( pfnymInitMailBoxData, &ymInitMailBoxData_Parms, NULL );
	};

	void ymNotifyItemsAttachmentsDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyItemsAttachmentsDataRelevancy = NULL;

		if ( !pfnymNotifyItemsAttachmentsDataRelevancy )
			pfnymNotifyItemsAttachmentsDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyItemsAttachmentsDataRelevancy" );

		UCCCheatManager_execymNotifyItemsAttachmentsDataRelevancy_Parms ymNotifyItemsAttachmentsDataRelevancy_Parms;
		ymNotifyItemsAttachmentsDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyItemsAttachmentsDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyItemsAttachmentsDataRelevancy, &ymNotifyItemsAttachmentsDataRelevancy_Parms, NULL );
	};

	void ymRequestItemsAttachmentsData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestItemsAttachmentsData = NULL;

		if ( !pfnymRequestItemsAttachmentsData )
			pfnymRequestItemsAttachmentsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestItemsAttachmentsData" );

		UCCCheatManager_execymRequestItemsAttachmentsData_Parms ymRequestItemsAttachmentsData_Parms;
		ymRequestItemsAttachmentsData_Parms.InSourceId = InSourceId;
		ymRequestItemsAttachmentsData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestItemsAttachmentsData, &ymRequestItemsAttachmentsData_Parms, NULL );
	};

	void ymUpdateItemsAttachmentsData ( int InSourceId, int InRevision, TArray< struct FItemAttachments > InUpdatedItemsAttachments, TArray< struct FItemAttachmentsDeleted > InDeletedItemsAttachments )
	{
		static UFunction* pfnymUpdateItemsAttachmentsData = NULL;

		if ( !pfnymUpdateItemsAttachmentsData )
			pfnymUpdateItemsAttachmentsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateItemsAttachmentsData" );

		UCCCheatManager_execymUpdateItemsAttachmentsData_Parms ymUpdateItemsAttachmentsData_Parms;
		ymUpdateItemsAttachmentsData_Parms.InSourceId = InSourceId;
		ymUpdateItemsAttachmentsData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateItemsAttachmentsData_Parms.InUpdatedItemsAttachments, &InUpdatedItemsAttachments, 0xC );
		memcpy( &ymUpdateItemsAttachmentsData_Parms.InDeletedItemsAttachments, &InDeletedItemsAttachments, 0xC );

		this->ProcessEvent( pfnymUpdateItemsAttachmentsData, &ymUpdateItemsAttachmentsData_Parms, NULL );
	};

	void ymInitItemsAttachmentsData ( int InSourceId, int InRevision, TArray< struct FItemAttachments > InAttachments )
	{
		static UFunction* pfnymInitItemsAttachmentsData = NULL;

		if ( !pfnymInitItemsAttachmentsData )
			pfnymInitItemsAttachmentsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitItemsAttachmentsData" );

		UCCCheatManager_execymInitItemsAttachmentsData_Parms ymInitItemsAttachmentsData_Parms;
		ymInitItemsAttachmentsData_Parms.InSourceId = InSourceId;
		ymInitItemsAttachmentsData_Parms.InRevision = InRevision;
		memcpy( &ymInitItemsAttachmentsData_Parms.InAttachments, &InAttachments, 0xC );

		this->ProcessEvent( pfnymInitItemsAttachmentsData, &ymInitItemsAttachmentsData_Parms, NULL );
	};

	void ymNotifyItemsAttributesDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyItemsAttributesDataRelevancy = NULL;

		if ( !pfnymNotifyItemsAttributesDataRelevancy )
			pfnymNotifyItemsAttributesDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyItemsAttributesDataRelevancy" );

		UCCCheatManager_execymNotifyItemsAttributesDataRelevancy_Parms ymNotifyItemsAttributesDataRelevancy_Parms;
		ymNotifyItemsAttributesDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyItemsAttributesDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyItemsAttributesDataRelevancy, &ymNotifyItemsAttributesDataRelevancy_Parms, NULL );
	};

	void ymRequestItemsAttributesData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestItemsAttributesData = NULL;

		if ( !pfnymRequestItemsAttributesData )
			pfnymRequestItemsAttributesData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestItemsAttributesData" );

		UCCCheatManager_execymRequestItemsAttributesData_Parms ymRequestItemsAttributesData_Parms;
		ymRequestItemsAttributesData_Parms.InSourceId = InSourceId;
		ymRequestItemsAttributesData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestItemsAttributesData, &ymRequestItemsAttributesData_Parms, NULL );
	};

	void ymUpdateItemsAttributesData ( int InSourceId, int InRevision, TArray< struct FItemAttributes > InUpdatedItemsAttributes, TArray< struct FItemAttributesDeleted > InDeletedItemsAttributes )
	{
		static UFunction* pfnymUpdateItemsAttributesData = NULL;

		if ( !pfnymUpdateItemsAttributesData )
			pfnymUpdateItemsAttributesData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateItemsAttributesData" );

		UCCCheatManager_execymUpdateItemsAttributesData_Parms ymUpdateItemsAttributesData_Parms;
		ymUpdateItemsAttributesData_Parms.InSourceId = InSourceId;
		ymUpdateItemsAttributesData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateItemsAttributesData_Parms.InUpdatedItemsAttributes, &InUpdatedItemsAttributes, 0xC );
		memcpy( &ymUpdateItemsAttributesData_Parms.InDeletedItemsAttributes, &InDeletedItemsAttributes, 0xC );

		this->ProcessEvent( pfnymUpdateItemsAttributesData, &ymUpdateItemsAttributesData_Parms, NULL );
	};

	void ymInitItemsAttributesData ( int InSourceId, int InRevision, TArray< struct FItemAttributes > InAttributes )
	{
		static UFunction* pfnymInitItemsAttributesData = NULL;

		if ( !pfnymInitItemsAttributesData )
			pfnymInitItemsAttributesData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitItemsAttributesData" );

		UCCCheatManager_execymInitItemsAttributesData_Parms ymInitItemsAttributesData_Parms;
		ymInitItemsAttributesData_Parms.InSourceId = InSourceId;
		ymInitItemsAttributesData_Parms.InRevision = InRevision;
		memcpy( &ymInitItemsAttributesData_Parms.InAttributes, &InAttributes, 0xC );

		this->ProcessEvent( pfnymInitItemsAttributesData, &ymInitItemsAttributesData_Parms, NULL );
	};

	void ymNotifyItemsDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyItemsDataRelevancy = NULL;

		if ( !pfnymNotifyItemsDataRelevancy )
			pfnymNotifyItemsDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyItemsDataRelevancy" );

		UCCCheatManager_execymNotifyItemsDataRelevancy_Parms ymNotifyItemsDataRelevancy_Parms;
		ymNotifyItemsDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyItemsDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyItemsDataRelevancy, &ymNotifyItemsDataRelevancy_Parms, NULL );
	};

	void ymRequestItemsData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestItemsData = NULL;

		if ( !pfnymRequestItemsData )
			pfnymRequestItemsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestItemsData" );

		UCCCheatManager_execymRequestItemsData_Parms ymRequestItemsData_Parms;
		ymRequestItemsData_Parms.InSourceId = InSourceId;
		ymRequestItemsData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestItemsData, &ymRequestItemsData_Parms, NULL );
	};

	void ymUpdateItemsData ( int InSourceId, int InRevision, TArray< struct FItemDescr > InUpdatedItems, TArray< int > InDeletedItems )
	{
		static UFunction* pfnymUpdateItemsData = NULL;

		if ( !pfnymUpdateItemsData )
			pfnymUpdateItemsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateItemsData" );

		UCCCheatManager_execymUpdateItemsData_Parms ymUpdateItemsData_Parms;
		ymUpdateItemsData_Parms.InSourceId = InSourceId;
		ymUpdateItemsData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateItemsData_Parms.InUpdatedItems, &InUpdatedItems, 0xC );
		ymUpdateItemsData_Parms.InDeletedItems = InDeletedItems;

		this->ProcessEvent( pfnymUpdateItemsData, &ymUpdateItemsData_Parms, NULL );
	};

	void ymInitItemsData ( int InSourceId, int InRevision, TArray< struct FItemDescr > InItems )
	{
		static UFunction* pfnymInitItemsData = NULL;

		if ( !pfnymInitItemsData )
			pfnymInitItemsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitItemsData" );

		UCCCheatManager_execymInitItemsData_Parms ymInitItemsData_Parms;
		ymInitItemsData_Parms.InSourceId = InSourceId;
		ymInitItemsData_Parms.InRevision = InRevision;
		memcpy( &ymInitItemsData_Parms.InItems, &InItems, 0xC );

		this->ProcessEvent( pfnymInitItemsData, &ymInitItemsData_Parms, NULL );
	};

	void ymNotifyPaperdollDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyPaperdollDataRelevancy = NULL;

		if ( !pfnymNotifyPaperdollDataRelevancy )
			pfnymNotifyPaperdollDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyPaperdollDataRelevancy" );

		UCCCheatManager_execymNotifyPaperdollDataRelevancy_Parms ymNotifyPaperdollDataRelevancy_Parms;
		ymNotifyPaperdollDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyPaperdollDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyPaperdollDataRelevancy, &ymNotifyPaperdollDataRelevancy_Parms, NULL );
	};

	void ymRequestPaperdollData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestPaperdollData = NULL;

		if ( !pfnymRequestPaperdollData )
			pfnymRequestPaperdollData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestPaperdollData" );

		UCCCheatManager_execymRequestPaperdollData_Parms ymRequestPaperdollData_Parms;
		ymRequestPaperdollData_Parms.InSourceId = InSourceId;
		ymRequestPaperdollData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestPaperdollData, &ymRequestPaperdollData_Parms, NULL );
	};

	void ymUpdatePaperdollData ( int InSourceId, int InRevision, int InHatTemplateId, int InHatColor, int InUpperClothTemplateId, int InUpperClothColor, int InLowerClothTemplateId, int InLowerClothColor, int InBootsTemplateId, int InBootsColor )
	{
		static UFunction* pfnymUpdatePaperdollData = NULL;

		if ( !pfnymUpdatePaperdollData )
			pfnymUpdatePaperdollData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdatePaperdollData" );

		UCCCheatManager_execymUpdatePaperdollData_Parms ymUpdatePaperdollData_Parms;
		ymUpdatePaperdollData_Parms.InSourceId = InSourceId;
		ymUpdatePaperdollData_Parms.InRevision = InRevision;
		ymUpdatePaperdollData_Parms.InHatTemplateId = InHatTemplateId;
		ymUpdatePaperdollData_Parms.InHatColor = InHatColor;
		ymUpdatePaperdollData_Parms.InUpperClothTemplateId = InUpperClothTemplateId;
		ymUpdatePaperdollData_Parms.InUpperClothColor = InUpperClothColor;
		ymUpdatePaperdollData_Parms.InLowerClothTemplateId = InLowerClothTemplateId;
		ymUpdatePaperdollData_Parms.InLowerClothColor = InLowerClothColor;
		ymUpdatePaperdollData_Parms.InBootsTemplateId = InBootsTemplateId;
		ymUpdatePaperdollData_Parms.InBootsColor = InBootsColor;

		this->ProcessEvent( pfnymUpdatePaperdollData, &ymUpdatePaperdollData_Parms, NULL );
	};

	void ymInitPaperdollData ( int InSourceId, int InRevision, int InHatTemplateId, int InHatColor, int InUpperClothTemplateId, int InUpperClothColor, int InLowerClothTemplateId, int InLowerClothColor, int InBootsTemplateId, int InBootsColor )
	{
		static UFunction* pfnymInitPaperdollData = NULL;

		if ( !pfnymInitPaperdollData )
			pfnymInitPaperdollData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitPaperdollData" );

		UCCCheatManager_execymInitPaperdollData_Parms ymInitPaperdollData_Parms;
		ymInitPaperdollData_Parms.InSourceId = InSourceId;
		ymInitPaperdollData_Parms.InRevision = InRevision;
		ymInitPaperdollData_Parms.InHatTemplateId = InHatTemplateId;
		ymInitPaperdollData_Parms.InHatColor = InHatColor;
		ymInitPaperdollData_Parms.InUpperClothTemplateId = InUpperClothTemplateId;
		ymInitPaperdollData_Parms.InUpperClothColor = InUpperClothColor;
		ymInitPaperdollData_Parms.InLowerClothTemplateId = InLowerClothTemplateId;
		ymInitPaperdollData_Parms.InLowerClothColor = InLowerClothColor;
		ymInitPaperdollData_Parms.InBootsTemplateId = InBootsTemplateId;
		ymInitPaperdollData_Parms.InBootsColor = InBootsColor;

		this->ProcessEvent( pfnymInitPaperdollData, &ymInitPaperdollData_Parms, NULL );
	};

	void ymNotifyInstanceSessionsDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyInstanceSessionsDataRelevancy = NULL;

		if ( !pfnymNotifyInstanceSessionsDataRelevancy )
			pfnymNotifyInstanceSessionsDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyInstanceSessionsDataRelevancy" );

		UCCCheatManager_execymNotifyInstanceSessionsDataRelevancy_Parms ymNotifyInstanceSessionsDataRelevancy_Parms;
		ymNotifyInstanceSessionsDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyInstanceSessionsDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyInstanceSessionsDataRelevancy, &ymNotifyInstanceSessionsDataRelevancy_Parms, NULL );
	};

	void ymRequestInstanceSessionsData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestInstanceSessionsData = NULL;

		if ( !pfnymRequestInstanceSessionsData )
			pfnymRequestInstanceSessionsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestInstanceSessionsData" );

		UCCCheatManager_execymRequestInstanceSessionsData_Parms ymRequestInstanceSessionsData_Parms;
		ymRequestInstanceSessionsData_Parms.InSourceId = InSourceId;
		ymRequestInstanceSessionsData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestInstanceSessionsData, &ymRequestInstanceSessionsData_Parms, NULL );
	};

	void ymUpdateInstanceSessionsData ( int InSourceId, int InRevision, TArray< struct FInstanceSessionDescription > InUpdatedInstances, TArray< int > InDeletedInstances )
	{
		static UFunction* pfnymUpdateInstanceSessionsData = NULL;

		if ( !pfnymUpdateInstanceSessionsData )
			pfnymUpdateInstanceSessionsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateInstanceSessionsData" );

		UCCCheatManager_execymUpdateInstanceSessionsData_Parms ymUpdateInstanceSessionsData_Parms;
		ymUpdateInstanceSessionsData_Parms.InSourceId = InSourceId;
		ymUpdateInstanceSessionsData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateInstanceSessionsData_Parms.InUpdatedInstances, &InUpdatedInstances, 0xC );
		ymUpdateInstanceSessionsData_Parms.InDeletedInstances = InDeletedInstances;

		this->ProcessEvent( pfnymUpdateInstanceSessionsData, &ymUpdateInstanceSessionsData_Parms, NULL );
	};

	void ymInitInstanceSessionsData ( int InSourceId, int InRevision, TArray< struct FInstanceSessionDescription > InInstanceSessions )
	{
		static UFunction* pfnymInitInstanceSessionsData = NULL;

		if ( !pfnymInitInstanceSessionsData )
			pfnymInitInstanceSessionsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitInstanceSessionsData" );

		UCCCheatManager_execymInitInstanceSessionsData_Parms ymInitInstanceSessionsData_Parms;
		ymInitInstanceSessionsData_Parms.InSourceId = InSourceId;
		ymInitInstanceSessionsData_Parms.InRevision = InRevision;
		memcpy( &ymInitInstanceSessionsData_Parms.InInstanceSessions, &InInstanceSessions, 0xC );

		this->ProcessEvent( pfnymInitInstanceSessionsData, &ymInitInstanceSessionsData_Parms, NULL );
	};

	void ymNotifyInsideClubInfoDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyInsideClubInfoDataRelevancy = NULL;

		if ( !pfnymNotifyInsideClubInfoDataRelevancy )
			pfnymNotifyInsideClubInfoDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyInsideClubInfoDataRelevancy" );

		UCCCheatManager_execymNotifyInsideClubInfoDataRelevancy_Parms ymNotifyInsideClubInfoDataRelevancy_Parms;
		ymNotifyInsideClubInfoDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyInsideClubInfoDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyInsideClubInfoDataRelevancy, &ymNotifyInsideClubInfoDataRelevancy_Parms, NULL );
	};

	void ymRequestInsideClubInfoData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestInsideClubInfoData = NULL;

		if ( !pfnymRequestInsideClubInfoData )
			pfnymRequestInsideClubInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestInsideClubInfoData" );

		UCCCheatManager_execymRequestInsideClubInfoData_Parms ymRequestInsideClubInfoData_Parms;
		ymRequestInsideClubInfoData_Parms.InSourceId = InSourceId;
		ymRequestInsideClubInfoData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestInsideClubInfoData, &ymRequestInsideClubInfoData_Parms, NULL );
	};

	void ymUpdateInsideClubInfoData ( int InSourceId, int InRevision, TArray< struct FClubItem > InAddedItems, TArray< struct FClubItemChanges > InChangesInItems, TArray< int > InRemovedItemsIds, TArray< int > InAddedFunctionalities )
	{
		static UFunction* pfnymUpdateInsideClubInfoData = NULL;

		if ( !pfnymUpdateInsideClubInfoData )
			pfnymUpdateInsideClubInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateInsideClubInfoData" );

		UCCCheatManager_execymUpdateInsideClubInfoData_Parms ymUpdateInsideClubInfoData_Parms;
		ymUpdateInsideClubInfoData_Parms.InSourceId = InSourceId;
		ymUpdateInsideClubInfoData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateInsideClubInfoData_Parms.InAddedItems, &InAddedItems, 0xC );
		memcpy( &ymUpdateInsideClubInfoData_Parms.InChangesInItems, &InChangesInItems, 0xC );
		ymUpdateInsideClubInfoData_Parms.InRemovedItemsIds = InRemovedItemsIds;
		ymUpdateInsideClubInfoData_Parms.InAddedFunctionalities = InAddedFunctionalities;

		this->ProcessEvent( pfnymUpdateInsideClubInfoData, &ymUpdateInsideClubInfoData_Parms, NULL );
	};

	void ymInitInsideClubInfoData ( int InSourceId, int InRevision, TArray< struct FClubItem > InStoredItems, struct FServerDateTime InExpirationTime, TArray< int > InFunctionalities )
	{
		static UFunction* pfnymInitInsideClubInfoData = NULL;

		if ( !pfnymInitInsideClubInfoData )
			pfnymInitInsideClubInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitInsideClubInfoData" );

		UCCCheatManager_execymInitInsideClubInfoData_Parms ymInitInsideClubInfoData_Parms;
		ymInitInsideClubInfoData_Parms.InSourceId = InSourceId;
		ymInitInsideClubInfoData_Parms.InRevision = InRevision;
		memcpy( &ymInitInsideClubInfoData_Parms.InStoredItems, &InStoredItems, 0xC );
		memcpy( &ymInitInsideClubInfoData_Parms.InExpirationTime, &InExpirationTime, 0x8 );
		ymInitInsideClubInfoData_Parms.InFunctionalities = InFunctionalities;

		this->ProcessEvent( pfnymInitInsideClubInfoData, &ymInitInsideClubInfoData_Parms, NULL );
	};

	void ymNotifyOutsideClubInfoDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyOutsideClubInfoDataRelevancy = NULL;

		if ( !pfnymNotifyOutsideClubInfoDataRelevancy )
			pfnymNotifyOutsideClubInfoDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyOutsideClubInfoDataRelevancy" );

		UCCCheatManager_execymNotifyOutsideClubInfoDataRelevancy_Parms ymNotifyOutsideClubInfoDataRelevancy_Parms;
		ymNotifyOutsideClubInfoDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyOutsideClubInfoDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyOutsideClubInfoDataRelevancy, &ymNotifyOutsideClubInfoDataRelevancy_Parms, NULL );
	};

	void ymRequestOutsideClubInfoData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestOutsideClubInfoData = NULL;

		if ( !pfnymRequestOutsideClubInfoData )
			pfnymRequestOutsideClubInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestOutsideClubInfoData" );

		UCCCheatManager_execymRequestOutsideClubInfoData_Parms ymRequestOutsideClubInfoData_Parms;
		ymRequestOutsideClubInfoData_Parms.InSourceId = InSourceId;
		ymRequestOutsideClubInfoData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestOutsideClubInfoData, &ymRequestOutsideClubInfoData_Parms, NULL );
	};

	void ymUpdateOutsideClubInfoData ( int InSourceId, int InRevision, TArray< struct FClubZoneChanges > InChangesInZones )
	{
		static UFunction* pfnymUpdateOutsideClubInfoData = NULL;

		if ( !pfnymUpdateOutsideClubInfoData )
			pfnymUpdateOutsideClubInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateOutsideClubInfoData" );

		UCCCheatManager_execymUpdateOutsideClubInfoData_Parms ymUpdateOutsideClubInfoData_Parms;
		ymUpdateOutsideClubInfoData_Parms.InSourceId = InSourceId;
		ymUpdateOutsideClubInfoData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateOutsideClubInfoData_Parms.InChangesInZones, &InChangesInZones, 0xC );

		this->ProcessEvent( pfnymUpdateOutsideClubInfoData, &ymUpdateOutsideClubInfoData_Parms, NULL );
	};

	void ymInitOutsideClubInfoData ( int InSourceId, int InRevision, int InClubTemplateId, TArray< struct FClubZone > InZones )
	{
		static UFunction* pfnymInitOutsideClubInfoData = NULL;

		if ( !pfnymInitOutsideClubInfoData )
			pfnymInitOutsideClubInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitOutsideClubInfoData" );

		UCCCheatManager_execymInitOutsideClubInfoData_Parms ymInitOutsideClubInfoData_Parms;
		ymInitOutsideClubInfoData_Parms.InSourceId = InSourceId;
		ymInitOutsideClubInfoData_Parms.InRevision = InRevision;
		ymInitOutsideClubInfoData_Parms.InClubTemplateId = InClubTemplateId;
		memcpy( &ymInitOutsideClubInfoData_Parms.InZones, &InZones, 0xC );

		this->ProcessEvent( pfnymInitOutsideClubInfoData, &ymInitOutsideClubInfoData_Parms, NULL );
	};

	void ymNotifyCurrentClanWarSeasonInfoDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyCurrentClanWarSeasonInfoDataRelevancy = NULL;

		if ( !pfnymNotifyCurrentClanWarSeasonInfoDataRelevancy )
			pfnymNotifyCurrentClanWarSeasonInfoDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyCurrentClanWarSeasonInfoDataRelevancy" );

		UCCCheatManager_execymNotifyCurrentClanWarSeasonInfoDataRelevancy_Parms ymNotifyCurrentClanWarSeasonInfoDataRelevancy_Parms;
		ymNotifyCurrentClanWarSeasonInfoDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyCurrentClanWarSeasonInfoDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyCurrentClanWarSeasonInfoDataRelevancy, &ymNotifyCurrentClanWarSeasonInfoDataRelevancy_Parms, NULL );
	};

	void ymRequestCurrentClanWarSeasonInfoData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestCurrentClanWarSeasonInfoData = NULL;

		if ( !pfnymRequestCurrentClanWarSeasonInfoData )
			pfnymRequestCurrentClanWarSeasonInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestCurrentClanWarSeasonInfoData" );

		UCCCheatManager_execymRequestCurrentClanWarSeasonInfoData_Parms ymRequestCurrentClanWarSeasonInfoData_Parms;
		ymRequestCurrentClanWarSeasonInfoData_Parms.InSourceId = InSourceId;
		ymRequestCurrentClanWarSeasonInfoData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestCurrentClanWarSeasonInfoData, &ymRequestCurrentClanWarSeasonInfoData_Parms, NULL );
	};

	void ymUpdateCurrentClanWarSeasonInfoData ( int InSourceId, int InRevision, struct FString InName, struct FServerDateTime InStartSeasonDate, struct FServerDateTime InStartFreezeDate, struct FServerDateTime InStartChampionshipRoundOf16Date, struct FServerDateTime InStartChampionshipQuarterfinalDate, struct FServerDateTime InStartChampionshipSemifinalDate, struct FServerDateTime InStartChampionshipFinalDate, struct FServerDateTime InStartOffSeasonDate, int InMoney, TArray< int > InItemTemplateIDs )
	{
		static UFunction* pfnymUpdateCurrentClanWarSeasonInfoData = NULL;

		if ( !pfnymUpdateCurrentClanWarSeasonInfoData )
			pfnymUpdateCurrentClanWarSeasonInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateCurrentClanWarSeasonInfoData" );

		UCCCheatManager_execymUpdateCurrentClanWarSeasonInfoData_Parms ymUpdateCurrentClanWarSeasonInfoData_Parms;
		ymUpdateCurrentClanWarSeasonInfoData_Parms.InSourceId = InSourceId;
		ymUpdateCurrentClanWarSeasonInfoData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateCurrentClanWarSeasonInfoData_Parms.InName, &InName, 0xC );
		memcpy( &ymUpdateCurrentClanWarSeasonInfoData_Parms.InStartSeasonDate, &InStartSeasonDate, 0x8 );
		memcpy( &ymUpdateCurrentClanWarSeasonInfoData_Parms.InStartFreezeDate, &InStartFreezeDate, 0x8 );
		memcpy( &ymUpdateCurrentClanWarSeasonInfoData_Parms.InStartChampionshipRoundOf16Date, &InStartChampionshipRoundOf16Date, 0x8 );
		memcpy( &ymUpdateCurrentClanWarSeasonInfoData_Parms.InStartChampionshipQuarterfinalDate, &InStartChampionshipQuarterfinalDate, 0x8 );
		memcpy( &ymUpdateCurrentClanWarSeasonInfoData_Parms.InStartChampionshipSemifinalDate, &InStartChampionshipSemifinalDate, 0x8 );
		memcpy( &ymUpdateCurrentClanWarSeasonInfoData_Parms.InStartChampionshipFinalDate, &InStartChampionshipFinalDate, 0x8 );
		memcpy( &ymUpdateCurrentClanWarSeasonInfoData_Parms.InStartOffSeasonDate, &InStartOffSeasonDate, 0x8 );
		ymUpdateCurrentClanWarSeasonInfoData_Parms.InMoney = InMoney;
		ymUpdateCurrentClanWarSeasonInfoData_Parms.InItemTemplateIDs = InItemTemplateIDs;

		this->ProcessEvent( pfnymUpdateCurrentClanWarSeasonInfoData, &ymUpdateCurrentClanWarSeasonInfoData_Parms, NULL );
	};

	void ymInitCurrentClanWarSeasonInfoData ( int InSourceId, int InRevision, struct FString InName, struct FServerDateTime InStartSeasonDate, struct FServerDateTime InStartFreezeDate, struct FServerDateTime InStartChampionshipRoundOf16Date, struct FServerDateTime InStartChampionshipQuarterfinalDate, struct FServerDateTime InStartChampionshipSemifinalDate, struct FServerDateTime InStartChampionshipFinalDate, struct FServerDateTime InStartOffSeasonDate, int InMoney, TArray< int > InItemTemplateIDs )
	{
		static UFunction* pfnymInitCurrentClanWarSeasonInfoData = NULL;

		if ( !pfnymInitCurrentClanWarSeasonInfoData )
			pfnymInitCurrentClanWarSeasonInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitCurrentClanWarSeasonInfoData" );

		UCCCheatManager_execymInitCurrentClanWarSeasonInfoData_Parms ymInitCurrentClanWarSeasonInfoData_Parms;
		ymInitCurrentClanWarSeasonInfoData_Parms.InSourceId = InSourceId;
		ymInitCurrentClanWarSeasonInfoData_Parms.InRevision = InRevision;
		memcpy( &ymInitCurrentClanWarSeasonInfoData_Parms.InName, &InName, 0xC );
		memcpy( &ymInitCurrentClanWarSeasonInfoData_Parms.InStartSeasonDate, &InStartSeasonDate, 0x8 );
		memcpy( &ymInitCurrentClanWarSeasonInfoData_Parms.InStartFreezeDate, &InStartFreezeDate, 0x8 );
		memcpy( &ymInitCurrentClanWarSeasonInfoData_Parms.InStartChampionshipRoundOf16Date, &InStartChampionshipRoundOf16Date, 0x8 );
		memcpy( &ymInitCurrentClanWarSeasonInfoData_Parms.InStartChampionshipQuarterfinalDate, &InStartChampionshipQuarterfinalDate, 0x8 );
		memcpy( &ymInitCurrentClanWarSeasonInfoData_Parms.InStartChampionshipSemifinalDate, &InStartChampionshipSemifinalDate, 0x8 );
		memcpy( &ymInitCurrentClanWarSeasonInfoData_Parms.InStartChampionshipFinalDate, &InStartChampionshipFinalDate, 0x8 );
		memcpy( &ymInitCurrentClanWarSeasonInfoData_Parms.InStartOffSeasonDate, &InStartOffSeasonDate, 0x8 );
		ymInitCurrentClanWarSeasonInfoData_Parms.InMoney = InMoney;
		ymInitCurrentClanWarSeasonInfoData_Parms.InItemTemplateIDs = InItemTemplateIDs;

		this->ProcessEvent( pfnymInitCurrentClanWarSeasonInfoData, &ymInitCurrentClanWarSeasonInfoData_Parms, NULL );
	};

	void ymNotifyClanWarScoreboardTournamentDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyClanWarScoreboardTournamentDataRelevancy = NULL;

		if ( !pfnymNotifyClanWarScoreboardTournamentDataRelevancy )
			pfnymNotifyClanWarScoreboardTournamentDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanWarScoreboardTournamentDataRelevancy" );

		UCCCheatManager_execymNotifyClanWarScoreboardTournamentDataRelevancy_Parms ymNotifyClanWarScoreboardTournamentDataRelevancy_Parms;
		ymNotifyClanWarScoreboardTournamentDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyClanWarScoreboardTournamentDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyClanWarScoreboardTournamentDataRelevancy, &ymNotifyClanWarScoreboardTournamentDataRelevancy_Parms, NULL );
	};

	void ymRequestClanWarScoreboardTournamentData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestClanWarScoreboardTournamentData = NULL;

		if ( !pfnymRequestClanWarScoreboardTournamentData )
			pfnymRequestClanWarScoreboardTournamentData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestClanWarScoreboardTournamentData" );

		UCCCheatManager_execymRequestClanWarScoreboardTournamentData_Parms ymRequestClanWarScoreboardTournamentData_Parms;
		ymRequestClanWarScoreboardTournamentData_Parms.InSourceId = InSourceId;
		ymRequestClanWarScoreboardTournamentData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestClanWarScoreboardTournamentData, &ymRequestClanWarScoreboardTournamentData_Parms, NULL );
	};

	void ymUpdateClanWarScoreboardTournamentData ( int InSourceId, int InRevision, TArray< struct FClanWarTournamentPairDescription > InClanWarTournamentPairs )
	{
		static UFunction* pfnymUpdateClanWarScoreboardTournamentData = NULL;

		if ( !pfnymUpdateClanWarScoreboardTournamentData )
			pfnymUpdateClanWarScoreboardTournamentData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateClanWarScoreboardTournamentData" );

		UCCCheatManager_execymUpdateClanWarScoreboardTournamentData_Parms ymUpdateClanWarScoreboardTournamentData_Parms;
		ymUpdateClanWarScoreboardTournamentData_Parms.InSourceId = InSourceId;
		ymUpdateClanWarScoreboardTournamentData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateClanWarScoreboardTournamentData_Parms.InClanWarTournamentPairs, &InClanWarTournamentPairs, 0xC );

		this->ProcessEvent( pfnymUpdateClanWarScoreboardTournamentData, &ymUpdateClanWarScoreboardTournamentData_Parms, NULL );
	};

	void ymInitClanWarScoreboardTournamentData ( int InSourceId, int InRevision, int InClan1InGroupA, int InClan2InGroupA, int InClan1InGroupB, int InClan2InGroupB, int InClan1InGroupC, int InClan2InGroupC, int InClan1InGroupD, int InClan2InGroupD, int InClan1InGroupE, int InClan2InGroupE, int InClan1InGroupF, int InClan2InGroupF, int InClan1InGroupG, int InClan2InGroupG, int InClan1InGroupH, int InClan2InGroupH, TArray< struct FClanWarTournamentPairDescription > InClanWarTournamentPairs )
	{
		static UFunction* pfnymInitClanWarScoreboardTournamentData = NULL;

		if ( !pfnymInitClanWarScoreboardTournamentData )
			pfnymInitClanWarScoreboardTournamentData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitClanWarScoreboardTournamentData" );

		UCCCheatManager_execymInitClanWarScoreboardTournamentData_Parms ymInitClanWarScoreboardTournamentData_Parms;
		ymInitClanWarScoreboardTournamentData_Parms.InSourceId = InSourceId;
		ymInitClanWarScoreboardTournamentData_Parms.InRevision = InRevision;
		ymInitClanWarScoreboardTournamentData_Parms.InClan1InGroupA = InClan1InGroupA;
		ymInitClanWarScoreboardTournamentData_Parms.InClan2InGroupA = InClan2InGroupA;
		ymInitClanWarScoreboardTournamentData_Parms.InClan1InGroupB = InClan1InGroupB;
		ymInitClanWarScoreboardTournamentData_Parms.InClan2InGroupB = InClan2InGroupB;
		ymInitClanWarScoreboardTournamentData_Parms.InClan1InGroupC = InClan1InGroupC;
		ymInitClanWarScoreboardTournamentData_Parms.InClan2InGroupC = InClan2InGroupC;
		ymInitClanWarScoreboardTournamentData_Parms.InClan1InGroupD = InClan1InGroupD;
		ymInitClanWarScoreboardTournamentData_Parms.InClan2InGroupD = InClan2InGroupD;
		ymInitClanWarScoreboardTournamentData_Parms.InClan1InGroupE = InClan1InGroupE;
		ymInitClanWarScoreboardTournamentData_Parms.InClan2InGroupE = InClan2InGroupE;
		ymInitClanWarScoreboardTournamentData_Parms.InClan1InGroupF = InClan1InGroupF;
		ymInitClanWarScoreboardTournamentData_Parms.InClan2InGroupF = InClan2InGroupF;
		ymInitClanWarScoreboardTournamentData_Parms.InClan1InGroupG = InClan1InGroupG;
		ymInitClanWarScoreboardTournamentData_Parms.InClan2InGroupG = InClan2InGroupG;
		ymInitClanWarScoreboardTournamentData_Parms.InClan1InGroupH = InClan1InGroupH;
		ymInitClanWarScoreboardTournamentData_Parms.InClan2InGroupH = InClan2InGroupH;
		memcpy( &ymInitClanWarScoreboardTournamentData_Parms.InClanWarTournamentPairs, &InClanWarTournamentPairs, 0xC );

		this->ProcessEvent( pfnymInitClanWarScoreboardTournamentData, &ymInitClanWarScoreboardTournamentData_Parms, NULL );
	};

	void ymNotifyClanWarScoreboardChampionshipDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyClanWarScoreboardChampionshipDataRelevancy = NULL;

		if ( !pfnymNotifyClanWarScoreboardChampionshipDataRelevancy )
			pfnymNotifyClanWarScoreboardChampionshipDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanWarScoreboardChampionshipDataRelevancy" );

		UCCCheatManager_execymNotifyClanWarScoreboardChampionshipDataRelevancy_Parms ymNotifyClanWarScoreboardChampionshipDataRelevancy_Parms;
		ymNotifyClanWarScoreboardChampionshipDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyClanWarScoreboardChampionshipDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyClanWarScoreboardChampionshipDataRelevancy, &ymNotifyClanWarScoreboardChampionshipDataRelevancy_Parms, NULL );
	};

	void ymRequestClanWarScoreboardChampionshipData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestClanWarScoreboardChampionshipData = NULL;

		if ( !pfnymRequestClanWarScoreboardChampionshipData )
			pfnymRequestClanWarScoreboardChampionshipData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestClanWarScoreboardChampionshipData" );

		UCCCheatManager_execymRequestClanWarScoreboardChampionshipData_Parms ymRequestClanWarScoreboardChampionshipData_Parms;
		ymRequestClanWarScoreboardChampionshipData_Parms.InSourceId = InSourceId;
		ymRequestClanWarScoreboardChampionshipData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestClanWarScoreboardChampionshipData, &ymRequestClanWarScoreboardChampionshipData_Parms, NULL );
	};

	void ymUpdateClanWarScoreboardChampionshipData ( int InSourceId, int InRevision, TArray< struct FClanStatDescription > InClanStat )
	{
		static UFunction* pfnymUpdateClanWarScoreboardChampionshipData = NULL;

		if ( !pfnymUpdateClanWarScoreboardChampionshipData )
			pfnymUpdateClanWarScoreboardChampionshipData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateClanWarScoreboardChampionshipData" );

		UCCCheatManager_execymUpdateClanWarScoreboardChampionshipData_Parms ymUpdateClanWarScoreboardChampionshipData_Parms;
		ymUpdateClanWarScoreboardChampionshipData_Parms.InSourceId = InSourceId;
		ymUpdateClanWarScoreboardChampionshipData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateClanWarScoreboardChampionshipData_Parms.InClanStat, &InClanStat, 0xC );

		this->ProcessEvent( pfnymUpdateClanWarScoreboardChampionshipData, &ymUpdateClanWarScoreboardChampionshipData_Parms, NULL );
	};

	void ymInitClanWarScoreboardChampionshipData ( int InSourceId, int InRevision, TArray< struct FClanStatDescription > InClanStat )
	{
		static UFunction* pfnymInitClanWarScoreboardChampionshipData = NULL;

		if ( !pfnymInitClanWarScoreboardChampionshipData )
			pfnymInitClanWarScoreboardChampionshipData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitClanWarScoreboardChampionshipData" );

		UCCCheatManager_execymInitClanWarScoreboardChampionshipData_Parms ymInitClanWarScoreboardChampionshipData_Parms;
		ymInitClanWarScoreboardChampionshipData_Parms.InSourceId = InSourceId;
		ymInitClanWarScoreboardChampionshipData_Parms.InRevision = InRevision;
		memcpy( &ymInitClanWarScoreboardChampionshipData_Parms.InClanStat, &InClanStat, 0xC );

		this->ProcessEvent( pfnymInitClanWarScoreboardChampionshipData, &ymInitClanWarScoreboardChampionshipData_Parms, NULL );
	};

	void ymNotifyClanPetitionsReceiversDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyClanPetitionsReceiversDataRelevancy = NULL;

		if ( !pfnymNotifyClanPetitionsReceiversDataRelevancy )
			pfnymNotifyClanPetitionsReceiversDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanPetitionsReceiversDataRelevancy" );

		UCCCheatManager_execymNotifyClanPetitionsReceiversDataRelevancy_Parms ymNotifyClanPetitionsReceiversDataRelevancy_Parms;
		ymNotifyClanPetitionsReceiversDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyClanPetitionsReceiversDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyClanPetitionsReceiversDataRelevancy, &ymNotifyClanPetitionsReceiversDataRelevancy_Parms, NULL );
	};

	void ymRequestClanPetitionsReceiversData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestClanPetitionsReceiversData = NULL;

		if ( !pfnymRequestClanPetitionsReceiversData )
			pfnymRequestClanPetitionsReceiversData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestClanPetitionsReceiversData" );

		UCCCheatManager_execymRequestClanPetitionsReceiversData_Parms ymRequestClanPetitionsReceiversData_Parms;
		ymRequestClanPetitionsReceiversData_Parms.InSourceId = InSourceId;
		ymRequestClanPetitionsReceiversData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestClanPetitionsReceiversData, &ymRequestClanPetitionsReceiversData_Parms, NULL );
	};

	void ymUpdateClanPetitionsReceiversData ( int InSourceId, int InRevision, TArray< int > InAddedReceivers )
	{
		static UFunction* pfnymUpdateClanPetitionsReceiversData = NULL;

		if ( !pfnymUpdateClanPetitionsReceiversData )
			pfnymUpdateClanPetitionsReceiversData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateClanPetitionsReceiversData" );

		UCCCheatManager_execymUpdateClanPetitionsReceiversData_Parms ymUpdateClanPetitionsReceiversData_Parms;
		ymUpdateClanPetitionsReceiversData_Parms.InSourceId = InSourceId;
		ymUpdateClanPetitionsReceiversData_Parms.InRevision = InRevision;
		ymUpdateClanPetitionsReceiversData_Parms.InAddedReceivers = InAddedReceivers;

		this->ProcessEvent( pfnymUpdateClanPetitionsReceiversData, &ymUpdateClanPetitionsReceiversData_Parms, NULL );
	};

	void ymInitClanPetitionsReceiversData ( int InSourceId, int InRevision, TArray< int > InReceivers )
	{
		static UFunction* pfnymInitClanPetitionsReceiversData = NULL;

		if ( !pfnymInitClanPetitionsReceiversData )
			pfnymInitClanPetitionsReceiversData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitClanPetitionsReceiversData" );

		UCCCheatManager_execymInitClanPetitionsReceiversData_Parms ymInitClanPetitionsReceiversData_Parms;
		ymInitClanPetitionsReceiversData_Parms.InSourceId = InSourceId;
		ymInitClanPetitionsReceiversData_Parms.InRevision = InRevision;
		ymInitClanPetitionsReceiversData_Parms.InReceivers = InReceivers;

		this->ProcessEvent( pfnymInitClanPetitionsReceiversData, &ymInitClanPetitionsReceiversData_Parms, NULL );
	};

	void ymNotifyClanStatisticsInfoDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyClanStatisticsInfoDataRelevancy = NULL;

		if ( !pfnymNotifyClanStatisticsInfoDataRelevancy )
			pfnymNotifyClanStatisticsInfoDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanStatisticsInfoDataRelevancy" );

		UCCCheatManager_execymNotifyClanStatisticsInfoDataRelevancy_Parms ymNotifyClanStatisticsInfoDataRelevancy_Parms;
		ymNotifyClanStatisticsInfoDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyClanStatisticsInfoDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyClanStatisticsInfoDataRelevancy, &ymNotifyClanStatisticsInfoDataRelevancy_Parms, NULL );
	};

	void ymRequestClanStatisticsInfoData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestClanStatisticsInfoData = NULL;

		if ( !pfnymRequestClanStatisticsInfoData )
			pfnymRequestClanStatisticsInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestClanStatisticsInfoData" );

		UCCCheatManager_execymRequestClanStatisticsInfoData_Parms ymRequestClanStatisticsInfoData_Parms;
		ymRequestClanStatisticsInfoData_Parms.InSourceId = InSourceId;
		ymRequestClanStatisticsInfoData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestClanStatisticsInfoData, &ymRequestClanStatisticsInfoData_Parms, NULL );
	};

	void ymUpdateClanStatisticsInfoData ( int InSourceId, int InRevision, int InBaseRate, int InCurrentRate, int InMaxRate, int InMaxCharactersInClan, int InPutMoneyInClanBank, int InTakeMoneyInClanBank, int InWinMoneyInClanWars, int InLoseMoneyInClanWars, int InWinSeasonClanWars, int InLoseSeasonClanWars, int InDrawSeasonClanWars, int InWinClanWarsForMoney, int InLoseClanWarsForMoney, int InDrawClanWarsForMoney, int InMinutesNeedForCurrentLevelUp )
	{
		static UFunction* pfnymUpdateClanStatisticsInfoData = NULL;

		if ( !pfnymUpdateClanStatisticsInfoData )
			pfnymUpdateClanStatisticsInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateClanStatisticsInfoData" );

		UCCCheatManager_execymUpdateClanStatisticsInfoData_Parms ymUpdateClanStatisticsInfoData_Parms;
		ymUpdateClanStatisticsInfoData_Parms.InSourceId = InSourceId;
		ymUpdateClanStatisticsInfoData_Parms.InRevision = InRevision;
		ymUpdateClanStatisticsInfoData_Parms.InBaseRate = InBaseRate;
		ymUpdateClanStatisticsInfoData_Parms.InCurrentRate = InCurrentRate;
		ymUpdateClanStatisticsInfoData_Parms.InMaxRate = InMaxRate;
		ymUpdateClanStatisticsInfoData_Parms.InMaxCharactersInClan = InMaxCharactersInClan;
		ymUpdateClanStatisticsInfoData_Parms.InPutMoneyInClanBank = InPutMoneyInClanBank;
		ymUpdateClanStatisticsInfoData_Parms.InTakeMoneyInClanBank = InTakeMoneyInClanBank;
		ymUpdateClanStatisticsInfoData_Parms.InWinMoneyInClanWars = InWinMoneyInClanWars;
		ymUpdateClanStatisticsInfoData_Parms.InLoseMoneyInClanWars = InLoseMoneyInClanWars;
		ymUpdateClanStatisticsInfoData_Parms.InWinSeasonClanWars = InWinSeasonClanWars;
		ymUpdateClanStatisticsInfoData_Parms.InLoseSeasonClanWars = InLoseSeasonClanWars;
		ymUpdateClanStatisticsInfoData_Parms.InDrawSeasonClanWars = InDrawSeasonClanWars;
		ymUpdateClanStatisticsInfoData_Parms.InWinClanWarsForMoney = InWinClanWarsForMoney;
		ymUpdateClanStatisticsInfoData_Parms.InLoseClanWarsForMoney = InLoseClanWarsForMoney;
		ymUpdateClanStatisticsInfoData_Parms.InDrawClanWarsForMoney = InDrawClanWarsForMoney;
		ymUpdateClanStatisticsInfoData_Parms.InMinutesNeedForCurrentLevelUp = InMinutesNeedForCurrentLevelUp;

		this->ProcessEvent( pfnymUpdateClanStatisticsInfoData, &ymUpdateClanStatisticsInfoData_Parms, NULL );
	};

	void ymInitClanStatisticsInfoData ( int InSourceId, int InRevision, struct FServerDateTime InCreationDate, int InBaseRate, int InCurrentRate, int InMaxRate, int InMaxCharactersInClan, int InPutMoneyInClanBank, int InTakeMoneyInClanBank, int InWinMoneyInClanWars, int InLoseMoneyInClanWars, int InWinSeasonClanWars, int InLoseSeasonClanWars, int InDrawSeasonClanWars, int InWinClanWarsForMoney, int InLoseClanWarsForMoney, int InDrawClanWarsForMoney, int InMinutesNeedForCurrentLevelUp )
	{
		static UFunction* pfnymInitClanStatisticsInfoData = NULL;

		if ( !pfnymInitClanStatisticsInfoData )
			pfnymInitClanStatisticsInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitClanStatisticsInfoData" );

		UCCCheatManager_execymInitClanStatisticsInfoData_Parms ymInitClanStatisticsInfoData_Parms;
		ymInitClanStatisticsInfoData_Parms.InSourceId = InSourceId;
		ymInitClanStatisticsInfoData_Parms.InRevision = InRevision;
		memcpy( &ymInitClanStatisticsInfoData_Parms.InCreationDate, &InCreationDate, 0x8 );
		ymInitClanStatisticsInfoData_Parms.InBaseRate = InBaseRate;
		ymInitClanStatisticsInfoData_Parms.InCurrentRate = InCurrentRate;
		ymInitClanStatisticsInfoData_Parms.InMaxRate = InMaxRate;
		ymInitClanStatisticsInfoData_Parms.InMaxCharactersInClan = InMaxCharactersInClan;
		ymInitClanStatisticsInfoData_Parms.InPutMoneyInClanBank = InPutMoneyInClanBank;
		ymInitClanStatisticsInfoData_Parms.InTakeMoneyInClanBank = InTakeMoneyInClanBank;
		ymInitClanStatisticsInfoData_Parms.InWinMoneyInClanWars = InWinMoneyInClanWars;
		ymInitClanStatisticsInfoData_Parms.InLoseMoneyInClanWars = InLoseMoneyInClanWars;
		ymInitClanStatisticsInfoData_Parms.InWinSeasonClanWars = InWinSeasonClanWars;
		ymInitClanStatisticsInfoData_Parms.InLoseSeasonClanWars = InLoseSeasonClanWars;
		ymInitClanStatisticsInfoData_Parms.InDrawSeasonClanWars = InDrawSeasonClanWars;
		ymInitClanStatisticsInfoData_Parms.InWinClanWarsForMoney = InWinClanWarsForMoney;
		ymInitClanStatisticsInfoData_Parms.InLoseClanWarsForMoney = InLoseClanWarsForMoney;
		ymInitClanStatisticsInfoData_Parms.InDrawClanWarsForMoney = InDrawClanWarsForMoney;
		ymInitClanStatisticsInfoData_Parms.InMinutesNeedForCurrentLevelUp = InMinutesNeedForCurrentLevelUp;

		this->ProcessEvent( pfnymInitClanStatisticsInfoData, &ymInitClanStatisticsInfoData_Parms, NULL );
	};

	void ymNotifyBuffSlotsDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyBuffSlotsDataRelevancy = NULL;

		if ( !pfnymNotifyBuffSlotsDataRelevancy )
			pfnymNotifyBuffSlotsDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyBuffSlotsDataRelevancy" );

		UCCCheatManager_execymNotifyBuffSlotsDataRelevancy_Parms ymNotifyBuffSlotsDataRelevancy_Parms;
		ymNotifyBuffSlotsDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyBuffSlotsDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyBuffSlotsDataRelevancy, &ymNotifyBuffSlotsDataRelevancy_Parms, NULL );
	};

	void ymRequestBuffSlotsData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestBuffSlotsData = NULL;

		if ( !pfnymRequestBuffSlotsData )
			pfnymRequestBuffSlotsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestBuffSlotsData" );

		UCCCheatManager_execymRequestBuffSlotsData_Parms ymRequestBuffSlotsData_Parms;
		ymRequestBuffSlotsData_Parms.InSourceId = InSourceId;
		ymRequestBuffSlotsData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestBuffSlotsData, &ymRequestBuffSlotsData_Parms, NULL );
	};

	void ymUpdateBuffSlotsData ( int InSourceId, int InRevision, TArray< int > InBuffTemplates )
	{
		static UFunction* pfnymUpdateBuffSlotsData = NULL;

		if ( !pfnymUpdateBuffSlotsData )
			pfnymUpdateBuffSlotsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateBuffSlotsData" );

		UCCCheatManager_execymUpdateBuffSlotsData_Parms ymUpdateBuffSlotsData_Parms;
		ymUpdateBuffSlotsData_Parms.InSourceId = InSourceId;
		ymUpdateBuffSlotsData_Parms.InRevision = InRevision;
		ymUpdateBuffSlotsData_Parms.InBuffTemplates = InBuffTemplates;

		this->ProcessEvent( pfnymUpdateBuffSlotsData, &ymUpdateBuffSlotsData_Parms, NULL );
	};

	void ymInitBuffSlotsData ( int InSourceId, int InRevision, TArray< int > InBuffTemplates )
	{
		static UFunction* pfnymInitBuffSlotsData = NULL;

		if ( !pfnymInitBuffSlotsData )
			pfnymInitBuffSlotsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitBuffSlotsData" );

		UCCCheatManager_execymInitBuffSlotsData_Parms ymInitBuffSlotsData_Parms;
		ymInitBuffSlotsData_Parms.InSourceId = InSourceId;
		ymInitBuffSlotsData_Parms.InRevision = InRevision;
		ymInitBuffSlotsData_Parms.InBuffTemplates = InBuffTemplates;

		this->ProcessEvent( pfnymInitBuffSlotsData, &ymInitBuffSlotsData_Parms, NULL );
	};

	void ymNotifySecureClanmateListDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifySecureClanmateListDataRelevancy = NULL;

		if ( !pfnymNotifySecureClanmateListDataRelevancy )
			pfnymNotifySecureClanmateListDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifySecureClanmateListDataRelevancy" );

		UCCCheatManager_execymNotifySecureClanmateListDataRelevancy_Parms ymNotifySecureClanmateListDataRelevancy_Parms;
		ymNotifySecureClanmateListDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifySecureClanmateListDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifySecureClanmateListDataRelevancy, &ymNotifySecureClanmateListDataRelevancy_Parms, NULL );
	};

	void ymRequestSecureClanmateListData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestSecureClanmateListData = NULL;

		if ( !pfnymRequestSecureClanmateListData )
			pfnymRequestSecureClanmateListData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestSecureClanmateListData" );

		UCCCheatManager_execymRequestSecureClanmateListData_Parms ymRequestSecureClanmateListData_Parms;
		ymRequestSecureClanmateListData_Parms.InSourceId = InSourceId;
		ymRequestSecureClanmateListData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestSecureClanmateListData, &ymRequestSecureClanmateListData_Parms, NULL );
	};

	void ymUpdateSecureClanmateListData ( int InSourceId, int InRevision, TArray< struct FSecureClanmateDescription > InNewAndChangeClanmates )
	{
		static UFunction* pfnymUpdateSecureClanmateListData = NULL;

		if ( !pfnymUpdateSecureClanmateListData )
			pfnymUpdateSecureClanmateListData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateSecureClanmateListData" );

		UCCCheatManager_execymUpdateSecureClanmateListData_Parms ymUpdateSecureClanmateListData_Parms;
		ymUpdateSecureClanmateListData_Parms.InSourceId = InSourceId;
		ymUpdateSecureClanmateListData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateSecureClanmateListData_Parms.InNewAndChangeClanmates, &InNewAndChangeClanmates, 0xC );

		this->ProcessEvent( pfnymUpdateSecureClanmateListData, &ymUpdateSecureClanmateListData_Parms, NULL );
	};

	void ymInitSecureClanmateListData ( int InSourceId, int InRevision, TArray< struct FSecureClanmateDescription > InClanmates )
	{
		static UFunction* pfnymInitSecureClanmateListData = NULL;

		if ( !pfnymInitSecureClanmateListData )
			pfnymInitSecureClanmateListData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitSecureClanmateListData" );

		UCCCheatManager_execymInitSecureClanmateListData_Parms ymInitSecureClanmateListData_Parms;
		ymInitSecureClanmateListData_Parms.InSourceId = InSourceId;
		ymInitSecureClanmateListData_Parms.InRevision = InRevision;
		memcpy( &ymInitSecureClanmateListData_Parms.InClanmates, &InClanmates, 0xC );

		this->ProcessEvent( pfnymInitSecureClanmateListData, &ymInitSecureClanmateListData_Parms, NULL );
	};

	void ymNotifyClanmateListDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyClanmateListDataRelevancy = NULL;

		if ( !pfnymNotifyClanmateListDataRelevancy )
			pfnymNotifyClanmateListDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanmateListDataRelevancy" );

		UCCCheatManager_execymNotifyClanmateListDataRelevancy_Parms ymNotifyClanmateListDataRelevancy_Parms;
		ymNotifyClanmateListDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyClanmateListDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyClanmateListDataRelevancy, &ymNotifyClanmateListDataRelevancy_Parms, NULL );
	};

	void ymRequestClanmateListData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestClanmateListData = NULL;

		if ( !pfnymRequestClanmateListData )
			pfnymRequestClanmateListData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestClanmateListData" );

		UCCCheatManager_execymRequestClanmateListData_Parms ymRequestClanmateListData_Parms;
		ymRequestClanmateListData_Parms.InSourceId = InSourceId;
		ymRequestClanmateListData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestClanmateListData, &ymRequestClanmateListData_Parms, NULL );
	};

	void ymUpdateClanmateListData ( int InSourceId, int InRevision, TArray< struct FClanmateDescription > InNewAndChangeClanmates, TArray< int > InGoneClanMemberIds )
	{
		static UFunction* pfnymUpdateClanmateListData = NULL;

		if ( !pfnymUpdateClanmateListData )
			pfnymUpdateClanmateListData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateClanmateListData" );

		UCCCheatManager_execymUpdateClanmateListData_Parms ymUpdateClanmateListData_Parms;
		ymUpdateClanmateListData_Parms.InSourceId = InSourceId;
		ymUpdateClanmateListData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateClanmateListData_Parms.InNewAndChangeClanmates, &InNewAndChangeClanmates, 0xC );
		ymUpdateClanmateListData_Parms.InGoneClanMemberIds = InGoneClanMemberIds;

		this->ProcessEvent( pfnymUpdateClanmateListData, &ymUpdateClanmateListData_Parms, NULL );
	};

	void ymInitClanmateListData ( int InSourceId, int InRevision, TArray< struct FClanmateDescription > InClanmates )
	{
		static UFunction* pfnymInitClanmateListData = NULL;

		if ( !pfnymInitClanmateListData )
			pfnymInitClanmateListData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitClanmateListData" );

		UCCCheatManager_execymInitClanmateListData_Parms ymInitClanmateListData_Parms;
		ymInitClanmateListData_Parms.InSourceId = InSourceId;
		ymInitClanmateListData_Parms.InRevision = InRevision;
		memcpy( &ymInitClanmateListData_Parms.InClanmates, &InClanmates, 0xC );

		this->ProcessEvent( pfnymInitClanmateListData, &ymInitClanmateListData_Parms, NULL );
	};

	void ymNotifyClanBankItemsAttachmentsDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyClanBankItemsAttachmentsDataRelevancy = NULL;

		if ( !pfnymNotifyClanBankItemsAttachmentsDataRelevancy )
			pfnymNotifyClanBankItemsAttachmentsDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanBankItemsAttachmentsDataRelevancy" );

		UCCCheatManager_execymNotifyClanBankItemsAttachmentsDataRelevancy_Parms ymNotifyClanBankItemsAttachmentsDataRelevancy_Parms;
		ymNotifyClanBankItemsAttachmentsDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyClanBankItemsAttachmentsDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyClanBankItemsAttachmentsDataRelevancy, &ymNotifyClanBankItemsAttachmentsDataRelevancy_Parms, NULL );
	};

	void ymRequestClanBankItemsAttachmentsData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestClanBankItemsAttachmentsData = NULL;

		if ( !pfnymRequestClanBankItemsAttachmentsData )
			pfnymRequestClanBankItemsAttachmentsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestClanBankItemsAttachmentsData" );

		UCCCheatManager_execymRequestClanBankItemsAttachmentsData_Parms ymRequestClanBankItemsAttachmentsData_Parms;
		ymRequestClanBankItemsAttachmentsData_Parms.InSourceId = InSourceId;
		ymRequestClanBankItemsAttachmentsData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestClanBankItemsAttachmentsData, &ymRequestClanBankItemsAttachmentsData_Parms, NULL );
	};

	void ymUpdateClanBankItemsAttachmentsData ( int InSourceId, int InRevision, TArray< struct FItemAttachments > InUpdatedItemsAttachments, TArray< struct FItemAttachmentsDeleted > InDeletedItemsAttachments )
	{
		static UFunction* pfnymUpdateClanBankItemsAttachmentsData = NULL;

		if ( !pfnymUpdateClanBankItemsAttachmentsData )
			pfnymUpdateClanBankItemsAttachmentsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateClanBankItemsAttachmentsData" );

		UCCCheatManager_execymUpdateClanBankItemsAttachmentsData_Parms ymUpdateClanBankItemsAttachmentsData_Parms;
		ymUpdateClanBankItemsAttachmentsData_Parms.InSourceId = InSourceId;
		ymUpdateClanBankItemsAttachmentsData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateClanBankItemsAttachmentsData_Parms.InUpdatedItemsAttachments, &InUpdatedItemsAttachments, 0xC );
		memcpy( &ymUpdateClanBankItemsAttachmentsData_Parms.InDeletedItemsAttachments, &InDeletedItemsAttachments, 0xC );

		this->ProcessEvent( pfnymUpdateClanBankItemsAttachmentsData, &ymUpdateClanBankItemsAttachmentsData_Parms, NULL );
	};

	void ymInitClanBankItemsAttachmentsData ( int InSourceId, int InRevision, TArray< struct FItemAttachments > InAttachments )
	{
		static UFunction* pfnymInitClanBankItemsAttachmentsData = NULL;

		if ( !pfnymInitClanBankItemsAttachmentsData )
			pfnymInitClanBankItemsAttachmentsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitClanBankItemsAttachmentsData" );

		UCCCheatManager_execymInitClanBankItemsAttachmentsData_Parms ymInitClanBankItemsAttachmentsData_Parms;
		ymInitClanBankItemsAttachmentsData_Parms.InSourceId = InSourceId;
		ymInitClanBankItemsAttachmentsData_Parms.InRevision = InRevision;
		memcpy( &ymInitClanBankItemsAttachmentsData_Parms.InAttachments, &InAttachments, 0xC );

		this->ProcessEvent( pfnymInitClanBankItemsAttachmentsData, &ymInitClanBankItemsAttachmentsData_Parms, NULL );
	};

	void ymNotifyClanBankItemsAttributesDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyClanBankItemsAttributesDataRelevancy = NULL;

		if ( !pfnymNotifyClanBankItemsAttributesDataRelevancy )
			pfnymNotifyClanBankItemsAttributesDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanBankItemsAttributesDataRelevancy" );

		UCCCheatManager_execymNotifyClanBankItemsAttributesDataRelevancy_Parms ymNotifyClanBankItemsAttributesDataRelevancy_Parms;
		ymNotifyClanBankItemsAttributesDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyClanBankItemsAttributesDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyClanBankItemsAttributesDataRelevancy, &ymNotifyClanBankItemsAttributesDataRelevancy_Parms, NULL );
	};

	void ymRequestClanBankItemsAttributesData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestClanBankItemsAttributesData = NULL;

		if ( !pfnymRequestClanBankItemsAttributesData )
			pfnymRequestClanBankItemsAttributesData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestClanBankItemsAttributesData" );

		UCCCheatManager_execymRequestClanBankItemsAttributesData_Parms ymRequestClanBankItemsAttributesData_Parms;
		ymRequestClanBankItemsAttributesData_Parms.InSourceId = InSourceId;
		ymRequestClanBankItemsAttributesData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestClanBankItemsAttributesData, &ymRequestClanBankItemsAttributesData_Parms, NULL );
	};

	void ymUpdateClanBankItemsAttributesData ( int InSourceId, int InRevision, TArray< struct FItemAttributes > InUpdatedItemsAttributes, TArray< struct FItemAttributesDeleted > InDeletedItemsAttributes )
	{
		static UFunction* pfnymUpdateClanBankItemsAttributesData = NULL;

		if ( !pfnymUpdateClanBankItemsAttributesData )
			pfnymUpdateClanBankItemsAttributesData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateClanBankItemsAttributesData" );

		UCCCheatManager_execymUpdateClanBankItemsAttributesData_Parms ymUpdateClanBankItemsAttributesData_Parms;
		ymUpdateClanBankItemsAttributesData_Parms.InSourceId = InSourceId;
		ymUpdateClanBankItemsAttributesData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateClanBankItemsAttributesData_Parms.InUpdatedItemsAttributes, &InUpdatedItemsAttributes, 0xC );
		memcpy( &ymUpdateClanBankItemsAttributesData_Parms.InDeletedItemsAttributes, &InDeletedItemsAttributes, 0xC );

		this->ProcessEvent( pfnymUpdateClanBankItemsAttributesData, &ymUpdateClanBankItemsAttributesData_Parms, NULL );
	};

	void ymInitClanBankItemsAttributesData ( int InSourceId, int InRevision, TArray< struct FItemAttributes > InAttributes )
	{
		static UFunction* pfnymInitClanBankItemsAttributesData = NULL;

		if ( !pfnymInitClanBankItemsAttributesData )
			pfnymInitClanBankItemsAttributesData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitClanBankItemsAttributesData" );

		UCCCheatManager_execymInitClanBankItemsAttributesData_Parms ymInitClanBankItemsAttributesData_Parms;
		ymInitClanBankItemsAttributesData_Parms.InSourceId = InSourceId;
		ymInitClanBankItemsAttributesData_Parms.InRevision = InRevision;
		memcpy( &ymInitClanBankItemsAttributesData_Parms.InAttributes, &InAttributes, 0xC );

		this->ProcessEvent( pfnymInitClanBankItemsAttributesData, &ymInitClanBankItemsAttributesData_Parms, NULL );
	};

	void ymNotifyClanBankItemsDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyClanBankItemsDataRelevancy = NULL;

		if ( !pfnymNotifyClanBankItemsDataRelevancy )
			pfnymNotifyClanBankItemsDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanBankItemsDataRelevancy" );

		UCCCheatManager_execymNotifyClanBankItemsDataRelevancy_Parms ymNotifyClanBankItemsDataRelevancy_Parms;
		ymNotifyClanBankItemsDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyClanBankItemsDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyClanBankItemsDataRelevancy, &ymNotifyClanBankItemsDataRelevancy_Parms, NULL );
	};

	void ymRequestClanBankItemsData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestClanBankItemsData = NULL;

		if ( !pfnymRequestClanBankItemsData )
			pfnymRequestClanBankItemsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestClanBankItemsData" );

		UCCCheatManager_execymRequestClanBankItemsData_Parms ymRequestClanBankItemsData_Parms;
		ymRequestClanBankItemsData_Parms.InSourceId = InSourceId;
		ymRequestClanBankItemsData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestClanBankItemsData, &ymRequestClanBankItemsData_Parms, NULL );
	};

	void ymUpdateClanBankItemsData ( int InSourceId, int InRevision, int InCash, TArray< struct FItemDescr > InUpdatedItems, TArray< int > InDeletedItems )
	{
		static UFunction* pfnymUpdateClanBankItemsData = NULL;

		if ( !pfnymUpdateClanBankItemsData )
			pfnymUpdateClanBankItemsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateClanBankItemsData" );

		UCCCheatManager_execymUpdateClanBankItemsData_Parms ymUpdateClanBankItemsData_Parms;
		ymUpdateClanBankItemsData_Parms.InSourceId = InSourceId;
		ymUpdateClanBankItemsData_Parms.InRevision = InRevision;
		ymUpdateClanBankItemsData_Parms.InCash = InCash;
		memcpy( &ymUpdateClanBankItemsData_Parms.InUpdatedItems, &InUpdatedItems, 0xC );
		ymUpdateClanBankItemsData_Parms.InDeletedItems = InDeletedItems;

		this->ProcessEvent( pfnymUpdateClanBankItemsData, &ymUpdateClanBankItemsData_Parms, NULL );
	};

	void ymInitClanBankItemsData ( int InSourceId, int InRevision, int InCash, TArray< struct FItemDescr > InItems )
	{
		static UFunction* pfnymInitClanBankItemsData = NULL;

		if ( !pfnymInitClanBankItemsData )
			pfnymInitClanBankItemsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitClanBankItemsData" );

		UCCCheatManager_execymInitClanBankItemsData_Parms ymInitClanBankItemsData_Parms;
		ymInitClanBankItemsData_Parms.InSourceId = InSourceId;
		ymInitClanBankItemsData_Parms.InRevision = InRevision;
		ymInitClanBankItemsData_Parms.InCash = InCash;
		memcpy( &ymInitClanBankItemsData_Parms.InItems, &InItems, 0xC );

		this->ProcessEvent( pfnymInitClanBankItemsData, &ymInitClanBankItemsData_Parms, NULL );
	};

	void ymNotifyClanBankTabsDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyClanBankTabsDataRelevancy = NULL;

		if ( !pfnymNotifyClanBankTabsDataRelevancy )
			pfnymNotifyClanBankTabsDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanBankTabsDataRelevancy" );

		UCCCheatManager_execymNotifyClanBankTabsDataRelevancy_Parms ymNotifyClanBankTabsDataRelevancy_Parms;
		ymNotifyClanBankTabsDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyClanBankTabsDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyClanBankTabsDataRelevancy, &ymNotifyClanBankTabsDataRelevancy_Parms, NULL );
	};

	void ymRequestClanBankTabsData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestClanBankTabsData = NULL;

		if ( !pfnymRequestClanBankTabsData )
			pfnymRequestClanBankTabsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestClanBankTabsData" );

		UCCCheatManager_execymRequestClanBankTabsData_Parms ymRequestClanBankTabsData_Parms;
		ymRequestClanBankTabsData_Parms.InSourceId = InSourceId;
		ymRequestClanBankTabsData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestClanBankTabsData, &ymRequestClanBankTabsData_Parms, NULL );
	};

	void ymUpdateClanBankTabsData ( int InSourceId, int InRevision, TArray< struct FClanBankTabInfo > InTabs )
	{
		static UFunction* pfnymUpdateClanBankTabsData = NULL;

		if ( !pfnymUpdateClanBankTabsData )
			pfnymUpdateClanBankTabsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateClanBankTabsData" );

		UCCCheatManager_execymUpdateClanBankTabsData_Parms ymUpdateClanBankTabsData_Parms;
		ymUpdateClanBankTabsData_Parms.InSourceId = InSourceId;
		ymUpdateClanBankTabsData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateClanBankTabsData_Parms.InTabs, &InTabs, 0xC );

		this->ProcessEvent( pfnymUpdateClanBankTabsData, &ymUpdateClanBankTabsData_Parms, NULL );
	};

	void ymInitClanBankTabsData ( int InSourceId, int InRevision, TArray< struct FClanBankTabInfo > InTabs )
	{
		static UFunction* pfnymInitClanBankTabsData = NULL;

		if ( !pfnymInitClanBankTabsData )
			pfnymInitClanBankTabsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitClanBankTabsData" );

		UCCCheatManager_execymInitClanBankTabsData_Parms ymInitClanBankTabsData_Parms;
		ymInitClanBankTabsData_Parms.InSourceId = InSourceId;
		ymInitClanBankTabsData_Parms.InRevision = InRevision;
		memcpy( &ymInitClanBankTabsData_Parms.InTabs, &InTabs, 0xC );

		this->ProcessEvent( pfnymInitClanBankTabsData, &ymInitClanBankTabsData_Parms, NULL );
	};

	void ymNotifyClanRanksTabsDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyClanRanksTabsDataRelevancy = NULL;

		if ( !pfnymNotifyClanRanksTabsDataRelevancy )
			pfnymNotifyClanRanksTabsDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanRanksTabsDataRelevancy" );

		UCCCheatManager_execymNotifyClanRanksTabsDataRelevancy_Parms ymNotifyClanRanksTabsDataRelevancy_Parms;
		ymNotifyClanRanksTabsDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyClanRanksTabsDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyClanRanksTabsDataRelevancy, &ymNotifyClanRanksTabsDataRelevancy_Parms, NULL );
	};

	void ymRequestClanRanksTabsData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestClanRanksTabsData = NULL;

		if ( !pfnymRequestClanRanksTabsData )
			pfnymRequestClanRanksTabsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestClanRanksTabsData" );

		UCCCheatManager_execymRequestClanRanksTabsData_Parms ymRequestClanRanksTabsData_Parms;
		ymRequestClanRanksTabsData_Parms.InSourceId = InSourceId;
		ymRequestClanRanksTabsData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestClanRanksTabsData, &ymRequestClanRanksTabsData_Parms, NULL );
	};

	void ymUpdateClanRanksTabsData ( int InSourceId, int InRevision, TArray< struct FRankTabDescription > InUpdatedRanks, TArray< struct FRankTabDescriptionDeleted > InDeletedRanks )
	{
		static UFunction* pfnymUpdateClanRanksTabsData = NULL;

		if ( !pfnymUpdateClanRanksTabsData )
			pfnymUpdateClanRanksTabsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateClanRanksTabsData" );

		UCCCheatManager_execymUpdateClanRanksTabsData_Parms ymUpdateClanRanksTabsData_Parms;
		ymUpdateClanRanksTabsData_Parms.InSourceId = InSourceId;
		ymUpdateClanRanksTabsData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateClanRanksTabsData_Parms.InUpdatedRanks, &InUpdatedRanks, 0xC );
		memcpy( &ymUpdateClanRanksTabsData_Parms.InDeletedRanks, &InDeletedRanks, 0xC );

		this->ProcessEvent( pfnymUpdateClanRanksTabsData, &ymUpdateClanRanksTabsData_Parms, NULL );
	};

	void ymInitClanRanksTabsData ( int InSourceId, int InRevision, TArray< struct FRankTabDescription > InRanks )
	{
		static UFunction* pfnymInitClanRanksTabsData = NULL;

		if ( !pfnymInitClanRanksTabsData )
			pfnymInitClanRanksTabsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitClanRanksTabsData" );

		UCCCheatManager_execymInitClanRanksTabsData_Parms ymInitClanRanksTabsData_Parms;
		ymInitClanRanksTabsData_Parms.InSourceId = InSourceId;
		ymInitClanRanksTabsData_Parms.InRevision = InRevision;
		memcpy( &ymInitClanRanksTabsData_Parms.InRanks, &InRanks, 0xC );

		this->ProcessEvent( pfnymInitClanRanksTabsData, &ymInitClanRanksTabsData_Parms, NULL );
	};

	void ymNotifyClanRanksDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyClanRanksDataRelevancy = NULL;

		if ( !pfnymNotifyClanRanksDataRelevancy )
			pfnymNotifyClanRanksDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanRanksDataRelevancy" );

		UCCCheatManager_execymNotifyClanRanksDataRelevancy_Parms ymNotifyClanRanksDataRelevancy_Parms;
		ymNotifyClanRanksDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyClanRanksDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyClanRanksDataRelevancy, &ymNotifyClanRanksDataRelevancy_Parms, NULL );
	};

	void ymRequestClanRanksData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestClanRanksData = NULL;

		if ( !pfnymRequestClanRanksData )
			pfnymRequestClanRanksData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestClanRanksData" );

		UCCCheatManager_execymRequestClanRanksData_Parms ymRequestClanRanksData_Parms;
		ymRequestClanRanksData_Parms.InSourceId = InSourceId;
		ymRequestClanRanksData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestClanRanksData, &ymRequestClanRanksData_Parms, NULL );
	};

	void ymUpdateClanRanksData ( int InSourceId, int InRevision, TArray< struct FRankDescription > InUpdatedRanks, TArray< unsigned char > InDeletedRanks )
	{
		static UFunction* pfnymUpdateClanRanksData = NULL;

		if ( !pfnymUpdateClanRanksData )
			pfnymUpdateClanRanksData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateClanRanksData" );

		UCCCheatManager_execymUpdateClanRanksData_Parms ymUpdateClanRanksData_Parms;
		ymUpdateClanRanksData_Parms.InSourceId = InSourceId;
		ymUpdateClanRanksData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateClanRanksData_Parms.InUpdatedRanks, &InUpdatedRanks, 0xC );
		ymUpdateClanRanksData_Parms.InDeletedRanks = InDeletedRanks;

		this->ProcessEvent( pfnymUpdateClanRanksData, &ymUpdateClanRanksData_Parms, NULL );
	};

	void ymInitClanRanksData ( int InSourceId, int InRevision, TArray< struct FRankDescription > InRanks )
	{
		static UFunction* pfnymInitClanRanksData = NULL;

		if ( !pfnymInitClanRanksData )
			pfnymInitClanRanksData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitClanRanksData" );

		UCCCheatManager_execymInitClanRanksData_Parms ymInitClanRanksData_Parms;
		ymInitClanRanksData_Parms.InSourceId = InSourceId;
		ymInitClanRanksData_Parms.InRevision = InRevision;
		memcpy( &ymInitClanRanksData_Parms.InRanks, &InRanks, 0xC );

		this->ProcessEvent( pfnymInitClanRanksData, &ymInitClanRanksData_Parms, NULL );
	};

	void ymNotifyInsideClanInfoDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyInsideClanInfoDataRelevancy = NULL;

		if ( !pfnymNotifyInsideClanInfoDataRelevancy )
			pfnymNotifyInsideClanInfoDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyInsideClanInfoDataRelevancy" );

		UCCCheatManager_execymNotifyInsideClanInfoDataRelevancy_Parms ymNotifyInsideClanInfoDataRelevancy_Parms;
		ymNotifyInsideClanInfoDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyInsideClanInfoDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyInsideClanInfoDataRelevancy, &ymNotifyInsideClanInfoDataRelevancy_Parms, NULL );
	};

	void ymRequestInsideClanInfoData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestInsideClanInfoData = NULL;

		if ( !pfnymRequestInsideClanInfoData )
			pfnymRequestInsideClanInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestInsideClanInfoData" );

		UCCCheatManager_execymRequestInsideClanInfoData_Parms ymRequestInsideClanInfoData_Parms;
		ymRequestInsideClanInfoData_Parms.InSourceId = InSourceId;
		ymRequestInsideClanInfoData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestInsideClanInfoData, &ymRequestInsideClanInfoData_Parms, NULL );
	};

	void ymUpdateInsideClanInfoData ( int InSourceId, int InRevision, struct FString InClanMessage, int InLevel, struct FString InDescription, struct FServerDateTime InChangeLogoNextDate )
	{
		static UFunction* pfnymUpdateInsideClanInfoData = NULL;

		if ( !pfnymUpdateInsideClanInfoData )
			pfnymUpdateInsideClanInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateInsideClanInfoData" );

		UCCCheatManager_execymUpdateInsideClanInfoData_Parms ymUpdateInsideClanInfoData_Parms;
		ymUpdateInsideClanInfoData_Parms.InSourceId = InSourceId;
		ymUpdateInsideClanInfoData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateInsideClanInfoData_Parms.InClanMessage, &InClanMessage, 0xC );
		ymUpdateInsideClanInfoData_Parms.InLevel = InLevel;
		memcpy( &ymUpdateInsideClanInfoData_Parms.InDescription, &InDescription, 0xC );
		memcpy( &ymUpdateInsideClanInfoData_Parms.InChangeLogoNextDate, &InChangeLogoNextDate, 0x8 );

		this->ProcessEvent( pfnymUpdateInsideClanInfoData, &ymUpdateInsideClanInfoData_Parms, NULL );
	};

	void ymInitInsideClanInfoData ( int InSourceId, int InRevision, struct FString InClanMessage, int InLevel, struct FString InDescription, struct FServerDateTime InChangeLogoNextDate )
	{
		static UFunction* pfnymInitInsideClanInfoData = NULL;

		if ( !pfnymInitInsideClanInfoData )
			pfnymInitInsideClanInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitInsideClanInfoData" );

		UCCCheatManager_execymInitInsideClanInfoData_Parms ymInitInsideClanInfoData_Parms;
		ymInitInsideClanInfoData_Parms.InSourceId = InSourceId;
		ymInitInsideClanInfoData_Parms.InRevision = InRevision;
		memcpy( &ymInitInsideClanInfoData_Parms.InClanMessage, &InClanMessage, 0xC );
		ymInitInsideClanInfoData_Parms.InLevel = InLevel;
		memcpy( &ymInitInsideClanInfoData_Parms.InDescription, &InDescription, 0xC );
		memcpy( &ymInitInsideClanInfoData_Parms.InChangeLogoNextDate, &InChangeLogoNextDate, 0x8 );

		this->ProcessEvent( pfnymInitInsideClanInfoData, &ymInitInsideClanInfoData_Parms, NULL );
	};

	void ymNotifyOutsideClanInfoDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyOutsideClanInfoDataRelevancy = NULL;

		if ( !pfnymNotifyOutsideClanInfoDataRelevancy )
			pfnymNotifyOutsideClanInfoDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyOutsideClanInfoDataRelevancy" );

		UCCCheatManager_execymNotifyOutsideClanInfoDataRelevancy_Parms ymNotifyOutsideClanInfoDataRelevancy_Parms;
		ymNotifyOutsideClanInfoDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyOutsideClanInfoDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyOutsideClanInfoDataRelevancy, &ymNotifyOutsideClanInfoDataRelevancy_Parms, NULL );
	};

	void ymRequestOutsideClanInfoData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestOutsideClanInfoData = NULL;

		if ( !pfnymRequestOutsideClanInfoData )
			pfnymRequestOutsideClanInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestOutsideClanInfoData" );

		UCCCheatManager_execymRequestOutsideClanInfoData_Parms ymRequestOutsideClanInfoData_Parms;
		ymRequestOutsideClanInfoData_Parms.InSourceId = InSourceId;
		ymRequestOutsideClanInfoData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestOutsideClanInfoData, &ymRequestOutsideClanInfoData_Parms, NULL );
	};

	void ymUpdateOutsideClanInfoData ( int InSourceId, int InRevision, int InClanLogoId, unsigned char InNameColor, int InClanLogoColorId )
	{
		static UFunction* pfnymUpdateOutsideClanInfoData = NULL;

		if ( !pfnymUpdateOutsideClanInfoData )
			pfnymUpdateOutsideClanInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateOutsideClanInfoData" );

		UCCCheatManager_execymUpdateOutsideClanInfoData_Parms ymUpdateOutsideClanInfoData_Parms;
		ymUpdateOutsideClanInfoData_Parms.InSourceId = InSourceId;
		ymUpdateOutsideClanInfoData_Parms.InRevision = InRevision;
		ymUpdateOutsideClanInfoData_Parms.InClanLogoId = InClanLogoId;
		ymUpdateOutsideClanInfoData_Parms.InNameColor = InNameColor;
		ymUpdateOutsideClanInfoData_Parms.InClanLogoColorId = InClanLogoColorId;

		this->ProcessEvent( pfnymUpdateOutsideClanInfoData, &ymUpdateOutsideClanInfoData_Parms, NULL );
	};

	void ymInitOutsideClanInfoData ( int InSourceId, int InRevision, struct FString InName, int InClanLogoId, unsigned char InNameColor, int InClanLogoColorId )
	{
		static UFunction* pfnymInitOutsideClanInfoData = NULL;

		if ( !pfnymInitOutsideClanInfoData )
			pfnymInitOutsideClanInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitOutsideClanInfoData" );

		UCCCheatManager_execymInitOutsideClanInfoData_Parms ymInitOutsideClanInfoData_Parms;
		ymInitOutsideClanInfoData_Parms.InSourceId = InSourceId;
		ymInitOutsideClanInfoData_Parms.InRevision = InRevision;
		memcpy( &ymInitOutsideClanInfoData_Parms.InName, &InName, 0xC );
		ymInitOutsideClanInfoData_Parms.InClanLogoId = InClanLogoId;
		ymInitOutsideClanInfoData_Parms.InNameColor = InNameColor;
		ymInitOutsideClanInfoData_Parms.InClanLogoColorId = InClanLogoColorId;

		this->ProcessEvent( pfnymInitOutsideClanInfoData, &ymInitOutsideClanInfoData_Parms, NULL );
	};

	void ymNotifyClanCreationInfoDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyClanCreationInfoDataRelevancy = NULL;

		if ( !pfnymNotifyClanCreationInfoDataRelevancy )
			pfnymNotifyClanCreationInfoDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanCreationInfoDataRelevancy" );

		UCCCheatManager_execymNotifyClanCreationInfoDataRelevancy_Parms ymNotifyClanCreationInfoDataRelevancy_Parms;
		ymNotifyClanCreationInfoDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyClanCreationInfoDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyClanCreationInfoDataRelevancy, &ymNotifyClanCreationInfoDataRelevancy_Parms, NULL );
	};

	void ymRequestClanCreationInfoData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestClanCreationInfoData = NULL;

		if ( !pfnymRequestClanCreationInfoData )
			pfnymRequestClanCreationInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestClanCreationInfoData" );

		UCCCheatManager_execymRequestClanCreationInfoData_Parms ymRequestClanCreationInfoData_Parms;
		ymRequestClanCreationInfoData_Parms.InSourceId = InSourceId;
		ymRequestClanCreationInfoData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestClanCreationInfoData, &ymRequestClanCreationInfoData_Parms, NULL );
	};

	void ymUpdateClanCreationInfoData ( int InSourceId, int InRevision, TArray< struct FString > InNewSigners, TArray< struct FString > InDeletedSigners )
	{
		static UFunction* pfnymUpdateClanCreationInfoData = NULL;

		if ( !pfnymUpdateClanCreationInfoData )
			pfnymUpdateClanCreationInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateClanCreationInfoData" );

		UCCCheatManager_execymUpdateClanCreationInfoData_Parms ymUpdateClanCreationInfoData_Parms;
		ymUpdateClanCreationInfoData_Parms.InSourceId = InSourceId;
		ymUpdateClanCreationInfoData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateClanCreationInfoData_Parms.InNewSigners, &InNewSigners, 0xC );
		memcpy( &ymUpdateClanCreationInfoData_Parms.InDeletedSigners, &InDeletedSigners, 0xC );

		this->ProcessEvent( pfnymUpdateClanCreationInfoData, &ymUpdateClanCreationInfoData_Parms, NULL );
	};

	void ymInitClanCreationInfoData ( int InSourceId, int InRevision, unsigned char InRequiredSignsCount, struct FString InClanName, struct FString InClanDescription, struct FString InClanLeaderName, int InClanLogoId, int InClanLogoColorId, int InTimeToExpire, int InTimeToCooldown, TArray< struct FString > InSigners )
	{
		static UFunction* pfnymInitClanCreationInfoData = NULL;

		if ( !pfnymInitClanCreationInfoData )
			pfnymInitClanCreationInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitClanCreationInfoData" );

		UCCCheatManager_execymInitClanCreationInfoData_Parms ymInitClanCreationInfoData_Parms;
		ymInitClanCreationInfoData_Parms.InSourceId = InSourceId;
		ymInitClanCreationInfoData_Parms.InRevision = InRevision;
		ymInitClanCreationInfoData_Parms.InRequiredSignsCount = InRequiredSignsCount;
		memcpy( &ymInitClanCreationInfoData_Parms.InClanName, &InClanName, 0xC );
		memcpy( &ymInitClanCreationInfoData_Parms.InClanDescription, &InClanDescription, 0xC );
		memcpy( &ymInitClanCreationInfoData_Parms.InClanLeaderName, &InClanLeaderName, 0xC );
		ymInitClanCreationInfoData_Parms.InClanLogoId = InClanLogoId;
		ymInitClanCreationInfoData_Parms.InClanLogoColorId = InClanLogoColorId;
		ymInitClanCreationInfoData_Parms.InTimeToExpire = InTimeToExpire;
		ymInitClanCreationInfoData_Parms.InTimeToCooldown = InTimeToCooldown;
		memcpy( &ymInitClanCreationInfoData_Parms.InSigners, &InSigners, 0xC );

		this->ProcessEvent( pfnymInitClanCreationInfoData, &ymInitClanCreationInfoData_Parms, NULL );
	};

	void ymNotifyClanHallInfoDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyClanHallInfoDataRelevancy = NULL;

		if ( !pfnymNotifyClanHallInfoDataRelevancy )
			pfnymNotifyClanHallInfoDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanHallInfoDataRelevancy" );

		UCCCheatManager_execymNotifyClanHallInfoDataRelevancy_Parms ymNotifyClanHallInfoDataRelevancy_Parms;
		ymNotifyClanHallInfoDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyClanHallInfoDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyClanHallInfoDataRelevancy, &ymNotifyClanHallInfoDataRelevancy_Parms, NULL );
	};

	void ymRequestClanHallInfoData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestClanHallInfoData = NULL;

		if ( !pfnymRequestClanHallInfoData )
			pfnymRequestClanHallInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestClanHallInfoData" );

		UCCCheatManager_execymRequestClanHallInfoData_Parms ymRequestClanHallInfoData_Parms;
		ymRequestClanHallInfoData_Parms.InSourceId = InSourceId;
		ymRequestClanHallInfoData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestClanHallInfoData, &ymRequestClanHallInfoData_Parms, NULL );
	};

	void ymUpdateClanHallInfoData ( int InSourceId, int InRevision, int InClanHallTypeId, unsigned char InSpecialization, int InLobbyId )
	{
		static UFunction* pfnymUpdateClanHallInfoData = NULL;

		if ( !pfnymUpdateClanHallInfoData )
			pfnymUpdateClanHallInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateClanHallInfoData" );

		UCCCheatManager_execymUpdateClanHallInfoData_Parms ymUpdateClanHallInfoData_Parms;
		ymUpdateClanHallInfoData_Parms.InSourceId = InSourceId;
		ymUpdateClanHallInfoData_Parms.InRevision = InRevision;
		ymUpdateClanHallInfoData_Parms.InClanHallTypeId = InClanHallTypeId;
		ymUpdateClanHallInfoData_Parms.InSpecialization = InSpecialization;
		ymUpdateClanHallInfoData_Parms.InLobbyId = InLobbyId;

		this->ProcessEvent( pfnymUpdateClanHallInfoData, &ymUpdateClanHallInfoData_Parms, NULL );
	};

	void ymInitClanHallInfoData ( int InSourceId, int InRevision, int InClanHallTypeId, unsigned char InSpecialization, int InLobbyId )
	{
		static UFunction* pfnymInitClanHallInfoData = NULL;

		if ( !pfnymInitClanHallInfoData )
			pfnymInitClanHallInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitClanHallInfoData" );

		UCCCheatManager_execymInitClanHallInfoData_Parms ymInitClanHallInfoData_Parms;
		ymInitClanHallInfoData_Parms.InSourceId = InSourceId;
		ymInitClanHallInfoData_Parms.InRevision = InRevision;
		ymInitClanHallInfoData_Parms.InClanHallTypeId = InClanHallTypeId;
		ymInitClanHallInfoData_Parms.InSpecialization = InSpecialization;
		ymInitClanHallInfoData_Parms.InLobbyId = InLobbyId;

		this->ProcessEvent( pfnymInitClanHallInfoData, &ymInitClanHallInfoData_Parms, NULL );
	};

	void ymNotifyClanHallDenizensDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyClanHallDenizensDataRelevancy = NULL;

		if ( !pfnymNotifyClanHallDenizensDataRelevancy )
			pfnymNotifyClanHallDenizensDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanHallDenizensDataRelevancy" );

		UCCCheatManager_execymNotifyClanHallDenizensDataRelevancy_Parms ymNotifyClanHallDenizensDataRelevancy_Parms;
		ymNotifyClanHallDenizensDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyClanHallDenizensDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyClanHallDenizensDataRelevancy, &ymNotifyClanHallDenizensDataRelevancy_Parms, NULL );
	};

	void ymRequestClanHallDenizensData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestClanHallDenizensData = NULL;

		if ( !pfnymRequestClanHallDenizensData )
			pfnymRequestClanHallDenizensData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestClanHallDenizensData" );

		UCCCheatManager_execymRequestClanHallDenizensData_Parms ymRequestClanHallDenizensData_Parms;
		ymRequestClanHallDenizensData_Parms.InSourceId = InSourceId;
		ymRequestClanHallDenizensData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestClanHallDenizensData, &ymRequestClanHallDenizensData_Parms, NULL );
	};

	void ymUpdateClanHallDenizensData ( int InSourceId, int InRevision, int InClanHallTypeId, unsigned char InSpecialization, int InCurrentCraftFunctionality, int InClanSafeId, int InPostBoxId, int InVendorId, int InEventManagerId, int InClubPorterId, TArray< int > InAddFunctionalities, TArray< int > InDeleteFunctionalities )
	{
		static UFunction* pfnymUpdateClanHallDenizensData = NULL;

		if ( !pfnymUpdateClanHallDenizensData )
			pfnymUpdateClanHallDenizensData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateClanHallDenizensData" );

		UCCCheatManager_execymUpdateClanHallDenizensData_Parms ymUpdateClanHallDenizensData_Parms;
		ymUpdateClanHallDenizensData_Parms.InSourceId = InSourceId;
		ymUpdateClanHallDenizensData_Parms.InRevision = InRevision;
		ymUpdateClanHallDenizensData_Parms.InClanHallTypeId = InClanHallTypeId;
		ymUpdateClanHallDenizensData_Parms.InSpecialization = InSpecialization;
		ymUpdateClanHallDenizensData_Parms.InCurrentCraftFunctionality = InCurrentCraftFunctionality;
		ymUpdateClanHallDenizensData_Parms.InClanSafeId = InClanSafeId;
		ymUpdateClanHallDenizensData_Parms.InPostBoxId = InPostBoxId;
		ymUpdateClanHallDenizensData_Parms.InVendorId = InVendorId;
		ymUpdateClanHallDenizensData_Parms.InEventManagerId = InEventManagerId;
		ymUpdateClanHallDenizensData_Parms.InClubPorterId = InClubPorterId;
		ymUpdateClanHallDenizensData_Parms.InAddFunctionalities = InAddFunctionalities;
		ymUpdateClanHallDenizensData_Parms.InDeleteFunctionalities = InDeleteFunctionalities;

		this->ProcessEvent( pfnymUpdateClanHallDenizensData, &ymUpdateClanHallDenizensData_Parms, NULL );
	};

	void ymInitClanHallDenizensData ( int InSourceId, int InRevision, int InClanHallTypeId, unsigned char InSpecialization, int InCurrentCraftFunctionality, int InSecretatyId, int InPorterId, int InClanSafeId, int InPostBoxId, int InVendorId, int InEventManagerId, int InClubPorterId, TArray< int > InFunctionalities )
	{
		static UFunction* pfnymInitClanHallDenizensData = NULL;

		if ( !pfnymInitClanHallDenizensData )
			pfnymInitClanHallDenizensData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitClanHallDenizensData" );

		UCCCheatManager_execymInitClanHallDenizensData_Parms ymInitClanHallDenizensData_Parms;
		ymInitClanHallDenizensData_Parms.InSourceId = InSourceId;
		ymInitClanHallDenizensData_Parms.InRevision = InRevision;
		ymInitClanHallDenizensData_Parms.InClanHallTypeId = InClanHallTypeId;
		ymInitClanHallDenizensData_Parms.InSpecialization = InSpecialization;
		ymInitClanHallDenizensData_Parms.InCurrentCraftFunctionality = InCurrentCraftFunctionality;
		ymInitClanHallDenizensData_Parms.InSecretatyId = InSecretatyId;
		ymInitClanHallDenizensData_Parms.InPorterId = InPorterId;
		ymInitClanHallDenizensData_Parms.InClanSafeId = InClanSafeId;
		ymInitClanHallDenizensData_Parms.InPostBoxId = InPostBoxId;
		ymInitClanHallDenizensData_Parms.InVendorId = InVendorId;
		ymInitClanHallDenizensData_Parms.InEventManagerId = InEventManagerId;
		ymInitClanHallDenizensData_Parms.InClubPorterId = InClubPorterId;
		ymInitClanHallDenizensData_Parms.InFunctionalities = InFunctionalities;

		this->ProcessEvent( pfnymInitClanHallDenizensData, &ymInitClanHallDenizensData_Parms, NULL );
	};

	void ymNotifyEventManagerMessageDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyEventManagerMessageDataRelevancy = NULL;

		if ( !pfnymNotifyEventManagerMessageDataRelevancy )
			pfnymNotifyEventManagerMessageDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyEventManagerMessageDataRelevancy" );

		UCCCheatManager_execymNotifyEventManagerMessageDataRelevancy_Parms ymNotifyEventManagerMessageDataRelevancy_Parms;
		ymNotifyEventManagerMessageDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyEventManagerMessageDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyEventManagerMessageDataRelevancy, &ymNotifyEventManagerMessageDataRelevancy_Parms, NULL );
	};

	void ymRequestEventManagerMessageData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestEventManagerMessageData = NULL;

		if ( !pfnymRequestEventManagerMessageData )
			pfnymRequestEventManagerMessageData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestEventManagerMessageData" );

		UCCCheatManager_execymRequestEventManagerMessageData_Parms ymRequestEventManagerMessageData_Parms;
		ymRequestEventManagerMessageData_Parms.InSourceId = InSourceId;
		ymRequestEventManagerMessageData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestEventManagerMessageData, &ymRequestEventManagerMessageData_Parms, NULL );
	};

	void ymUpdateEventManagerMessageData ( int InSourceId, int InRevision, struct FServerDateTime InDateTime, int InTypeId, struct FString InTitle, struct FString InText, int InEventDuration, unsigned long InRequestForVisit, TArray< int > InWillComeCharacterIDs, unsigned long InPrivateMessageStatus )
	{
		static UFunction* pfnymUpdateEventManagerMessageData = NULL;

		if ( !pfnymUpdateEventManagerMessageData )
			pfnymUpdateEventManagerMessageData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateEventManagerMessageData" );

		UCCCheatManager_execymUpdateEventManagerMessageData_Parms ymUpdateEventManagerMessageData_Parms;
		ymUpdateEventManagerMessageData_Parms.InSourceId = InSourceId;
		ymUpdateEventManagerMessageData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateEventManagerMessageData_Parms.InDateTime, &InDateTime, 0x8 );
		ymUpdateEventManagerMessageData_Parms.InTypeId = InTypeId;
		memcpy( &ymUpdateEventManagerMessageData_Parms.InTitle, &InTitle, 0xC );
		memcpy( &ymUpdateEventManagerMessageData_Parms.InText, &InText, 0xC );
		ymUpdateEventManagerMessageData_Parms.InEventDuration = InEventDuration;
		ymUpdateEventManagerMessageData_Parms.InRequestForVisit = InRequestForVisit;
		ymUpdateEventManagerMessageData_Parms.InWillComeCharacterIDs = InWillComeCharacterIDs;
		ymUpdateEventManagerMessageData_Parms.InPrivateMessageStatus = InPrivateMessageStatus;

		this->ProcessEvent( pfnymUpdateEventManagerMessageData, &ymUpdateEventManagerMessageData_Parms, NULL );
	};

	void ymInitEventManagerMessageData ( int InSourceId, int InRevision, int InCreatorId, struct FServerDateTime InDateTime, int InTypeId, struct FString InTitle, struct FString InText, TArray< unsigned char > InRankIDs, int InEventDuration, int InMinCharacterLevel, int InMaxCharacterLevel, unsigned long InRequestForVisit, TArray< int > InWillComeCharacterIDs, unsigned long InPrivateMessageStatus )
	{
		static UFunction* pfnymInitEventManagerMessageData = NULL;

		if ( !pfnymInitEventManagerMessageData )
			pfnymInitEventManagerMessageData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitEventManagerMessageData" );

		UCCCheatManager_execymInitEventManagerMessageData_Parms ymInitEventManagerMessageData_Parms;
		ymInitEventManagerMessageData_Parms.InSourceId = InSourceId;
		ymInitEventManagerMessageData_Parms.InRevision = InRevision;
		ymInitEventManagerMessageData_Parms.InCreatorId = InCreatorId;
		memcpy( &ymInitEventManagerMessageData_Parms.InDateTime, &InDateTime, 0x8 );
		ymInitEventManagerMessageData_Parms.InTypeId = InTypeId;
		memcpy( &ymInitEventManagerMessageData_Parms.InTitle, &InTitle, 0xC );
		memcpy( &ymInitEventManagerMessageData_Parms.InText, &InText, 0xC );
		ymInitEventManagerMessageData_Parms.InRankIDs = InRankIDs;
		ymInitEventManagerMessageData_Parms.InEventDuration = InEventDuration;
		ymInitEventManagerMessageData_Parms.InMinCharacterLevel = InMinCharacterLevel;
		ymInitEventManagerMessageData_Parms.InMaxCharacterLevel = InMaxCharacterLevel;
		ymInitEventManagerMessageData_Parms.InRequestForVisit = InRequestForVisit;
		ymInitEventManagerMessageData_Parms.InWillComeCharacterIDs = InWillComeCharacterIDs;
		ymInitEventManagerMessageData_Parms.InPrivateMessageStatus = InPrivateMessageStatus;

		this->ProcessEvent( pfnymInitEventManagerMessageData, &ymInitEventManagerMessageData_Parms, NULL );
	};

	void ymNotifyClanHallSlotsDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyClanHallSlotsDataRelevancy = NULL;

		if ( !pfnymNotifyClanHallSlotsDataRelevancy )
			pfnymNotifyClanHallSlotsDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanHallSlotsDataRelevancy" );

		UCCCheatManager_execymNotifyClanHallSlotsDataRelevancy_Parms ymNotifyClanHallSlotsDataRelevancy_Parms;
		ymNotifyClanHallSlotsDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyClanHallSlotsDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyClanHallSlotsDataRelevancy, &ymNotifyClanHallSlotsDataRelevancy_Parms, NULL );
	};

	void ymRequestClanHallSlotsData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestClanHallSlotsData = NULL;

		if ( !pfnymRequestClanHallSlotsData )
			pfnymRequestClanHallSlotsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestClanHallSlotsData" );

		UCCCheatManager_execymRequestClanHallSlotsData_Parms ymRequestClanHallSlotsData_Parms;
		ymRequestClanHallSlotsData_Parms.InSourceId = InSourceId;
		ymRequestClanHallSlotsData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestClanHallSlotsData, &ymRequestClanHallSlotsData_Parms, NULL );
	};

	void ymUpdateClanHallSlotsData ( int InSourceId, int InRevision, TArray< unsigned char > InAddedBuffSlots, TArray< unsigned char > InAddedVisualizationSlots )
	{
		static UFunction* pfnymUpdateClanHallSlotsData = NULL;

		if ( !pfnymUpdateClanHallSlotsData )
			pfnymUpdateClanHallSlotsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateClanHallSlotsData" );

		UCCCheatManager_execymUpdateClanHallSlotsData_Parms ymUpdateClanHallSlotsData_Parms;
		ymUpdateClanHallSlotsData_Parms.InSourceId = InSourceId;
		ymUpdateClanHallSlotsData_Parms.InRevision = InRevision;
		ymUpdateClanHallSlotsData_Parms.InAddedBuffSlots = InAddedBuffSlots;
		ymUpdateClanHallSlotsData_Parms.InAddedVisualizationSlots = InAddedVisualizationSlots;

		this->ProcessEvent( pfnymUpdateClanHallSlotsData, &ymUpdateClanHallSlotsData_Parms, NULL );
	};

	void ymInitClanHallSlotsData ( int InSourceId, int InRevision, TArray< unsigned char > InBuffSlots, TArray< unsigned char > InVisualizationSlots )
	{
		static UFunction* pfnymInitClanHallSlotsData = NULL;

		if ( !pfnymInitClanHallSlotsData )
			pfnymInitClanHallSlotsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitClanHallSlotsData" );

		UCCCheatManager_execymInitClanHallSlotsData_Parms ymInitClanHallSlotsData_Parms;
		ymInitClanHallSlotsData_Parms.InSourceId = InSourceId;
		ymInitClanHallSlotsData_Parms.InRevision = InRevision;
		ymInitClanHallSlotsData_Parms.InBuffSlots = InBuffSlots;
		ymInitClanHallSlotsData_Parms.InVisualizationSlots = InVisualizationSlots;

		this->ProcessEvent( pfnymInitClanHallSlotsData, &ymInitClanHallSlotsData_Parms, NULL );
	};

	void ymNotifyClanBankTabsWithdrawedDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyClanBankTabsWithdrawedDataRelevancy = NULL;

		if ( !pfnymNotifyClanBankTabsWithdrawedDataRelevancy )
			pfnymNotifyClanBankTabsWithdrawedDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanBankTabsWithdrawedDataRelevancy" );

		UCCCheatManager_execymNotifyClanBankTabsWithdrawedDataRelevancy_Parms ymNotifyClanBankTabsWithdrawedDataRelevancy_Parms;
		ymNotifyClanBankTabsWithdrawedDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyClanBankTabsWithdrawedDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyClanBankTabsWithdrawedDataRelevancy, &ymNotifyClanBankTabsWithdrawedDataRelevancy_Parms, NULL );
	};

	void ymRequestClanBankTabsWithdrawedData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestClanBankTabsWithdrawedData = NULL;

		if ( !pfnymRequestClanBankTabsWithdrawedData )
			pfnymRequestClanBankTabsWithdrawedData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestClanBankTabsWithdrawedData" );

		UCCCheatManager_execymRequestClanBankTabsWithdrawedData_Parms ymRequestClanBankTabsWithdrawedData_Parms;
		ymRequestClanBankTabsWithdrawedData_Parms.InSourceId = InSourceId;
		ymRequestClanBankTabsWithdrawedData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestClanBankTabsWithdrawedData, &ymRequestClanBankTabsWithdrawedData_Parms, NULL );
	};

	void ymUpdateClanBankTabsWithdrawedData ( int InSourceId, int InRevision, int InCash, TArray< struct FClanBankTabWithdrawed > InUpdatedTabsWithdrawed )
	{
		static UFunction* pfnymUpdateClanBankTabsWithdrawedData = NULL;

		if ( !pfnymUpdateClanBankTabsWithdrawedData )
			pfnymUpdateClanBankTabsWithdrawedData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateClanBankTabsWithdrawedData" );

		UCCCheatManager_execymUpdateClanBankTabsWithdrawedData_Parms ymUpdateClanBankTabsWithdrawedData_Parms;
		ymUpdateClanBankTabsWithdrawedData_Parms.InSourceId = InSourceId;
		ymUpdateClanBankTabsWithdrawedData_Parms.InRevision = InRevision;
		ymUpdateClanBankTabsWithdrawedData_Parms.InCash = InCash;
		memcpy( &ymUpdateClanBankTabsWithdrawedData_Parms.InUpdatedTabsWithdrawed, &InUpdatedTabsWithdrawed, 0xC );

		this->ProcessEvent( pfnymUpdateClanBankTabsWithdrawedData, &ymUpdateClanBankTabsWithdrawedData_Parms, NULL );
	};

	void ymInitClanBankTabsWithdrawedData ( int InSourceId, int InRevision, int InCash, TArray< struct FClanBankTabWithdrawed > InTabsWithdrawed )
	{
		static UFunction* pfnymInitClanBankTabsWithdrawedData = NULL;

		if ( !pfnymInitClanBankTabsWithdrawedData )
			pfnymInitClanBankTabsWithdrawedData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitClanBankTabsWithdrawedData" );

		UCCCheatManager_execymInitClanBankTabsWithdrawedData_Parms ymInitClanBankTabsWithdrawedData_Parms;
		ymInitClanBankTabsWithdrawedData_Parms.InSourceId = InSourceId;
		ymInitClanBankTabsWithdrawedData_Parms.InRevision = InRevision;
		ymInitClanBankTabsWithdrawedData_Parms.InCash = InCash;
		memcpy( &ymInitClanBankTabsWithdrawedData_Parms.InTabsWithdrawed, &InTabsWithdrawed, 0xC );

		this->ProcessEvent( pfnymInitClanBankTabsWithdrawedData, &ymInitClanBankTabsWithdrawedData_Parms, NULL );
	};

	void ymNotifyBlackListDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyBlackListDataRelevancy = NULL;

		if ( !pfnymNotifyBlackListDataRelevancy )
			pfnymNotifyBlackListDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyBlackListDataRelevancy" );

		UCCCheatManager_execymNotifyBlackListDataRelevancy_Parms ymNotifyBlackListDataRelevancy_Parms;
		ymNotifyBlackListDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyBlackListDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyBlackListDataRelevancy, &ymNotifyBlackListDataRelevancy_Parms, NULL );
	};

	void ymRequestBlackListData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestBlackListData = NULL;

		if ( !pfnymRequestBlackListData )
			pfnymRequestBlackListData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestBlackListData" );

		UCCCheatManager_execymRequestBlackListData_Parms ymRequestBlackListData_Parms;
		ymRequestBlackListData_Parms.InSourceId = InSourceId;
		ymRequestBlackListData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestBlackListData, &ymRequestBlackListData_Parms, NULL );
	};

	void ymUpdateBlackListData ( int InSourceId, int InRevision, TArray< struct FBlackListCharacterInfo > InUpdatedFoes, TArray< int > InDeletedFoes )
	{
		static UFunction* pfnymUpdateBlackListData = NULL;

		if ( !pfnymUpdateBlackListData )
			pfnymUpdateBlackListData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateBlackListData" );

		UCCCheatManager_execymUpdateBlackListData_Parms ymUpdateBlackListData_Parms;
		ymUpdateBlackListData_Parms.InSourceId = InSourceId;
		ymUpdateBlackListData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateBlackListData_Parms.InUpdatedFoes, &InUpdatedFoes, 0xC );
		ymUpdateBlackListData_Parms.InDeletedFoes = InDeletedFoes;

		this->ProcessEvent( pfnymUpdateBlackListData, &ymUpdateBlackListData_Parms, NULL );
	};

	void ymInitBlackListData ( int InSourceId, int InRevision, TArray< struct FBlackListCharacterInfo > InFoes )
	{
		static UFunction* pfnymInitBlackListData = NULL;

		if ( !pfnymInitBlackListData )
			pfnymInitBlackListData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitBlackListData" );

		UCCCheatManager_execymInitBlackListData_Parms ymInitBlackListData_Parms;
		ymInitBlackListData_Parms.InSourceId = InSourceId;
		ymInitBlackListData_Parms.InRevision = InRevision;
		memcpy( &ymInitBlackListData_Parms.InFoes, &InFoes, 0xC );

		this->ProcessEvent( pfnymInitBlackListData, &ymInitBlackListData_Parms, NULL );
	};

	void ymNotifyFriendListDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyFriendListDataRelevancy = NULL;

		if ( !pfnymNotifyFriendListDataRelevancy )
			pfnymNotifyFriendListDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyFriendListDataRelevancy" );

		UCCCheatManager_execymNotifyFriendListDataRelevancy_Parms ymNotifyFriendListDataRelevancy_Parms;
		ymNotifyFriendListDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyFriendListDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyFriendListDataRelevancy, &ymNotifyFriendListDataRelevancy_Parms, NULL );
	};

	void ymRequestFriendListData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestFriendListData = NULL;

		if ( !pfnymRequestFriendListData )
			pfnymRequestFriendListData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestFriendListData" );

		UCCCheatManager_execymRequestFriendListData_Parms ymRequestFriendListData_Parms;
		ymRequestFriendListData_Parms.InSourceId = InSourceId;
		ymRequestFriendListData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestFriendListData, &ymRequestFriendListData_Parms, NULL );
	};

	void ymUpdateFriendListData ( int InSourceId, int InRevision, TArray< struct FFriendListCharacterInfo > InUpdatedFriends, TArray< int > InDeletedFriends )
	{
		static UFunction* pfnymUpdateFriendListData = NULL;

		if ( !pfnymUpdateFriendListData )
			pfnymUpdateFriendListData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateFriendListData" );

		UCCCheatManager_execymUpdateFriendListData_Parms ymUpdateFriendListData_Parms;
		ymUpdateFriendListData_Parms.InSourceId = InSourceId;
		ymUpdateFriendListData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateFriendListData_Parms.InUpdatedFriends, &InUpdatedFriends, 0xC );
		ymUpdateFriendListData_Parms.InDeletedFriends = InDeletedFriends;

		this->ProcessEvent( pfnymUpdateFriendListData, &ymUpdateFriendListData_Parms, NULL );
	};

	void ymInitFriendListData ( int InSourceId, int InRevision, TArray< struct FFriendListCharacterInfo > InFriends )
	{
		static UFunction* pfnymInitFriendListData = NULL;

		if ( !pfnymInitFriendListData )
			pfnymInitFriendListData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitFriendListData" );

		UCCCheatManager_execymInitFriendListData_Parms ymInitFriendListData_Parms;
		ymInitFriendListData_Parms.InSourceId = InSourceId;
		ymInitFriendListData_Parms.InRevision = InRevision;
		memcpy( &ymInitFriendListData_Parms.InFriends, &InFriends, 0xC );

		this->ProcessEvent( pfnymInitFriendListData, &ymInitFriendListData_Parms, NULL );
	};

	void ymNotifyFriendListGroupsDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyFriendListGroupsDataRelevancy = NULL;

		if ( !pfnymNotifyFriendListGroupsDataRelevancy )
			pfnymNotifyFriendListGroupsDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyFriendListGroupsDataRelevancy" );

		UCCCheatManager_execymNotifyFriendListGroupsDataRelevancy_Parms ymNotifyFriendListGroupsDataRelevancy_Parms;
		ymNotifyFriendListGroupsDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyFriendListGroupsDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyFriendListGroupsDataRelevancy, &ymNotifyFriendListGroupsDataRelevancy_Parms, NULL );
	};

	void ymRequestFriendListGroupsData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestFriendListGroupsData = NULL;

		if ( !pfnymRequestFriendListGroupsData )
			pfnymRequestFriendListGroupsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestFriendListGroupsData" );

		UCCCheatManager_execymRequestFriendListGroupsData_Parms ymRequestFriendListGroupsData_Parms;
		ymRequestFriendListGroupsData_Parms.InSourceId = InSourceId;
		ymRequestFriendListGroupsData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestFriendListGroupsData, &ymRequestFriendListGroupsData_Parms, NULL );
	};

	void ymUpdateFriendListGroupsData ( int InSourceId, int InRevision, TArray< struct FFriendListGroupInfo > InUpdatedFriendListGroups, TArray< int > InDeletedFriendListGroups )
	{
		static UFunction* pfnymUpdateFriendListGroupsData = NULL;

		if ( !pfnymUpdateFriendListGroupsData )
			pfnymUpdateFriendListGroupsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateFriendListGroupsData" );

		UCCCheatManager_execymUpdateFriendListGroupsData_Parms ymUpdateFriendListGroupsData_Parms;
		ymUpdateFriendListGroupsData_Parms.InSourceId = InSourceId;
		ymUpdateFriendListGroupsData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateFriendListGroupsData_Parms.InUpdatedFriendListGroups, &InUpdatedFriendListGroups, 0xC );
		ymUpdateFriendListGroupsData_Parms.InDeletedFriendListGroups = InDeletedFriendListGroups;

		this->ProcessEvent( pfnymUpdateFriendListGroupsData, &ymUpdateFriendListGroupsData_Parms, NULL );
	};

	void ymInitFriendListGroupsData ( int InSourceId, int InRevision, TArray< struct FFriendListGroupInfo > InGroups )
	{
		static UFunction* pfnymInitFriendListGroupsData = NULL;

		if ( !pfnymInitFriendListGroupsData )
			pfnymInitFriendListGroupsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitFriendListGroupsData" );

		UCCCheatManager_execymInitFriendListGroupsData_Parms ymInitFriendListGroupsData_Parms;
		ymInitFriendListGroupsData_Parms.InSourceId = InSourceId;
		ymInitFriendListGroupsData_Parms.InRevision = InRevision;
		memcpy( &ymInitFriendListGroupsData_Parms.InGroups, &InGroups, 0xC );

		this->ProcessEvent( pfnymInitFriendListGroupsData, &ymInitFriendListGroupsData_Parms, NULL );
	};

	void ymNotifyCharacterInfoDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyCharacterInfoDataRelevancy = NULL;

		if ( !pfnymNotifyCharacterInfoDataRelevancy )
			pfnymNotifyCharacterInfoDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyCharacterInfoDataRelevancy" );

		UCCCheatManager_execymNotifyCharacterInfoDataRelevancy_Parms ymNotifyCharacterInfoDataRelevancy_Parms;
		ymNotifyCharacterInfoDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyCharacterInfoDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyCharacterInfoDataRelevancy, &ymNotifyCharacterInfoDataRelevancy_Parms, NULL );
	};

	void ymRequestCharacterInfoData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestCharacterInfoData = NULL;

		if ( !pfnymRequestCharacterInfoData )
			pfnymRequestCharacterInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestCharacterInfoData" );

		UCCCheatManager_execymRequestCharacterInfoData_Parms ymRequestCharacterInfoData_Parms;
		ymRequestCharacterInfoData_Parms.InSourceId = InSourceId;
		ymRequestCharacterInfoData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestCharacterInfoData, &ymRequestCharacterInfoData_Parms, NULL );
	};

	void ymUpdateCharacterInfoData ( int InSourceId, int InRevision, int InClanId, int InLevel, int InPvPTitleId, int InTitleId, struct FCharacterAppearance InAppearance, struct FServerDateTime InGoesOfflineTime )
	{
		static UFunction* pfnymUpdateCharacterInfoData = NULL;

		if ( !pfnymUpdateCharacterInfoData )
			pfnymUpdateCharacterInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateCharacterInfoData" );

		UCCCheatManager_execymUpdateCharacterInfoData_Parms ymUpdateCharacterInfoData_Parms;
		ymUpdateCharacterInfoData_Parms.InSourceId = InSourceId;
		ymUpdateCharacterInfoData_Parms.InRevision = InRevision;
		ymUpdateCharacterInfoData_Parms.InClanId = InClanId;
		ymUpdateCharacterInfoData_Parms.InLevel = InLevel;
		ymUpdateCharacterInfoData_Parms.InPvPTitleId = InPvPTitleId;
		ymUpdateCharacterInfoData_Parms.InTitleId = InTitleId;
		memcpy( &ymUpdateCharacterInfoData_Parms.InAppearance, &InAppearance, 0x8 );
		memcpy( &ymUpdateCharacterInfoData_Parms.InGoesOfflineTime, &InGoesOfflineTime, 0x8 );

		this->ProcessEvent( pfnymUpdateCharacterInfoData, &ymUpdateCharacterInfoData_Parms, NULL );
	};

	void ymInitCharacterInfoData ( int InSourceId, int InRevision, struct FString InCharacterName, int InClanId, unsigned char InLevel, unsigned char InClassId, int InPvPTitleId, int InTitleId, struct FCharacterAppearance InAppearance, struct FServerDateTime InGoesOfflineTime )
	{
		static UFunction* pfnymInitCharacterInfoData = NULL;

		if ( !pfnymInitCharacterInfoData )
			pfnymInitCharacterInfoData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitCharacterInfoData" );

		UCCCheatManager_execymInitCharacterInfoData_Parms ymInitCharacterInfoData_Parms;
		ymInitCharacterInfoData_Parms.InSourceId = InSourceId;
		ymInitCharacterInfoData_Parms.InRevision = InRevision;
		memcpy( &ymInitCharacterInfoData_Parms.InCharacterName, &InCharacterName, 0xC );
		ymInitCharacterInfoData_Parms.InClanId = InClanId;
		ymInitCharacterInfoData_Parms.InLevel = InLevel;
		ymInitCharacterInfoData_Parms.InClassId = InClassId;
		ymInitCharacterInfoData_Parms.InPvPTitleId = InPvPTitleId;
		ymInitCharacterInfoData_Parms.InTitleId = InTitleId;
		memcpy( &ymInitCharacterInfoData_Parms.InAppearance, &InAppearance, 0x8 );
		memcpy( &ymInitCharacterInfoData_Parms.InGoesOfflineTime, &InGoesOfflineTime, 0x8 );

		this->ProcessEvent( pfnymInitCharacterInfoData, &ymInitCharacterInfoData_Parms, NULL );
	};

	void ymNotifyBankTabsDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyBankTabsDataRelevancy = NULL;

		if ( !pfnymNotifyBankTabsDataRelevancy )
			pfnymNotifyBankTabsDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyBankTabsDataRelevancy" );

		UCCCheatManager_execymNotifyBankTabsDataRelevancy_Parms ymNotifyBankTabsDataRelevancy_Parms;
		ymNotifyBankTabsDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyBankTabsDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyBankTabsDataRelevancy, &ymNotifyBankTabsDataRelevancy_Parms, NULL );
	};

	void ymRequestBankTabsData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestBankTabsData = NULL;

		if ( !pfnymRequestBankTabsData )
			pfnymRequestBankTabsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestBankTabsData" );

		UCCCheatManager_execymRequestBankTabsData_Parms ymRequestBankTabsData_Parms;
		ymRequestBankTabsData_Parms.InSourceId = InSourceId;
		ymRequestBankTabsData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestBankTabsData, &ymRequestBankTabsData_Parms, NULL );
	};

	void ymUpdateBankTabsData ( int InSourceId, int InRevision, TArray< struct FBankTabDesc > InUpdatedTabs )
	{
		static UFunction* pfnymUpdateBankTabsData = NULL;

		if ( !pfnymUpdateBankTabsData )
			pfnymUpdateBankTabsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateBankTabsData" );

		UCCCheatManager_execymUpdateBankTabsData_Parms ymUpdateBankTabsData_Parms;
		ymUpdateBankTabsData_Parms.InSourceId = InSourceId;
		ymUpdateBankTabsData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateBankTabsData_Parms.InUpdatedTabs, &InUpdatedTabs, 0xC );

		this->ProcessEvent( pfnymUpdateBankTabsData, &ymUpdateBankTabsData_Parms, NULL );
	};

	void ymInitBankTabsData ( int InSourceId, int InRevision, TArray< struct FBankTabDesc > InTabs )
	{
		static UFunction* pfnymInitBankTabsData = NULL;

		if ( !pfnymInitBankTabsData )
			pfnymInitBankTabsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitBankTabsData" );

		UCCCheatManager_execymInitBankTabsData_Parms ymInitBankTabsData_Parms;
		ymInitBankTabsData_Parms.InSourceId = InSourceId;
		ymInitBankTabsData_Parms.InRevision = InRevision;
		memcpy( &ymInitBankTabsData_Parms.InTabs, &InTabs, 0xC );

		this->ProcessEvent( pfnymInitBankTabsData, &ymInitBankTabsData_Parms, NULL );
	};

	void ymNotifyMineAuctionLotBidDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyMineAuctionLotBidDataRelevancy = NULL;

		if ( !pfnymNotifyMineAuctionLotBidDataRelevancy )
			pfnymNotifyMineAuctionLotBidDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyMineAuctionLotBidDataRelevancy" );

		UCCCheatManager_execymNotifyMineAuctionLotBidDataRelevancy_Parms ymNotifyMineAuctionLotBidDataRelevancy_Parms;
		ymNotifyMineAuctionLotBidDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyMineAuctionLotBidDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyMineAuctionLotBidDataRelevancy, &ymNotifyMineAuctionLotBidDataRelevancy_Parms, NULL );
	};

	void ymRequestMineAuctionLotBidData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestMineAuctionLotBidData = NULL;

		if ( !pfnymRequestMineAuctionLotBidData )
			pfnymRequestMineAuctionLotBidData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestMineAuctionLotBidData" );

		UCCCheatManager_execymRequestMineAuctionLotBidData_Parms ymRequestMineAuctionLotBidData_Parms;
		ymRequestMineAuctionLotBidData_Parms.InSourceId = InSourceId;
		ymRequestMineAuctionLotBidData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestMineAuctionLotBidData, &ymRequestMineAuctionLotBidData_Parms, NULL );
	};

	void ymUpdateMineAuctionLotBidData ( int InSourceId, int InRevision, unsigned char InState, int InBidderId, int InBid )
	{
		static UFunction* pfnymUpdateMineAuctionLotBidData = NULL;

		if ( !pfnymUpdateMineAuctionLotBidData )
			pfnymUpdateMineAuctionLotBidData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateMineAuctionLotBidData" );

		UCCCheatManager_execymUpdateMineAuctionLotBidData_Parms ymUpdateMineAuctionLotBidData_Parms;
		ymUpdateMineAuctionLotBidData_Parms.InSourceId = InSourceId;
		ymUpdateMineAuctionLotBidData_Parms.InRevision = InRevision;
		ymUpdateMineAuctionLotBidData_Parms.InState = InState;
		ymUpdateMineAuctionLotBidData_Parms.InBidderId = InBidderId;
		ymUpdateMineAuctionLotBidData_Parms.InBid = InBid;

		this->ProcessEvent( pfnymUpdateMineAuctionLotBidData, &ymUpdateMineAuctionLotBidData_Parms, NULL );
	};

	void ymInitMineAuctionLotBidData ( int InSourceId, int InRevision, struct FItemDescription InItem, int InSellerId, struct FString InSellerName, int InBidderId, int InBuyoutPrice, int InBid, int InBidStep, int InLeftTime )
	{
		static UFunction* pfnymInitMineAuctionLotBidData = NULL;

		if ( !pfnymInitMineAuctionLotBidData )
			pfnymInitMineAuctionLotBidData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitMineAuctionLotBidData" );

		UCCCheatManager_execymInitMineAuctionLotBidData_Parms ymInitMineAuctionLotBidData_Parms;
		ymInitMineAuctionLotBidData_Parms.InSourceId = InSourceId;
		ymInitMineAuctionLotBidData_Parms.InRevision = InRevision;
		memcpy( &ymInitMineAuctionLotBidData_Parms.InItem, &InItem, 0x2C );
		ymInitMineAuctionLotBidData_Parms.InSellerId = InSellerId;
		memcpy( &ymInitMineAuctionLotBidData_Parms.InSellerName, &InSellerName, 0xC );
		ymInitMineAuctionLotBidData_Parms.InBidderId = InBidderId;
		ymInitMineAuctionLotBidData_Parms.InBuyoutPrice = InBuyoutPrice;
		ymInitMineAuctionLotBidData_Parms.InBid = InBid;
		ymInitMineAuctionLotBidData_Parms.InBidStep = InBidStep;
		ymInitMineAuctionLotBidData_Parms.InLeftTime = InLeftTime;

		this->ProcessEvent( pfnymInitMineAuctionLotBidData, &ymInitMineAuctionLotBidData_Parms, NULL );
	};

	void ymNotifyMineAuctionLotsDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyMineAuctionLotsDataRelevancy = NULL;

		if ( !pfnymNotifyMineAuctionLotsDataRelevancy )
			pfnymNotifyMineAuctionLotsDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyMineAuctionLotsDataRelevancy" );

		UCCCheatManager_execymNotifyMineAuctionLotsDataRelevancy_Parms ymNotifyMineAuctionLotsDataRelevancy_Parms;
		ymNotifyMineAuctionLotsDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyMineAuctionLotsDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyMineAuctionLotsDataRelevancy, &ymNotifyMineAuctionLotsDataRelevancy_Parms, NULL );
	};

	void ymRequestMineAuctionLotsData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestMineAuctionLotsData = NULL;

		if ( !pfnymRequestMineAuctionLotsData )
			pfnymRequestMineAuctionLotsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestMineAuctionLotsData" );

		UCCCheatManager_execymRequestMineAuctionLotsData_Parms ymRequestMineAuctionLotsData_Parms;
		ymRequestMineAuctionLotsData_Parms.InSourceId = InSourceId;
		ymRequestMineAuctionLotsData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestMineAuctionLotsData, &ymRequestMineAuctionLotsData_Parms, NULL );
	};

	void ymUpdateMineAuctionLotsData ( int InSourceId, int InRevision, TArray< struct FLotDesc > InLotsAdded, TArray< struct FLotDescUpdate > InLotsUpdated, TArray< int > InLotsDeleted )
	{
		static UFunction* pfnymUpdateMineAuctionLotsData = NULL;

		if ( !pfnymUpdateMineAuctionLotsData )
			pfnymUpdateMineAuctionLotsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateMineAuctionLotsData" );

		UCCCheatManager_execymUpdateMineAuctionLotsData_Parms ymUpdateMineAuctionLotsData_Parms;
		ymUpdateMineAuctionLotsData_Parms.InSourceId = InSourceId;
		ymUpdateMineAuctionLotsData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateMineAuctionLotsData_Parms.InLotsAdded, &InLotsAdded, 0xC );
		memcpy( &ymUpdateMineAuctionLotsData_Parms.InLotsUpdated, &InLotsUpdated, 0xC );
		ymUpdateMineAuctionLotsData_Parms.InLotsDeleted = InLotsDeleted;

		this->ProcessEvent( pfnymUpdateMineAuctionLotsData, &ymUpdateMineAuctionLotsData_Parms, NULL );
	};

	void ymInitMineAuctionLotsData ( int InSourceId, int InRevision, TArray< struct FLotDesc > InLots )
	{
		static UFunction* pfnymInitMineAuctionLotsData = NULL;

		if ( !pfnymInitMineAuctionLotsData )
			pfnymInitMineAuctionLotsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitMineAuctionLotsData" );

		UCCCheatManager_execymInitMineAuctionLotsData_Parms ymInitMineAuctionLotsData_Parms;
		ymInitMineAuctionLotsData_Parms.InSourceId = InSourceId;
		ymInitMineAuctionLotsData_Parms.InRevision = InRevision;
		memcpy( &ymInitMineAuctionLotsData_Parms.InLots, &InLots, 0xC );

		this->ProcessEvent( pfnymInitMineAuctionLotsData, &ymInitMineAuctionLotsData_Parms, NULL );
	};

	void ymNotifyClanAchievementsDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyClanAchievementsDataRelevancy = NULL;

		if ( !pfnymNotifyClanAchievementsDataRelevancy )
			pfnymNotifyClanAchievementsDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanAchievementsDataRelevancy" );

		UCCCheatManager_execymNotifyClanAchievementsDataRelevancy_Parms ymNotifyClanAchievementsDataRelevancy_Parms;
		ymNotifyClanAchievementsDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyClanAchievementsDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyClanAchievementsDataRelevancy, &ymNotifyClanAchievementsDataRelevancy_Parms, NULL );
	};

	void ymRequestClanAchievementsData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestClanAchievementsData = NULL;

		if ( !pfnymRequestClanAchievementsData )
			pfnymRequestClanAchievementsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestClanAchievementsData" );

		UCCCheatManager_execymRequestClanAchievementsData_Parms ymRequestClanAchievementsData_Parms;
		ymRequestClanAchievementsData_Parms.InSourceId = InSourceId;
		ymRequestClanAchievementsData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestClanAchievementsData, &ymRequestClanAchievementsData_Parms, NULL );
	};

	void ymUpdateClanAchievementsData ( int InSourceId, int InRevision, TArray< struct FClanAchievementDescription > InClanAchievements )
	{
		static UFunction* pfnymUpdateClanAchievementsData = NULL;

		if ( !pfnymUpdateClanAchievementsData )
			pfnymUpdateClanAchievementsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateClanAchievementsData" );

		UCCCheatManager_execymUpdateClanAchievementsData_Parms ymUpdateClanAchievementsData_Parms;
		ymUpdateClanAchievementsData_Parms.InSourceId = InSourceId;
		ymUpdateClanAchievementsData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateClanAchievementsData_Parms.InClanAchievements, &InClanAchievements, 0xC );

		this->ProcessEvent( pfnymUpdateClanAchievementsData, &ymUpdateClanAchievementsData_Parms, NULL );
	};

	void ymInitClanAchievementsData ( int InSourceId, int InRevision, TArray< struct FClanAchievementDescription > InClanAchievements )
	{
		static UFunction* pfnymInitClanAchievementsData = NULL;

		if ( !pfnymInitClanAchievementsData )
			pfnymInitClanAchievementsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitClanAchievementsData" );

		UCCCheatManager_execymInitClanAchievementsData_Parms ymInitClanAchievementsData_Parms;
		ymInitClanAchievementsData_Parms.InSourceId = InSourceId;
		ymInitClanAchievementsData_Parms.InRevision = InRevision;
		memcpy( &ymInitClanAchievementsData_Parms.InClanAchievements, &InClanAchievements, 0xC );

		this->ProcessEvent( pfnymInitClanAchievementsData, &ymInitClanAchievementsData_Parms, NULL );
	};

	void ymNotifyAchievementsDataRelevancy ( int InSourceId, int InRevision )
	{
		static UFunction* pfnymNotifyAchievementsDataRelevancy = NULL;

		if ( !pfnymNotifyAchievementsDataRelevancy )
			pfnymNotifyAchievementsDataRelevancy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyAchievementsDataRelevancy" );

		UCCCheatManager_execymNotifyAchievementsDataRelevancy_Parms ymNotifyAchievementsDataRelevancy_Parms;
		ymNotifyAchievementsDataRelevancy_Parms.InSourceId = InSourceId;
		ymNotifyAchievementsDataRelevancy_Parms.InRevision = InRevision;

		this->ProcessEvent( pfnymNotifyAchievementsDataRelevancy, &ymNotifyAchievementsDataRelevancy_Parms, NULL );
	};

	void ymRequestAchievementsData ( int InSourceId, int InClientRevision )
	{
		static UFunction* pfnymRequestAchievementsData = NULL;

		if ( !pfnymRequestAchievementsData )
			pfnymRequestAchievementsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestAchievementsData" );

		UCCCheatManager_execymRequestAchievementsData_Parms ymRequestAchievementsData_Parms;
		ymRequestAchievementsData_Parms.InSourceId = InSourceId;
		ymRequestAchievementsData_Parms.InClientRevision = InClientRevision;

		this->ProcessEvent( pfnymRequestAchievementsData, &ymRequestAchievementsData_Parms, NULL );
	};

	void ymUpdateAchievementsData ( int InSourceId, int InRevision, TArray< struct FAchievementDescription > InAchievement )
	{
		static UFunction* pfnymUpdateAchievementsData = NULL;

		if ( !pfnymUpdateAchievementsData )
			pfnymUpdateAchievementsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateAchievementsData" );

		UCCCheatManager_execymUpdateAchievementsData_Parms ymUpdateAchievementsData_Parms;
		ymUpdateAchievementsData_Parms.InSourceId = InSourceId;
		ymUpdateAchievementsData_Parms.InRevision = InRevision;
		memcpy( &ymUpdateAchievementsData_Parms.InAchievement, &InAchievement, 0xC );

		this->ProcessEvent( pfnymUpdateAchievementsData, &ymUpdateAchievementsData_Parms, NULL );
	};

	void ymInitAchievementsData ( int InSourceId, int InRevision, TArray< struct FAchievementDescription > InAchievement )
	{
		static UFunction* pfnymInitAchievementsData = NULL;

		if ( !pfnymInitAchievementsData )
			pfnymInitAchievementsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInitAchievementsData" );

		UCCCheatManager_execymInitAchievementsData_Parms ymInitAchievementsData_Parms;
		ymInitAchievementsData_Parms.InSourceId = InSourceId;
		ymInitAchievementsData_Parms.InRevision = InRevision;
		memcpy( &ymInitAchievementsData_Parms.InAchievement, &InAchievement, 0xC );

		this->ProcessEvent( pfnymInitAchievementsData, &ymInitAchievementsData_Parms, NULL );
	};

	void ymExtraCraftAbilityResearched ( int InCraftAbilityId )
	{
		static UFunction* pfnymExtraCraftAbilityResearched = NULL;

		if ( !pfnymExtraCraftAbilityResearched )
			pfnymExtraCraftAbilityResearched = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymExtraCraftAbilityResearched" );

		UCCCheatManager_execymExtraCraftAbilityResearched_Parms ymExtraCraftAbilityResearched_Parms;
		ymExtraCraftAbilityResearched_Parms.InCraftAbilityId = InCraftAbilityId;

		this->ProcessEvent( pfnymExtraCraftAbilityResearched, &ymExtraCraftAbilityResearched_Parms, NULL );
	};

	void ymResearchExtraCraftAbilityFailed ( unsigned char InResult )
	{
		static UFunction* pfnymResearchExtraCraftAbilityFailed = NULL;

		if ( !pfnymResearchExtraCraftAbilityFailed )
			pfnymResearchExtraCraftAbilityFailed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymResearchExtraCraftAbilityFailed" );

		UCCCheatManager_execymResearchExtraCraftAbilityFailed_Parms ymResearchExtraCraftAbilityFailed_Parms;
		ymResearchExtraCraftAbilityFailed_Parms.InResult = InResult;

		this->ProcessEvent( pfnymResearchExtraCraftAbilityFailed, &ymResearchExtraCraftAbilityFailed_Parms, NULL );
	};

	void ymResearchExtraCraftAbility ()
	{
		static UFunction* pfnymResearchExtraCraftAbility = NULL;

		if ( !pfnymResearchExtraCraftAbility )
			pfnymResearchExtraCraftAbility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymResearchExtraCraftAbility" );

		UCCCheatManager_execymResearchExtraCraftAbility_Parms ymResearchExtraCraftAbility_Parms;

		this->ProcessEvent( pfnymResearchExtraCraftAbility, &ymResearchExtraCraftAbility_Parms, NULL );
	};

	void ymSpecializationUnlearned ( int InSpecializationId )
	{
		static UFunction* pfnymSpecializationUnlearned = NULL;

		if ( !pfnymSpecializationUnlearned )
			pfnymSpecializationUnlearned = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSpecializationUnlearned" );

		UCCCheatManager_execymSpecializationUnlearned_Parms ymSpecializationUnlearned_Parms;
		ymSpecializationUnlearned_Parms.InSpecializationId = InSpecializationId;

		this->ProcessEvent( pfnymSpecializationUnlearned, &ymSpecializationUnlearned_Parms, NULL );
	};

	void ymUnlearnSpecializationResponse ( unsigned long InResult )
	{
		static UFunction* pfnymUnlearnSpecializationResponse = NULL;

		if ( !pfnymUnlearnSpecializationResponse )
			pfnymUnlearnSpecializationResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUnlearnSpecializationResponse" );

		UCCCheatManager_execymUnlearnSpecializationResponse_Parms ymUnlearnSpecializationResponse_Parms;
		ymUnlearnSpecializationResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymUnlearnSpecializationResponse, &ymUnlearnSpecializationResponse_Parms, NULL );
	};

	void ymUnlearnSpecializationRequest ( int InSpecializationId )
	{
		static UFunction* pfnymUnlearnSpecializationRequest = NULL;

		if ( !pfnymUnlearnSpecializationRequest )
			pfnymUnlearnSpecializationRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUnlearnSpecializationRequest" );

		UCCCheatManager_execymUnlearnSpecializationRequest_Parms ymUnlearnSpecializationRequest_Parms;
		ymUnlearnSpecializationRequest_Parms.InSpecializationId = InSpecializationId;

		this->ProcessEvent( pfnymUnlearnSpecializationRequest, &ymUnlearnSpecializationRequest_Parms, NULL );
	};

	void ymProfessionUnlearned ( int InProfessionId )
	{
		static UFunction* pfnymProfessionUnlearned = NULL;

		if ( !pfnymProfessionUnlearned )
			pfnymProfessionUnlearned = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymProfessionUnlearned" );

		UCCCheatManager_execymProfessionUnlearned_Parms ymProfessionUnlearned_Parms;
		ymProfessionUnlearned_Parms.InProfessionId = InProfessionId;

		this->ProcessEvent( pfnymProfessionUnlearned, &ymProfessionUnlearned_Parms, NULL );
	};

	void ymUnlearnProfessionResponse ( unsigned long InResult )
	{
		static UFunction* pfnymUnlearnProfessionResponse = NULL;

		if ( !pfnymUnlearnProfessionResponse )
			pfnymUnlearnProfessionResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUnlearnProfessionResponse" );

		UCCCheatManager_execymUnlearnProfessionResponse_Parms ymUnlearnProfessionResponse_Parms;
		ymUnlearnProfessionResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymUnlearnProfessionResponse, &ymUnlearnProfessionResponse_Parms, NULL );
	};

	void ymUnlearnProfessionRequest ( int InProfessionId )
	{
		static UFunction* pfnymUnlearnProfessionRequest = NULL;

		if ( !pfnymUnlearnProfessionRequest )
			pfnymUnlearnProfessionRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUnlearnProfessionRequest" );

		UCCCheatManager_execymUnlearnProfessionRequest_Parms ymUnlearnProfessionRequest_Parms;
		ymUnlearnProfessionRequest_Parms.InProfessionId = InProfessionId;

		this->ProcessEvent( pfnymUnlearnProfessionRequest, &ymUnlearnProfessionRequest_Parms, NULL );
	};

	void ymExtraPassiveProfessionLearned ( int InProfessionId )
	{
		static UFunction* pfnymExtraPassiveProfessionLearned = NULL;

		if ( !pfnymExtraPassiveProfessionLearned )
			pfnymExtraPassiveProfessionLearned = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymExtraPassiveProfessionLearned" );

		UCCCheatManager_execymExtraPassiveProfessionLearned_Parms ymExtraPassiveProfessionLearned_Parms;
		ymExtraPassiveProfessionLearned_Parms.InProfessionId = InProfessionId;

		this->ProcessEvent( pfnymExtraPassiveProfessionLearned, &ymExtraPassiveProfessionLearned_Parms, NULL );
	};

	void ymLearnExtraPassiveProfessionResponse ( unsigned char InResult )
	{
		static UFunction* pfnymLearnExtraPassiveProfessionResponse = NULL;

		if ( !pfnymLearnExtraPassiveProfessionResponse )
			pfnymLearnExtraPassiveProfessionResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLearnExtraPassiveProfessionResponse" );

		UCCCheatManager_execymLearnExtraPassiveProfessionResponse_Parms ymLearnExtraPassiveProfessionResponse_Parms;
		ymLearnExtraPassiveProfessionResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymLearnExtraPassiveProfessionResponse, &ymLearnExtraPassiveProfessionResponse_Parms, NULL );
	};

	void ymLearnExtraPassiveProfessionRequest ( int InProfessionId )
	{
		static UFunction* pfnymLearnExtraPassiveProfessionRequest = NULL;

		if ( !pfnymLearnExtraPassiveProfessionRequest )
			pfnymLearnExtraPassiveProfessionRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLearnExtraPassiveProfessionRequest" );

		UCCCheatManager_execymLearnExtraPassiveProfessionRequest_Parms ymLearnExtraPassiveProfessionRequest_Parms;
		ymLearnExtraPassiveProfessionRequest_Parms.InProfessionId = InProfessionId;

		this->ProcessEvent( pfnymLearnExtraPassiveProfessionRequest, &ymLearnExtraPassiveProfessionRequest_Parms, NULL );
	};

	void ymCraftAbilityLearned ( int Inm_craftAbilityId )
	{
		static UFunction* pfnymCraftAbilityLearned = NULL;

		if ( !pfnymCraftAbilityLearned )
			pfnymCraftAbilityLearned = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCraftAbilityLearned" );

		UCCCheatManager_execymCraftAbilityLearned_Parms ymCraftAbilityLearned_Parms;
		ymCraftAbilityLearned_Parms.Inm_craftAbilityId = Inm_craftAbilityId;

		this->ProcessEvent( pfnymCraftAbilityLearned, &ymCraftAbilityLearned_Parms, NULL );
	};

	void ymLearnCraftAbilityResponse ( unsigned char Inm_result )
	{
		static UFunction* pfnymLearnCraftAbilityResponse = NULL;

		if ( !pfnymLearnCraftAbilityResponse )
			pfnymLearnCraftAbilityResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLearnCraftAbilityResponse" );

		UCCCheatManager_execymLearnCraftAbilityResponse_Parms ymLearnCraftAbilityResponse_Parms;
		ymLearnCraftAbilityResponse_Parms.Inm_result = Inm_result;

		this->ProcessEvent( pfnymLearnCraftAbilityResponse, &ymLearnCraftAbilityResponse_Parms, NULL );
	};

	void ymLearnCraftAbilityRequest ( int Inm_craftAbilityId )
	{
		static UFunction* pfnymLearnCraftAbilityRequest = NULL;

		if ( !pfnymLearnCraftAbilityRequest )
			pfnymLearnCraftAbilityRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLearnCraftAbilityRequest" );

		UCCCheatManager_execymLearnCraftAbilityRequest_Parms ymLearnCraftAbilityRequest_Parms;
		ymLearnCraftAbilityRequest_Parms.Inm_craftAbilityId = Inm_craftAbilityId;

		this->ProcessEvent( pfnymLearnCraftAbilityRequest, &ymLearnCraftAbilityRequest_Parms, NULL );
	};

	void ymSpecializationLearned ( int Inm_specializationId )
	{
		static UFunction* pfnymSpecializationLearned = NULL;

		if ( !pfnymSpecializationLearned )
			pfnymSpecializationLearned = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSpecializationLearned" );

		UCCCheatManager_execymSpecializationLearned_Parms ymSpecializationLearned_Parms;
		ymSpecializationLearned_Parms.Inm_specializationId = Inm_specializationId;

		this->ProcessEvent( pfnymSpecializationLearned, &ymSpecializationLearned_Parms, NULL );
	};

	void ymLearnSpecializationResponse ( unsigned char Inm_result )
	{
		static UFunction* pfnymLearnSpecializationResponse = NULL;

		if ( !pfnymLearnSpecializationResponse )
			pfnymLearnSpecializationResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLearnSpecializationResponse" );

		UCCCheatManager_execymLearnSpecializationResponse_Parms ymLearnSpecializationResponse_Parms;
		ymLearnSpecializationResponse_Parms.Inm_result = Inm_result;

		this->ProcessEvent( pfnymLearnSpecializationResponse, &ymLearnSpecializationResponse_Parms, NULL );
	};

	void ymLearnSpecializationRequest ( int Inm_specializationId )
	{
		static UFunction* pfnymLearnSpecializationRequest = NULL;

		if ( !pfnymLearnSpecializationRequest )
			pfnymLearnSpecializationRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLearnSpecializationRequest" );

		UCCCheatManager_execymLearnSpecializationRequest_Parms ymLearnSpecializationRequest_Parms;
		ymLearnSpecializationRequest_Parms.Inm_specializationId = Inm_specializationId;

		this->ProcessEvent( pfnymLearnSpecializationRequest, &ymLearnSpecializationRequest_Parms, NULL );
	};

	void ymProfessionLearned ( int Inm_professionId )
	{
		static UFunction* pfnymProfessionLearned = NULL;

		if ( !pfnymProfessionLearned )
			pfnymProfessionLearned = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymProfessionLearned" );

		UCCCheatManager_execymProfessionLearned_Parms ymProfessionLearned_Parms;
		ymProfessionLearned_Parms.Inm_professionId = Inm_professionId;

		this->ProcessEvent( pfnymProfessionLearned, &ymProfessionLearned_Parms, NULL );
	};

	void ymLearnProfessionResponse ( unsigned char Inm_result )
	{
		static UFunction* pfnymLearnProfessionResponse = NULL;

		if ( !pfnymLearnProfessionResponse )
			pfnymLearnProfessionResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLearnProfessionResponse" );

		UCCCheatManager_execymLearnProfessionResponse_Parms ymLearnProfessionResponse_Parms;
		ymLearnProfessionResponse_Parms.Inm_result = Inm_result;

		this->ProcessEvent( pfnymLearnProfessionResponse, &ymLearnProfessionResponse_Parms, NULL );
	};

	void ymLearnProfessionRequest ( int Inm_professionId )
	{
		static UFunction* pfnymLearnProfessionRequest = NULL;

		if ( !pfnymLearnProfessionRequest )
			pfnymLearnProfessionRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLearnProfessionRequest" );

		UCCCheatManager_execymLearnProfessionRequest_Parms ymLearnProfessionRequest_Parms;
		ymLearnProfessionRequest_Parms.Inm_professionId = Inm_professionId;

		this->ProcessEvent( pfnymLearnProfessionRequest, &ymLearnProfessionRequest_Parms, NULL );
	};

	void ymUseDrugFailed ()
	{
		static UFunction* pfnymUseDrugFailed = NULL;

		if ( !pfnymUseDrugFailed )
			pfnymUseDrugFailed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUseDrugFailed" );

		UCCCheatManager_execymUseDrugFailed_Parms ymUseDrugFailed_Parms;

		this->ProcessEvent( pfnymUseDrugFailed, &ymUseDrugFailed_Parms, NULL );
	};

	void ymDrugUsed ()
	{
		static UFunction* pfnymDrugUsed = NULL;

		if ( !pfnymDrugUsed )
			pfnymDrugUsed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDrugUsed" );

		UCCCheatManager_execymDrugUsed_Parms ymDrugUsed_Parms;

		this->ProcessEvent( pfnymDrugUsed, &ymDrugUsed_Parms, NULL );
	};

	void ymUseDrug ( int InDrugId )
	{
		static UFunction* pfnymUseDrug = NULL;

		if ( !pfnymUseDrug )
			pfnymUseDrug = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUseDrug" );

		UCCCheatManager_execymUseDrug_Parms ymUseDrug_Parms;
		ymUseDrug_Parms.InDrugId = InDrugId;

		this->ProcessEvent( pfnymUseDrug, &ymUseDrug_Parms, NULL );
	};

	void ymRemoveCharacterAddiction ( struct FCharacterAddiction InAddiction )
	{
		static UFunction* pfnymRemoveCharacterAddiction = NULL;

		if ( !pfnymRemoveCharacterAddiction )
			pfnymRemoveCharacterAddiction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRemoveCharacterAddiction" );

		UCCCheatManager_execymRemoveCharacterAddiction_Parms ymRemoveCharacterAddiction_Parms;
		memcpy( &ymRemoveCharacterAddiction_Parms.InAddiction, &InAddiction, 0x14 );

		this->ProcessEvent( pfnymRemoveCharacterAddiction, &ymRemoveCharacterAddiction_Parms, NULL );
	};

	void ymUpdateCharacterAddiction ( TArray< struct FCharacterAddiction > InAddictions )
	{
		static UFunction* pfnymUpdateCharacterAddiction = NULL;

		if ( !pfnymUpdateCharacterAddiction )
			pfnymUpdateCharacterAddiction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateCharacterAddiction" );

		UCCCheatManager_execymUpdateCharacterAddiction_Parms ymUpdateCharacterAddiction_Parms;
		memcpy( &ymUpdateCharacterAddiction_Parms.InAddictions, &InAddictions, 0xC );

		this->ProcessEvent( pfnymUpdateCharacterAddiction, &ymUpdateCharacterAddiction_Parms, NULL );
	};

	void ymNpcItemRepaired ()
	{
		static UFunction* pfnymNpcItemRepaired = NULL;

		if ( !pfnymNpcItemRepaired )
			pfnymNpcItemRepaired = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNpcItemRepaired" );

		UCCCheatManager_execymNpcItemRepaired_Parms ymNpcItemRepaired_Parms;

		this->ProcessEvent( pfnymNpcItemRepaired, &ymNpcItemRepaired_Parms, NULL );
	};

	void ymNpcRepairItemFailed ()
	{
		static UFunction* pfnymNpcRepairItemFailed = NULL;

		if ( !pfnymNpcRepairItemFailed )
			pfnymNpcRepairItemFailed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNpcRepairItemFailed" );

		UCCCheatManager_execymNpcRepairItemFailed_Parms ymNpcRepairItemFailed_Parms;

		this->ProcessEvent( pfnymNpcRepairItemFailed, &ymNpcRepairItemFailed_Parms, NULL );
	};

	void ymNpcRepairItem ( int InItemId )
	{
		static UFunction* pfnymNpcRepairItem = NULL;

		if ( !pfnymNpcRepairItem )
			pfnymNpcRepairItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNpcRepairItem" );

		UCCCheatManager_execymNpcRepairItem_Parms ymNpcRepairItem_Parms;
		ymNpcRepairItem_Parms.InItemId = InItemId;

		this->ProcessEvent( pfnymNpcRepairItem, &ymNpcRepairItem_Parms, NULL );
	};

	void ymItemRepaired ()
	{
		static UFunction* pfnymItemRepaired = NULL;

		if ( !pfnymItemRepaired )
			pfnymItemRepaired = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymItemRepaired" );

		UCCCheatManager_execymItemRepaired_Parms ymItemRepaired_Parms;

		this->ProcessEvent( pfnymItemRepaired, &ymItemRepaired_Parms, NULL );
	};

	void ymRepairItemFailed ()
	{
		static UFunction* pfnymRepairItemFailed = NULL;

		if ( !pfnymRepairItemFailed )
			pfnymRepairItemFailed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRepairItemFailed" );

		UCCCheatManager_execymRepairItemFailed_Parms ymRepairItemFailed_Parms;

		this->ProcessEvent( pfnymRepairItemFailed, &ymRepairItemFailed_Parms, NULL );
	};

	void ymRepairItem ( int InItemId )
	{
		static UFunction* pfnymRepairItem = NULL;

		if ( !pfnymRepairItem )
			pfnymRepairItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRepairItem" );

		UCCCheatManager_execymRepairItem_Parms ymRepairItem_Parms;
		ymRepairItem_Parms.InItemId = InItemId;

		this->ProcessEvent( pfnymRepairItem, &ymRepairItem_Parms, NULL );
	};

	void ymItemCrafted ()
	{
		static UFunction* pfnymItemCrafted = NULL;

		if ( !pfnymItemCrafted )
			pfnymItemCrafted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymItemCrafted" );

		UCCCheatManager_execymItemCrafted_Parms ymItemCrafted_Parms;

		this->ProcessEvent( pfnymItemCrafted, &ymItemCrafted_Parms, NULL );
	};

	void ymCraftItemFailed ( unsigned char InReturnState )
	{
		static UFunction* pfnymCraftItemFailed = NULL;

		if ( !pfnymCraftItemFailed )
			pfnymCraftItemFailed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCraftItemFailed" );

		UCCCheatManager_execymCraftItemFailed_Parms ymCraftItemFailed_Parms;
		ymCraftItemFailed_Parms.InReturnState = InReturnState;

		this->ProcessEvent( pfnymCraftItemFailed, &ymCraftItemFailed_Parms, NULL );
	};

	void ymCraftDrug ( int InCraftAbilityId, int InIngredientsOfQuality, int InIngredientsOfProbability, unsigned long InUseCatalyst )
	{
		static UFunction* pfnymCraftDrug = NULL;

		if ( !pfnymCraftDrug )
			pfnymCraftDrug = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCraftDrug" );

		UCCCheatManager_execymCraftDrug_Parms ymCraftDrug_Parms;
		ymCraftDrug_Parms.InCraftAbilityId = InCraftAbilityId;
		ymCraftDrug_Parms.InIngredientsOfQuality = InIngredientsOfQuality;
		ymCraftDrug_Parms.InIngredientsOfProbability = InIngredientsOfProbability;
		ymCraftDrug_Parms.InUseCatalyst = InUseCatalyst;

		this->ProcessEvent( pfnymCraftDrug, &ymCraftDrug_Parms, NULL );
	};

	void ymCraftItem ( int InCraftAbilityId )
	{
		static UFunction* pfnymCraftItem = NULL;

		if ( !pfnymCraftItem )
			pfnymCraftItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCraftItem" );

		UCCCheatManager_execymCraftItem_Parms ymCraftItem_Parms;
		ymCraftItem_Parms.InCraftAbilityId = InCraftAbilityId;

		this->ProcessEvent( pfnymCraftItem, &ymCraftItem_Parms, NULL );
	};

	void ymLevelUpProfessionSkill ( int InProfessionId, int InProfessionLevel )
	{
		static UFunction* pfnymLevelUpProfessionSkill = NULL;

		if ( !pfnymLevelUpProfessionSkill )
			pfnymLevelUpProfessionSkill = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLevelUpProfessionSkill" );

		UCCCheatManager_execymLevelUpProfessionSkill_Parms ymLevelUpProfessionSkill_Parms;
		ymLevelUpProfessionSkill_Parms.InProfessionId = InProfessionId;
		ymLevelUpProfessionSkill_Parms.InProfessionLevel = InProfessionLevel;

		this->ProcessEvent( pfnymLevelUpProfessionSkill, &ymLevelUpProfessionSkill_Parms, NULL );
	};

	void ymS2CRemoveCraftAbilities ( TArray< int > InCraftAbilities )
	{
		static UFunction* pfnymS2CRemoveCraftAbilities = NULL;

		if ( !pfnymS2CRemoveCraftAbilities )
			pfnymS2CRemoveCraftAbilities = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymS2CRemoveCraftAbilities" );

		UCCCheatManager_execymS2CRemoveCraftAbilities_Parms ymS2CRemoveCraftAbilities_Parms;
		ymS2CRemoveCraftAbilities_Parms.InCraftAbilities = InCraftAbilities;

		this->ProcessEvent( pfnymS2CRemoveCraftAbilities, &ymS2CRemoveCraftAbilities_Parms, NULL );
	};

	void ymS2CAddCraftAbilities ( TArray< int > InCraftAbilities )
	{
		static UFunction* pfnymS2CAddCraftAbilities = NULL;

		if ( !pfnymS2CAddCraftAbilities )
			pfnymS2CAddCraftAbilities = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymS2CAddCraftAbilities" );

		UCCCheatManager_execymS2CAddCraftAbilities_Parms ymS2CAddCraftAbilities_Parms;
		ymS2CAddCraftAbilities_Parms.InCraftAbilities = InCraftAbilities;

		this->ProcessEvent( pfnymS2CAddCraftAbilities, &ymS2CAddCraftAbilities_Parms, NULL );
	};

	void ymNotifyInteractionFinished ( int InCharacterId, int InObjectId, int InParam1, int InParam2 )
	{
		static UFunction* pfnymNotifyInteractionFinished = NULL;

		if ( !pfnymNotifyInteractionFinished )
			pfnymNotifyInteractionFinished = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyInteractionFinished" );

		UCCCheatManager_execymNotifyInteractionFinished_Parms ymNotifyInteractionFinished_Parms;
		ymNotifyInteractionFinished_Parms.InCharacterId = InCharacterId;
		ymNotifyInteractionFinished_Parms.InObjectId = InObjectId;
		ymNotifyInteractionFinished_Parms.InParam1 = InParam1;
		ymNotifyInteractionFinished_Parms.InParam2 = InParam2;

		this->ProcessEvent( pfnymNotifyInteractionFinished, &ymNotifyInteractionFinished_Parms, NULL );
	};

	void ymInteractionFinished ( int InObjectId, int InParam1, int InParam2 )
	{
		static UFunction* pfnymInteractionFinished = NULL;

		if ( !pfnymInteractionFinished )
			pfnymInteractionFinished = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInteractionFinished" );

		UCCCheatManager_execymInteractionFinished_Parms ymInteractionFinished_Parms;
		ymInteractionFinished_Parms.InObjectId = InObjectId;
		ymInteractionFinished_Parms.InParam1 = InParam1;
		ymInteractionFinished_Parms.InParam2 = InParam2;

		this->ProcessEvent( pfnymInteractionFinished, &ymInteractionFinished_Parms, NULL );
	};

	void ymNotifyInteractionStarted ( int InSourceCharacterId, int InInteractionObjectId, int InParam1, int InParam2 )
	{
		static UFunction* pfnymNotifyInteractionStarted = NULL;

		if ( !pfnymNotifyInteractionStarted )
			pfnymNotifyInteractionStarted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyInteractionStarted" );

		UCCCheatManager_execymNotifyInteractionStarted_Parms ymNotifyInteractionStarted_Parms;
		ymNotifyInteractionStarted_Parms.InSourceCharacterId = InSourceCharacterId;
		ymNotifyInteractionStarted_Parms.InInteractionObjectId = InInteractionObjectId;
		ymNotifyInteractionStarted_Parms.InParam1 = InParam1;
		ymNotifyInteractionStarted_Parms.InParam2 = InParam2;

		this->ProcessEvent( pfnymNotifyInteractionStarted, &ymNotifyInteractionStarted_Parms, NULL );
	};

	void ymInteractionFailed ( unsigned char InResult, int InObjectId, int InCauseCharacterId )
	{
		static UFunction* pfnymInteractionFailed = NULL;

		if ( !pfnymInteractionFailed )
			pfnymInteractionFailed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInteractionFailed" );

		UCCCheatManager_execymInteractionFailed_Parms ymInteractionFailed_Parms;
		ymInteractionFailed_Parms.InResult = InResult;
		ymInteractionFailed_Parms.InObjectId = InObjectId;
		ymInteractionFailed_Parms.InCauseCharacterId = InCauseCharacterId;

		this->ProcessEvent( pfnymInteractionFailed, &ymInteractionFailed_Parms, NULL );
	};

	void ymInteractionStarted ( int InInteractionObjectId, int InParam1, int InParam2 )
	{
		static UFunction* pfnymInteractionStarted = NULL;

		if ( !pfnymInteractionStarted )
			pfnymInteractionStarted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInteractionStarted" );

		UCCCheatManager_execymInteractionStarted_Parms ymInteractionStarted_Parms;
		ymInteractionStarted_Parms.InInteractionObjectId = InInteractionObjectId;
		ymInteractionStarted_Parms.InParam1 = InParam1;
		ymInteractionStarted_Parms.InParam2 = InParam2;

		this->ProcessEvent( pfnymInteractionStarted, &ymInteractionStarted_Parms, NULL );
	};

	void ymNotifyMomentaryInteraction ( int InCharacterId, int InObjectId, int InParam1, int InParam2 )
	{
		static UFunction* pfnymNotifyMomentaryInteraction = NULL;

		if ( !pfnymNotifyMomentaryInteraction )
			pfnymNotifyMomentaryInteraction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyMomentaryInteraction" );

		UCCCheatManager_execymNotifyMomentaryInteraction_Parms ymNotifyMomentaryInteraction_Parms;
		ymNotifyMomentaryInteraction_Parms.InCharacterId = InCharacterId;
		ymNotifyMomentaryInteraction_Parms.InObjectId = InObjectId;
		ymNotifyMomentaryInteraction_Parms.InParam1 = InParam1;
		ymNotifyMomentaryInteraction_Parms.InParam2 = InParam2;

		this->ProcessEvent( pfnymNotifyMomentaryInteraction, &ymNotifyMomentaryInteraction_Parms, NULL );
	};

	void ymMomentaryInteraction ( int InObjectId, int InParam1, int InParam2 )
	{
		static UFunction* pfnymMomentaryInteraction = NULL;

		if ( !pfnymMomentaryInteraction )
			pfnymMomentaryInteraction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymMomentaryInteraction" );

		UCCCheatManager_execymMomentaryInteraction_Parms ymMomentaryInteraction_Parms;
		ymMomentaryInteraction_Parms.InObjectId = InObjectId;
		ymMomentaryInteraction_Parms.InParam1 = InParam1;
		ymMomentaryInteraction_Parms.InParam2 = InParam2;

		this->ProcessEvent( pfnymMomentaryInteraction, &ymMomentaryInteraction_Parms, NULL );
	};

	void ymNotifyInteractions ( TArray< struct FInteractionData > InInteractions )
	{
		static UFunction* pfnymNotifyInteractions = NULL;

		if ( !pfnymNotifyInteractions )
			pfnymNotifyInteractions = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyInteractions" );

		UCCCheatManager_execymNotifyInteractions_Parms ymNotifyInteractions_Parms;
		memcpy( &ymNotifyInteractions_Parms.InInteractions, &InInteractions, 0xC );

		this->ProcessEvent( pfnymNotifyInteractions, &ymNotifyInteractions_Parms, NULL );
	};

	void ymDeleteClubItemResponse ( unsigned char InResult )
	{
		static UFunction* pfnymDeleteClubItemResponse = NULL;

		if ( !pfnymDeleteClubItemResponse )
			pfnymDeleteClubItemResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeleteClubItemResponse" );

		UCCCheatManager_execymDeleteClubItemResponse_Parms ymDeleteClubItemResponse_Parms;
		ymDeleteClubItemResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymDeleteClubItemResponse, &ymDeleteClubItemResponse_Parms, NULL );
	};

	void ymDeleteClubItem ( TArray< int > InDeletedItemId )
	{
		static UFunction* pfnymDeleteClubItem = NULL;

		if ( !pfnymDeleteClubItem )
			pfnymDeleteClubItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeleteClubItem" );

		UCCCheatManager_execymDeleteClubItem_Parms ymDeleteClubItem_Parms;
		ymDeleteClubItem_Parms.InDeletedItemId = InDeletedItemId;

		this->ProcessEvent( pfnymDeleteClubItem, &ymDeleteClubItem_Parms, NULL );
	};

	void ymNotifyRunningPartyInLobby ( TArray< struct FClubParty > InParties )
	{
		static UFunction* pfnymNotifyRunningPartyInLobby = NULL;

		if ( !pfnymNotifyRunningPartyInLobby )
			pfnymNotifyRunningPartyInLobby = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyRunningPartyInLobby" );

		UCCCheatManager_execymNotifyRunningPartyInLobby_Parms ymNotifyRunningPartyInLobby_Parms;
		memcpy( &ymNotifyRunningPartyInLobby_Parms.InParties, &InParties, 0xC );

		this->ProcessEvent( pfnymNotifyRunningPartyInLobby, &ymNotifyRunningPartyInLobby_Parms, NULL );
	};

	void ymLeaveVipZone ()
	{
		static UFunction* pfnymLeaveVipZone = NULL;

		if ( !pfnymLeaveVipZone )
			pfnymLeaveVipZone = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLeaveVipZone" );

		UCCCheatManager_execymLeaveVipZone_Parms ymLeaveVipZone_Parms;

		this->ProcessEvent( pfnymLeaveVipZone, &ymLeaveVipZone_Parms, NULL );
	};

	void ymEnterVipZoneResponse ( unsigned char InResult, int InVisualId, int InProgramId )
	{
		static UFunction* pfnymEnterVipZoneResponse = NULL;

		if ( !pfnymEnterVipZoneResponse )
			pfnymEnterVipZoneResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymEnterVipZoneResponse" );

		UCCCheatManager_execymEnterVipZoneResponse_Parms ymEnterVipZoneResponse_Parms;
		ymEnterVipZoneResponse_Parms.InResult = InResult;
		ymEnterVipZoneResponse_Parms.InVisualId = InVisualId;
		ymEnterVipZoneResponse_Parms.InProgramId = InProgramId;

		this->ProcessEvent( pfnymEnterVipZoneResponse, &ymEnterVipZoneResponse_Parms, NULL );
	};

	void ymEnterVipZone ( int InVisualId, int InProgramId, int InVisualPaymentType, int InProgramPaymentType )
	{
		static UFunction* pfnymEnterVipZone = NULL;

		if ( !pfnymEnterVipZone )
			pfnymEnterVipZone = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymEnterVipZone" );

		UCCCheatManager_execymEnterVipZone_Parms ymEnterVipZone_Parms;
		ymEnterVipZone_Parms.InVisualId = InVisualId;
		ymEnterVipZone_Parms.InProgramId = InProgramId;
		ymEnterVipZone_Parms.InVisualPaymentType = InVisualPaymentType;
		ymEnterVipZone_Parms.InProgramPaymentType = InProgramPaymentType;

		this->ProcessEvent( pfnymEnterVipZone, &ymEnterVipZone_Parms, NULL );
	};

	void ymForceExitClub ()
	{
		static UFunction* pfnymForceExitClub = NULL;

		if ( !pfnymForceExitClub )
			pfnymForceExitClub = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymForceExitClub" );

		UCCCheatManager_execymForceExitClub_Parms ymForceExitClub_Parms;

		this->ProcessEvent( pfnymForceExitClub, &ymForceExitClub_Parms, NULL );
	};

	void ymNotifyClubPartyStopped ( int InClanId )
	{
		static UFunction* pfnymNotifyClubPartyStopped = NULL;

		if ( !pfnymNotifyClubPartyStopped )
			pfnymNotifyClubPartyStopped = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClubPartyStopped" );

		UCCCheatManager_execymNotifyClubPartyStopped_Parms ymNotifyClubPartyStopped_Parms;
		ymNotifyClubPartyStopped_Parms.InClanId = InClanId;

		this->ProcessEvent( pfnymNotifyClubPartyStopped, &ymNotifyClubPartyStopped_Parms, NULL );
	};

	void ymNotifyClubPartyStarted ( struct FClubParty InParty )
	{
		static UFunction* pfnymNotifyClubPartyStarted = NULL;

		if ( !pfnymNotifyClubPartyStarted )
			pfnymNotifyClubPartyStarted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClubPartyStarted" );

		UCCCheatManager_execymNotifyClubPartyStarted_Parms ymNotifyClubPartyStarted_Parms;
		memcpy( &ymNotifyClubPartyStarted_Parms.InParty, &InParty, 0x18 );

		this->ProcessEvent( pfnymNotifyClubPartyStarted, &ymNotifyClubPartyStarted_Parms, NULL );
	};

	void ymStopClubPartyResponse ( unsigned char InResult, int InWillExpireInMinutes )
	{
		static UFunction* pfnymStopClubPartyResponse = NULL;

		if ( !pfnymStopClubPartyResponse )
			pfnymStopClubPartyResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymStopClubPartyResponse" );

		UCCCheatManager_execymStopClubPartyResponse_Parms ymStopClubPartyResponse_Parms;
		ymStopClubPartyResponse_Parms.InResult = InResult;
		ymStopClubPartyResponse_Parms.InWillExpireInMinutes = InWillExpireInMinutes;

		this->ProcessEvent( pfnymStopClubPartyResponse, &ymStopClubPartyResponse_Parms, NULL );
	};

	void ymStopClubParty ()
	{
		static UFunction* pfnymStopClubParty = NULL;

		if ( !pfnymStopClubParty )
			pfnymStopClubParty = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymStopClubParty" );

		UCCCheatManager_execymStopClubParty_Parms ymStopClubParty_Parms;

		this->ProcessEvent( pfnymStopClubParty, &ymStopClubParty_Parms, NULL );
	};

	void ymStartClubPartyResponse ( unsigned char InResult )
	{
		static UFunction* pfnymStartClubPartyResponse = NULL;

		if ( !pfnymStartClubPartyResponse )
			pfnymStartClubPartyResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymStartClubPartyResponse" );

		UCCCheatManager_execymStartClubPartyResponse_Parms ymStartClubPartyResponse_Parms;
		ymStartClubPartyResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymStartClubPartyResponse, &ymStartClubPartyResponse_Parms, NULL );
	};

	void ymStartClubParty ( int InTypeId, unsigned long InIsPublic, int InEntranceFee )
	{
		static UFunction* pfnymStartClubParty = NULL;

		if ( !pfnymStartClubParty )
			pfnymStartClubParty = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymStartClubParty" );

		UCCCheatManager_execymStartClubParty_Parms ymStartClubParty_Parms;
		ymStartClubParty_Parms.InTypeId = InTypeId;
		ymStartClubParty_Parms.InIsPublic = InIsPublic;
		ymStartClubParty_Parms.InEntranceFee = InEntranceFee;

		this->ProcessEvent( pfnymStartClubParty, &ymStartClubParty_Parms, NULL );
	};

	void ymRecustomizeClubResponse ( unsigned char InResult )
	{
		static UFunction* pfnymRecustomizeClubResponse = NULL;

		if ( !pfnymRecustomizeClubResponse )
			pfnymRecustomizeClubResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRecustomizeClubResponse" );

		UCCCheatManager_execymRecustomizeClubResponse_Parms ymRecustomizeClubResponse_Parms;
		ymRecustomizeClubResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymRecustomizeClubResponse, &ymRecustomizeClubResponse_Parms, NULL );
	};

	void ymRecustomizeClub ( TArray< struct FClubZoneChanges > InChangedZones )
	{
		static UFunction* pfnymRecustomizeClub = NULL;

		if ( !pfnymRecustomizeClub )
			pfnymRecustomizeClub = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRecustomizeClub" );

		UCCCheatManager_execymRecustomizeClub_Parms ymRecustomizeClub_Parms;
		memcpy( &ymRecustomizeClub_Parms.InChangedZones, &InChangedZones, 0xC );

		this->ProcessEvent( pfnymRecustomizeClub, &ymRecustomizeClub_Parms, NULL );
	};

	void ymBuyClubStuffResponse ( unsigned char InResult )
	{
		static UFunction* pfnymBuyClubStuffResponse = NULL;

		if ( !pfnymBuyClubStuffResponse )
			pfnymBuyClubStuffResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuyClubStuffResponse" );

		UCCCheatManager_execymBuyClubStuffResponse_Parms ymBuyClubStuffResponse_Parms;
		ymBuyClubStuffResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymBuyClubStuffResponse, &ymBuyClubStuffResponse_Parms, NULL );
	};

	void ymBuyClubStuff ( TArray< int > InBoughtCustomizationsTemplateIds, TArray< int > InBoughtZoneTemplateIds )
	{
		static UFunction* pfnymBuyClubStuff = NULL;

		if ( !pfnymBuyClubStuff )
			pfnymBuyClubStuff = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuyClubStuff" );

		UCCCheatManager_execymBuyClubStuff_Parms ymBuyClubStuff_Parms;
		ymBuyClubStuff_Parms.InBoughtCustomizationsTemplateIds = InBoughtCustomizationsTemplateIds;
		ymBuyClubStuff_Parms.InBoughtZoneTemplateIds = InBoughtZoneTemplateIds;

		this->ProcessEvent( pfnymBuyClubStuff, &ymBuyClubStuff_Parms, NULL );
	};

	void ymExitClubResponse ( unsigned char InResult )
	{
		static UFunction* pfnymExitClubResponse = NULL;

		if ( !pfnymExitClubResponse )
			pfnymExitClubResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymExitClubResponse" );

		UCCCheatManager_execymExitClubResponse_Parms ymExitClubResponse_Parms;
		ymExitClubResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymExitClubResponse, &ymExitClubResponse_Parms, NULL );
	};

	void ymExitClub ()
	{
		static UFunction* pfnymExitClub = NULL;

		if ( !pfnymExitClub )
			pfnymExitClub = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymExitClub" );

		UCCCheatManager_execymExitClub_Parms ymExitClub_Parms;

		this->ProcessEvent( pfnymExitClub, &ymExitClub_Parms, NULL );
	};

	void ymEnteredClub ()
	{
		static UFunction* pfnymEnteredClub = NULL;

		if ( !pfnymEnteredClub )
			pfnymEnteredClub = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymEnteredClub" );

		UCCCheatManager_execymEnteredClub_Parms ymEnteredClub_Parms;

		this->ProcessEvent( pfnymEnteredClub, &ymEnteredClub_Parms, NULL );
	};

	void ymEnterClubResponse ( unsigned char InResult )
	{
		static UFunction* pfnymEnterClubResponse = NULL;

		if ( !pfnymEnterClubResponse )
			pfnymEnterClubResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymEnterClubResponse" );

		UCCCheatManager_execymEnterClubResponse_Parms ymEnterClubResponse_Parms;
		ymEnterClubResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymEnterClubResponse, &ymEnterClubResponse_Parms, NULL );
	};

	void ymEnterClub ( int InClanId )
	{
		static UFunction* pfnymEnterClub = NULL;

		if ( !pfnymEnterClub )
			pfnymEnterClub = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymEnterClub" );

		UCCCheatManager_execymEnterClub_Parms ymEnterClub_Parms;
		ymEnterClub_Parms.InClanId = InClanId;

		this->ProcessEvent( pfnymEnterClub, &ymEnterClub_Parms, NULL );
	};

	void ymRentClubResponse ( unsigned char InResult )
	{
		static UFunction* pfnymRentClubResponse = NULL;

		if ( !pfnymRentClubResponse )
			pfnymRentClubResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRentClubResponse" );

		UCCCheatManager_execymRentClubResponse_Parms ymRentClubResponse_Parms;
		ymRentClubResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymRentClubResponse, &ymRentClubResponse_Parms, NULL );
	};

	void ymRentClub ( int InClubTemplateId, int InClubRentOptionId, unsigned long InRestorePrevious )
	{
		static UFunction* pfnymRentClub = NULL;

		if ( !pfnymRentClub )
			pfnymRentClub = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRentClub" );

		UCCCheatManager_execymRentClub_Parms ymRentClub_Parms;
		ymRentClub_Parms.InClubTemplateId = InClubTemplateId;
		ymRentClub_Parms.InClubRentOptionId = InClubRentOptionId;
		ymRentClub_Parms.InRestorePrevious = InRestorePrevious;

		this->ProcessEvent( pfnymRentClub, &ymRentClub_Parms, NULL );
	};

	void ymGetMyPowerRating ()
	{
		static UFunction* pfnymGetMyPowerRating = NULL;

		if ( !pfnymGetMyPowerRating )
			pfnymGetMyPowerRating = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGetMyPowerRating" );

		UCCCheatManager_execymGetMyPowerRating_Parms ymGetMyPowerRating_Parms;

		this->ProcessEvent( pfnymGetMyPowerRating, &ymGetMyPowerRating_Parms, NULL );
	};

	void ymRestartClientMessage ( int InrestartId )
	{
		static UFunction* pfnymRestartClientMessage = NULL;

		if ( !pfnymRestartClientMessage )
			pfnymRestartClientMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRestartClientMessage" );

		UCCCheatManager_execymRestartClientMessage_Parms ymRestartClientMessage_Parms;
		ymRestartClientMessage_Parms.InrestartId = InrestartId;

		this->ProcessEvent( pfnymRestartClientMessage, &ymRestartClientMessage_Parms, NULL );
	};

	void ymRestartNodeMessage ( int InrestartId )
	{
		static UFunction* pfnymRestartNodeMessage = NULL;

		if ( !pfnymRestartNodeMessage )
			pfnymRestartNodeMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRestartNodeMessage" );

		UCCCheatManager_execymRestartNodeMessage_Parms ymRestartNodeMessage_Parms;
		ymRestartNodeMessage_Parms.InrestartId = InrestartId;

		this->ProcessEvent( pfnymRestartNodeMessage, &ymRestartNodeMessage_Parms, NULL );
	};

	void ymSkipErrorMessage ( int InskipId )
	{
		static UFunction* pfnymSkipErrorMessage = NULL;

		if ( !pfnymSkipErrorMessage )
			pfnymSkipErrorMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSkipErrorMessage" );

		UCCCheatManager_execymSkipErrorMessage_Parms ymSkipErrorMessage_Parms;
		ymSkipErrorMessage_Parms.InskipId = InskipId;

		this->ProcessEvent( pfnymSkipErrorMessage, &ymSkipErrorMessage_Parms, NULL );
	};

	void ymProxyPingMessage ( int Intime, struct FString Inpayload )
	{
		static UFunction* pfnymProxyPingMessage = NULL;

		if ( !pfnymProxyPingMessage )
			pfnymProxyPingMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymProxyPingMessage" );

		UCCCheatManager_execymProxyPingMessage_Parms ymProxyPingMessage_Parms;
		ymProxyPingMessage_Parms.Intime = Intime;
		memcpy( &ymProxyPingMessage_Parms.Inpayload, &Inpayload, 0xC );

		this->ProcessEvent( pfnymProxyPingMessage, &ymProxyPingMessage_Parms, NULL );
	};

	void ymPingAllMessage ( int InPingId, TArray< unsigned char > InData )
	{
		static UFunction* pfnymPingAllMessage = NULL;

		if ( !pfnymPingAllMessage )
			pfnymPingAllMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymPingAllMessage" );

		UCCCheatManager_execymPingAllMessage_Parms ymPingAllMessage_Parms;
		ymPingAllMessage_Parms.InPingId = InPingId;
		ymPingAllMessage_Parms.InData = InData;

		this->ProcessEvent( pfnymPingAllMessage, &ymPingAllMessage_Parms, NULL );
	};

	void ymPingMessage ( int InPingId, struct FString InData )
	{
		static UFunction* pfnymPingMessage = NULL;

		if ( !pfnymPingMessage )
			pfnymPingMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymPingMessage" );

		UCCCheatManager_execymPingMessage_Parms ymPingMessage_Parms;
		ymPingMessage_Parms.InPingId = InPingId;
		memcpy( &ymPingMessage_Parms.InData, &InData, 0xC );

		this->ProcessEvent( pfnymPingMessage, &ymPingMessage_Parms, NULL );
	};

	void ymRequestDataChunkUpdate ( int Inm_dataChunkID, int Inm_dataChunkID2, int Inm_oldRevisionID )
	{
		static UFunction* pfnymRequestDataChunkUpdate = NULL;

		if ( !pfnymRequestDataChunkUpdate )
			pfnymRequestDataChunkUpdate = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestDataChunkUpdate" );

		UCCCheatManager_execymRequestDataChunkUpdate_Parms ymRequestDataChunkUpdate_Parms;
		ymRequestDataChunkUpdate_Parms.Inm_dataChunkID = Inm_dataChunkID;
		ymRequestDataChunkUpdate_Parms.Inm_dataChunkID2 = Inm_dataChunkID2;
		ymRequestDataChunkUpdate_Parms.Inm_oldRevisionID = Inm_oldRevisionID;

		this->ProcessEvent( pfnymRequestDataChunkUpdate, &ymRequestDataChunkUpdate_Parms, NULL );
	};

	void ymRequestDataChunkInit ( int Inm_dataChunkID, int Inm_dataChunkID2 )
	{
		static UFunction* pfnymRequestDataChunkInit = NULL;

		if ( !pfnymRequestDataChunkInit )
			pfnymRequestDataChunkInit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestDataChunkInit" );

		UCCCheatManager_execymRequestDataChunkInit_Parms ymRequestDataChunkInit_Parms;
		ymRequestDataChunkInit_Parms.Inm_dataChunkID = Inm_dataChunkID;
		ymRequestDataChunkInit_Parms.Inm_dataChunkID2 = Inm_dataChunkID2;

		this->ProcessEvent( pfnymRequestDataChunkInit, &ymRequestDataChunkInit_Parms, NULL );
	};

	void ymC2SShowEmote ( int InEmoteId )
	{
		static UFunction* pfnymC2SShowEmote = NULL;

		if ( !pfnymC2SShowEmote )
			pfnymC2SShowEmote = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymC2SShowEmote" );

		UCCCheatManager_execymC2SShowEmote_Parms ymC2SShowEmote_Parms;
		ymC2SShowEmote_Parms.InEmoteId = InEmoteId;

		this->ProcessEvent( pfnymC2SShowEmote, &ymC2SShowEmote_Parms, NULL );
	};

	void ymNotifyClanBankCash ( int InCash )
	{
		static UFunction* pfnymNotifyClanBankCash = NULL;

		if ( !pfnymNotifyClanBankCash )
			pfnymNotifyClanBankCash = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanBankCash" );

		UCCCheatManager_execymNotifyClanBankCash_Parms ymNotifyClanBankCash_Parms;
		ymNotifyClanBankCash_Parms.InCash = InCash;

		this->ProcessEvent( pfnymNotifyClanBankCash, &ymNotifyClanBankCash_Parms, NULL );
	};

	void ymNotifyClanWarTournamentDemand ( unsigned char InClanInPairState, int InMinutesLeftForMakingDemand, TArray< int > InClanmatesInDemand )
	{
		static UFunction* pfnymNotifyClanWarTournamentDemand = NULL;

		if ( !pfnymNotifyClanWarTournamentDemand )
			pfnymNotifyClanWarTournamentDemand = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanWarTournamentDemand" );

		UCCCheatManager_execymNotifyClanWarTournamentDemand_Parms ymNotifyClanWarTournamentDemand_Parms;
		ymNotifyClanWarTournamentDemand_Parms.InClanInPairState = InClanInPairState;
		ymNotifyClanWarTournamentDemand_Parms.InMinutesLeftForMakingDemand = InMinutesLeftForMakingDemand;
		ymNotifyClanWarTournamentDemand_Parms.InClanmatesInDemand = InClanmatesInDemand;

		this->ProcessEvent( pfnymNotifyClanWarTournamentDemand, &ymNotifyClanWarTournamentDemand_Parms, NULL );
	};

	void ymNotifyClanWarSeasonDemand ( unsigned long InIsMakedDemand, TArray< int > InClanmatesInDemand )
	{
		static UFunction* pfnymNotifyClanWarSeasonDemand = NULL;

		if ( !pfnymNotifyClanWarSeasonDemand )
			pfnymNotifyClanWarSeasonDemand = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanWarSeasonDemand" );

		UCCCheatManager_execymNotifyClanWarSeasonDemand_Parms ymNotifyClanWarSeasonDemand_Parms;
		ymNotifyClanWarSeasonDemand_Parms.InIsMakedDemand = InIsMakedDemand;
		ymNotifyClanWarSeasonDemand_Parms.InClanmatesInDemand = InClanmatesInDemand;

		this->ProcessEvent( pfnymNotifyClanWarSeasonDemand, &ymNotifyClanWarSeasonDemand_Parms, NULL );
	};

	void ymNotifyClanWhichWinLastClanWarTournament ( int InClanId )
	{
		static UFunction* pfnymNotifyClanWhichWinLastClanWarTournament = NULL;

		if ( !pfnymNotifyClanWhichWinLastClanWarTournament )
			pfnymNotifyClanWhichWinLastClanWarTournament = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanWhichWinLastClanWarTournament" );

		UCCCheatManager_execymNotifyClanWhichWinLastClanWarTournament_Parms ymNotifyClanWhichWinLastClanWarTournament_Parms;
		ymNotifyClanWhichWinLastClanWarTournament_Parms.InClanId = InClanId;

		this->ProcessEvent( pfnymNotifyClanWhichWinLastClanWarTournament, &ymNotifyClanWhichWinLastClanWarTournament_Parms, NULL );
	};

	void ymNotifyClanWarSeasons ( TArray< struct FClanWarSeasonDescription > InClanWarSeasons )
	{
		static UFunction* pfnymNotifyClanWarSeasons = NULL;

		if ( !pfnymNotifyClanWarSeasons )
			pfnymNotifyClanWarSeasons = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanWarSeasons" );

		UCCCheatManager_execymNotifyClanWarSeasons_Parms ymNotifyClanWarSeasons_Parms;
		memcpy( &ymNotifyClanWarSeasons_Parms.InClanWarSeasons, &InClanWarSeasons, 0xC );

		this->ProcessEvent( pfnymNotifyClanWarSeasons, &ymNotifyClanWarSeasons_Parms, NULL );
	};

	void ymClanWarForMoneyResultNotify ( unsigned char InClanWarResult, int InMoneyWin )
	{
		static UFunction* pfnymClanWarForMoneyResultNotify = NULL;

		if ( !pfnymClanWarForMoneyResultNotify )
			pfnymClanWarForMoneyResultNotify = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymClanWarForMoneyResultNotify" );

		UCCCheatManager_execymClanWarForMoneyResultNotify_Parms ymClanWarForMoneyResultNotify_Parms;
		ymClanWarForMoneyResultNotify_Parms.InClanWarResult = InClanWarResult;
		ymClanWarForMoneyResultNotify_Parms.InMoneyWin = InMoneyWin;

		this->ProcessEvent( pfnymClanWarForMoneyResultNotify, &ymClanWarForMoneyResultNotify_Parms, NULL );
	};

	void ymClanWarResultNotify ( unsigned char InClanWarResult )
	{
		static UFunction* pfnymClanWarResultNotify = NULL;

		if ( !pfnymClanWarResultNotify )
			pfnymClanWarResultNotify = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymClanWarResultNotify" );

		UCCCheatManager_execymClanWarResultNotify_Parms ymClanWarResultNotify_Parms;
		ymClanWarResultNotify_Parms.InClanWarResult = InClanWarResult;

		this->ProcessEvent( pfnymClanWarResultNotify, &ymClanWarResultNotify_Parms, NULL );
	};

	void ymS2CChangeClanWarForMoneyState ( unsigned long InIsInRivalClan, unsigned char InState )
	{
		static UFunction* pfnymS2CChangeClanWarForMoneyState = NULL;

		if ( !pfnymS2CChangeClanWarForMoneyState )
			pfnymS2CChangeClanWarForMoneyState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymS2CChangeClanWarForMoneyState" );

		UCCCheatManager_execymS2CChangeClanWarForMoneyState_Parms ymS2CChangeClanWarForMoneyState_Parms;
		ymS2CChangeClanWarForMoneyState_Parms.InIsInRivalClan = InIsInRivalClan;
		ymS2CChangeClanWarForMoneyState_Parms.InState = InState;

		this->ProcessEvent( pfnymS2CChangeClanWarForMoneyState, &ymS2CChangeClanWarForMoneyState_Parms, NULL );
	};

	void ymC2SChangeClanWarForMoneyState ( unsigned char InState )
	{
		static UFunction* pfnymC2SChangeClanWarForMoneyState = NULL;

		if ( !pfnymC2SChangeClanWarForMoneyState )
			pfnymC2SChangeClanWarForMoneyState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymC2SChangeClanWarForMoneyState" );

		UCCCheatManager_execymC2SChangeClanWarForMoneyState_Parms ymC2SChangeClanWarForMoneyState_Parms;
		ymC2SChangeClanWarForMoneyState_Parms.InState = InState;

		this->ProcessEvent( pfnymC2SChangeClanWarForMoneyState, &ymC2SChangeClanWarForMoneyState_Parms, NULL );
	};

	void ymNotifyRivalClanAboutClanWarForMoneyDemand ( TArray< int > InCharacterIds, int InStake, int InInstanceId )
	{
		static UFunction* pfnymNotifyRivalClanAboutClanWarForMoneyDemand = NULL;

		if ( !pfnymNotifyRivalClanAboutClanWarForMoneyDemand )
			pfnymNotifyRivalClanAboutClanWarForMoneyDemand = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyRivalClanAboutClanWarForMoneyDemand" );

		UCCCheatManager_execymNotifyRivalClanAboutClanWarForMoneyDemand_Parms ymNotifyRivalClanAboutClanWarForMoneyDemand_Parms;
		ymNotifyRivalClanAboutClanWarForMoneyDemand_Parms.InCharacterIds = InCharacterIds;
		ymNotifyRivalClanAboutClanWarForMoneyDemand_Parms.InStake = InStake;
		ymNotifyRivalClanAboutClanWarForMoneyDemand_Parms.InInstanceId = InInstanceId;

		this->ProcessEvent( pfnymNotifyRivalClanAboutClanWarForMoneyDemand, &ymNotifyRivalClanAboutClanWarForMoneyDemand_Parms, NULL );
	};

	void ymMakedClanWarForMoneyDemand ( unsigned long InResult )
	{
		static UFunction* pfnymMakedClanWarForMoneyDemand = NULL;

		if ( !pfnymMakedClanWarForMoneyDemand )
			pfnymMakedClanWarForMoneyDemand = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymMakedClanWarForMoneyDemand" );

		UCCCheatManager_execymMakedClanWarForMoneyDemand_Parms ymMakedClanWarForMoneyDemand_Parms;
		ymMakedClanWarForMoneyDemand_Parms.InResult = InResult;

		this->ProcessEvent( pfnymMakedClanWarForMoneyDemand, &ymMakedClanWarForMoneyDemand_Parms, NULL );
	};

	void ymMakeClanWarForMoneyDemand ( TArray< int > InCharacterIds, int InStake, int InInstanceId )
	{
		static UFunction* pfnymMakeClanWarForMoneyDemand = NULL;

		if ( !pfnymMakeClanWarForMoneyDemand )
			pfnymMakeClanWarForMoneyDemand = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymMakeClanWarForMoneyDemand" );

		UCCCheatManager_execymMakeClanWarForMoneyDemand_Parms ymMakeClanWarForMoneyDemand_Parms;
		ymMakeClanWarForMoneyDemand_Parms.InCharacterIds = InCharacterIds;
		ymMakeClanWarForMoneyDemand_Parms.InStake = InStake;
		ymMakeClanWarForMoneyDemand_Parms.InInstanceId = InInstanceId;

		this->ProcessEvent( pfnymMakeClanWarForMoneyDemand, &ymMakeClanWarForMoneyDemand_Parms, NULL );
	};

	void ymClanWarForMoneyResponse ( int InClanWarForMoneyId )
	{
		static UFunction* pfnymClanWarForMoneyResponse = NULL;

		if ( !pfnymClanWarForMoneyResponse )
			pfnymClanWarForMoneyResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymClanWarForMoneyResponse" );

		UCCCheatManager_execymClanWarForMoneyResponse_Parms ymClanWarForMoneyResponse_Parms;
		ymClanWarForMoneyResponse_Parms.InClanWarForMoneyId = InClanWarForMoneyId;

		this->ProcessEvent( pfnymClanWarForMoneyResponse, &ymClanWarForMoneyResponse_Parms, NULL );
	};

	void ymClanWarForMoneyFromClan ( int InClanId, int InClanWarForMoneyId )
	{
		static UFunction* pfnymClanWarForMoneyFromClan = NULL;

		if ( !pfnymClanWarForMoneyFromClan )
			pfnymClanWarForMoneyFromClan = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymClanWarForMoneyFromClan" );

		UCCCheatManager_execymClanWarForMoneyFromClan_Parms ymClanWarForMoneyFromClan_Parms;
		ymClanWarForMoneyFromClan_Parms.InClanId = InClanId;
		ymClanWarForMoneyFromClan_Parms.InClanWarForMoneyId = InClanWarForMoneyId;

		this->ProcessEvent( pfnymClanWarForMoneyFromClan, &ymClanWarForMoneyFromClan_Parms, NULL );
	};

	void ymCancelClanWarForMoneyResponse ( unsigned char InReason )
	{
		static UFunction* pfnymCancelClanWarForMoneyResponse = NULL;

		if ( !pfnymCancelClanWarForMoneyResponse )
			pfnymCancelClanWarForMoneyResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCancelClanWarForMoneyResponse" );

		UCCCheatManager_execymCancelClanWarForMoneyResponse_Parms ymCancelClanWarForMoneyResponse_Parms;
		ymCancelClanWarForMoneyResponse_Parms.InReason = InReason;

		this->ProcessEvent( pfnymCancelClanWarForMoneyResponse, &ymCancelClanWarForMoneyResponse_Parms, NULL );
	};

	void ymCancelClanWarForMoneyRequest ( int InClanWarForMoneyId )
	{
		static UFunction* pfnymCancelClanWarForMoneyRequest = NULL;

		if ( !pfnymCancelClanWarForMoneyRequest )
			pfnymCancelClanWarForMoneyRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCancelClanWarForMoneyRequest" );

		UCCCheatManager_execymCancelClanWarForMoneyRequest_Parms ymCancelClanWarForMoneyRequest_Parms;
		ymCancelClanWarForMoneyRequest_Parms.InClanWarForMoneyId = InClanWarForMoneyId;

		this->ProcessEvent( pfnymCancelClanWarForMoneyRequest, &ymCancelClanWarForMoneyRequest_Parms, NULL );
	};

	void ymClanWarForMoneyRequest ( int InRivalClanId )
	{
		static UFunction* pfnymClanWarForMoneyRequest = NULL;

		if ( !pfnymClanWarForMoneyRequest )
			pfnymClanWarForMoneyRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymClanWarForMoneyRequest" );

		UCCCheatManager_execymClanWarForMoneyRequest_Parms ymClanWarForMoneyRequest_Parms;
		ymClanWarForMoneyRequest_Parms.InRivalClanId = InRivalClanId;

		this->ProcessEvent( pfnymClanWarForMoneyRequest, &ymClanWarForMoneyRequest_Parms, NULL );
	};

	void ymClanWarStarting ( int InRivalClanId, unsigned long InIsClanWarForMoney )
	{
		static UFunction* pfnymClanWarStarting = NULL;

		if ( !pfnymClanWarStarting )
			pfnymClanWarStarting = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymClanWarStarting" );

		UCCCheatManager_execymClanWarStarting_Parms ymClanWarStarting_Parms;
		ymClanWarStarting_Parms.InRivalClanId = InRivalClanId;
		ymClanWarStarting_Parms.InIsClanWarForMoney = InIsClanWarForMoney;

		this->ProcessEvent( pfnymClanWarStarting, &ymClanWarStarting_Parms, NULL );
	};

	void ymDiscardedDemandClanWar ( unsigned char InResult )
	{
		static UFunction* pfnymDiscardedDemandClanWar = NULL;

		if ( !pfnymDiscardedDemandClanWar )
			pfnymDiscardedDemandClanWar = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDiscardedDemandClanWar" );

		UCCCheatManager_execymDiscardedDemandClanWar_Parms ymDiscardedDemandClanWar_Parms;
		ymDiscardedDemandClanWar_Parms.InResult = InResult;

		this->ProcessEvent( pfnymDiscardedDemandClanWar, &ymDiscardedDemandClanWar_Parms, NULL );
	};

	void ymDiscardDemandClanWar ()
	{
		static UFunction* pfnymDiscardDemandClanWar = NULL;

		if ( !pfnymDiscardDemandClanWar )
			pfnymDiscardDemandClanWar = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDiscardDemandClanWar" );

		UCCCheatManager_execymDiscardDemandClanWar_Parms ymDiscardDemandClanWar_Parms;

		this->ProcessEvent( pfnymDiscardDemandClanWar, &ymDiscardDemandClanWar_Parms, NULL );
	};

	void ymAcceptedClanWarProposition ( unsigned char InResult )
	{
		static UFunction* pfnymAcceptedClanWarProposition = NULL;

		if ( !pfnymAcceptedClanWarProposition )
			pfnymAcceptedClanWarProposition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAcceptedClanWarProposition" );

		UCCCheatManager_execymAcceptedClanWarProposition_Parms ymAcceptedClanWarProposition_Parms;
		ymAcceptedClanWarProposition_Parms.InResult = InResult;

		this->ProcessEvent( pfnymAcceptedClanWarProposition, &ymAcceptedClanWarProposition_Parms, NULL );
	};

	void ymAcceptClanWarProposition ( int InClanId, TArray< int > InCharacterIds )
	{
		static UFunction* pfnymAcceptClanWarProposition = NULL;

		if ( !pfnymAcceptClanWarProposition )
			pfnymAcceptClanWarProposition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAcceptClanWarProposition" );

		UCCCheatManager_execymAcceptClanWarProposition_Parms ymAcceptClanWarProposition_Parms;
		ymAcceptClanWarProposition_Parms.InClanId = InClanId;
		ymAcceptClanWarProposition_Parms.InCharacterIds = InCharacterIds;

		this->ProcessEvent( pfnymAcceptClanWarProposition, &ymAcceptClanWarProposition_Parms, NULL );
	};

	void ymClanWarPropositionResponse ( int InClanId )
	{
		static UFunction* pfnymClanWarPropositionResponse = NULL;

		if ( !pfnymClanWarPropositionResponse )
			pfnymClanWarPropositionResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymClanWarPropositionResponse" );

		UCCCheatManager_execymClanWarPropositionResponse_Parms ymClanWarPropositionResponse_Parms;
		ymClanWarPropositionResponse_Parms.InClanId = InClanId;

		this->ProcessEvent( pfnymClanWarPropositionResponse, &ymClanWarPropositionResponse_Parms, NULL );
	};

	void ymDemandClanWarNotify ()
	{
		static UFunction* pfnymDemandClanWarNotify = NULL;

		if ( !pfnymDemandClanWarNotify )
			pfnymDemandClanWarNotify = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDemandClanWarNotify" );

		UCCCheatManager_execymDemandClanWarNotify_Parms ymDemandClanWarNotify_Parms;

		this->ProcessEvent( pfnymDemandClanWarNotify, &ymDemandClanWarNotify_Parms, NULL );
	};

	void ymDemandedClanWar ( unsigned char InResult )
	{
		static UFunction* pfnymDemandedClanWar = NULL;

		if ( !pfnymDemandedClanWar )
			pfnymDemandedClanWar = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDemandedClanWar" );

		UCCCheatManager_execymDemandedClanWar_Parms ymDemandedClanWar_Parms;
		ymDemandedClanWar_Parms.InResult = InResult;

		this->ProcessEvent( pfnymDemandedClanWar, &ymDemandedClanWar_Parms, NULL );
	};

	void ymDemandClanWar ( TArray< int > InCharacterIds )
	{
		static UFunction* pfnymDemandClanWar = NULL;

		if ( !pfnymDemandClanWar )
			pfnymDemandClanWar = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDemandClanWar" );

		UCCCheatManager_execymDemandClanWar_Parms ymDemandClanWar_Parms;
		ymDemandClanWar_Parms.InCharacterIds = InCharacterIds;

		this->ProcessEvent( pfnymDemandClanWar, &ymDemandClanWar_Parms, NULL );
	};

	void ymChangeClanRateInfo ( int InAddedValue, unsigned char InActionType, struct FString InAdditionalInfo )
	{
		static UFunction* pfnymChangeClanRateInfo = NULL;

		if ( !pfnymChangeClanRateInfo )
			pfnymChangeClanRateInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymChangeClanRateInfo" );

		UCCCheatManager_execymChangeClanRateInfo_Parms ymChangeClanRateInfo_Parms;
		ymChangeClanRateInfo_Parms.InAddedValue = InAddedValue;
		ymChangeClanRateInfo_Parms.InActionType = InActionType;
		memcpy( &ymChangeClanRateInfo_Parms.InAdditionalInfo, &InAdditionalInfo, 0xC );

		this->ProcessEvent( pfnymChangeClanRateInfo, &ymChangeClanRateInfo_Parms, NULL );
	};

	void ymChangeCHPublicStatus ( unsigned long InIsPublic )
	{
		static UFunction* pfnymChangeCHPublicStatus = NULL;

		if ( !pfnymChangeCHPublicStatus )
			pfnymChangeCHPublicStatus = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymChangeCHPublicStatus" );

		UCCCheatManager_execymChangeCHPublicStatus_Parms ymChangeCHPublicStatus_Parms;
		ymChangeCHPublicStatus_Parms.InIsPublic = InIsPublic;

		this->ProcessEvent( pfnymChangeCHPublicStatus, &ymChangeCHPublicStatus_Parms, NULL );
	};

	void ymActualClanIdsInfo ( TArray< int > InClanIds )
	{
		static UFunction* pfnymActualClanIdsInfo = NULL;

		if ( !pfnymActualClanIdsInfo )
			pfnymActualClanIdsInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymActualClanIdsInfo" );

		UCCCheatManager_execymActualClanIdsInfo_Parms ymActualClanIdsInfo_Parms;
		ymActualClanIdsInfo_Parms.InClanIds = InClanIds;

		this->ProcessEvent( pfnymActualClanIdsInfo, &ymActualClanIdsInfo_Parms, NULL );
	};

	void ymNotifyServerDateTime ( struct FServerDateTime InDateTime )
	{
		static UFunction* pfnymNotifyServerDateTime = NULL;

		if ( !pfnymNotifyServerDateTime )
			pfnymNotifyServerDateTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyServerDateTime" );

		UCCCheatManager_execymNotifyServerDateTime_Parms ymNotifyServerDateTime_Parms;
		memcpy( &ymNotifyServerDateTime_Parms.InDateTime, &InDateTime, 0x8 );

		this->ProcessEvent( pfnymNotifyServerDateTime, &ymNotifyServerDateTime_Parms, NULL );
	};

	void ymChangeClanMessageResponse ( unsigned long InIsSuccess )
	{
		static UFunction* pfnymChangeClanMessageResponse = NULL;

		if ( !pfnymChangeClanMessageResponse )
			pfnymChangeClanMessageResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymChangeClanMessageResponse" );

		UCCCheatManager_execymChangeClanMessageResponse_Parms ymChangeClanMessageResponse_Parms;
		ymChangeClanMessageResponse_Parms.InIsSuccess = InIsSuccess;

		this->ProcessEvent( pfnymChangeClanMessageResponse, &ymChangeClanMessageResponse_Parms, NULL );
	};

	void ymChangeClanMessage ( struct FString InNewMessage )
	{
		static UFunction* pfnymChangeClanMessage = NULL;

		if ( !pfnymChangeClanMessage )
			pfnymChangeClanMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymChangeClanMessage" );

		UCCCheatManager_execymChangeClanMessage_Parms ymChangeClanMessage_Parms;
		memcpy( &ymChangeClanMessage_Parms.InNewMessage, &InNewMessage, 0xC );

		this->ProcessEvent( pfnymChangeClanMessage, &ymChangeClanMessage_Parms, NULL );
	};

	void ymTransmitLeadershipInClanResponse ( unsigned long InIsSuccess )
	{
		static UFunction* pfnymTransmitLeadershipInClanResponse = NULL;

		if ( !pfnymTransmitLeadershipInClanResponse )
			pfnymTransmitLeadershipInClanResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTransmitLeadershipInClanResponse" );

		UCCCheatManager_execymTransmitLeadershipInClanResponse_Parms ymTransmitLeadershipInClanResponse_Parms;
		ymTransmitLeadershipInClanResponse_Parms.InIsSuccess = InIsSuccess;

		this->ProcessEvent( pfnymTransmitLeadershipInClanResponse, &ymTransmitLeadershipInClanResponse_Parms, NULL );
	};

	void ymTransmitLeadershipInClan ( int InCharacterId, unsigned char InRankId )
	{
		static UFunction* pfnymTransmitLeadershipInClan = NULL;

		if ( !pfnymTransmitLeadershipInClan )
			pfnymTransmitLeadershipInClan = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTransmitLeadershipInClan" );

		UCCCheatManager_execymTransmitLeadershipInClan_Parms ymTransmitLeadershipInClan_Parms;
		ymTransmitLeadershipInClan_Parms.InCharacterId = InCharacterId;
		ymTransmitLeadershipInClan_Parms.InRankId = InRankId;

		this->ProcessEvent( pfnymTransmitLeadershipInClan, &ymTransmitLeadershipInClan_Parms, NULL );
	};

	void ymLeaveClanToNewLeaderResponse ( unsigned char InResult )
	{
		static UFunction* pfnymLeaveClanToNewLeaderResponse = NULL;

		if ( !pfnymLeaveClanToNewLeaderResponse )
			pfnymLeaveClanToNewLeaderResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLeaveClanToNewLeaderResponse" );

		UCCCheatManager_execymLeaveClanToNewLeaderResponse_Parms ymLeaveClanToNewLeaderResponse_Parms;
		ymLeaveClanToNewLeaderResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymLeaveClanToNewLeaderResponse, &ymLeaveClanToNewLeaderResponse_Parms, NULL );
	};

	void ymLeaveClanToNewLeader ( int InCharacterId )
	{
		static UFunction* pfnymLeaveClanToNewLeader = NULL;

		if ( !pfnymLeaveClanToNewLeader )
			pfnymLeaveClanToNewLeader = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLeaveClanToNewLeader" );

		UCCCheatManager_execymLeaveClanToNewLeader_Parms ymLeaveClanToNewLeader_Parms;
		ymLeaveClanToNewLeader_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymLeaveClanToNewLeader, &ymLeaveClanToNewLeader_Parms, NULL );
	};

	void ymChangedRankBankPrivileges ( unsigned long InIsSuccess )
	{
		static UFunction* pfnymChangedRankBankPrivileges = NULL;

		if ( !pfnymChangedRankBankPrivileges )
			pfnymChangedRankBankPrivileges = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymChangedRankBankPrivileges" );

		UCCCheatManager_execymChangedRankBankPrivileges_Parms ymChangedRankBankPrivileges_Parms;
		ymChangedRankBankPrivileges_Parms.InIsSuccess = InIsSuccess;

		this->ProcessEvent( pfnymChangedRankBankPrivileges, &ymChangedRankBankPrivileges_Parms, NULL );
	};

	void ymChangeRankBankPrivileges ( unsigned char InRankId, int InCashLimit, TArray< struct FClanBankRankPrivileges > InTabPrivileges )
	{
		static UFunction* pfnymChangeRankBankPrivileges = NULL;

		if ( !pfnymChangeRankBankPrivileges )
			pfnymChangeRankBankPrivileges = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymChangeRankBankPrivileges" );

		UCCCheatManager_execymChangeRankBankPrivileges_Parms ymChangeRankBankPrivileges_Parms;
		ymChangeRankBankPrivileges_Parms.InRankId = InRankId;
		ymChangeRankBankPrivileges_Parms.InCashLimit = InCashLimit;
		memcpy( &ymChangeRankBankPrivileges_Parms.InTabPrivileges, &InTabPrivileges, 0xC );

		this->ProcessEvent( pfnymChangeRankBankPrivileges, &ymChangeRankBankPrivileges_Parms, NULL );
	};

	void ymDeleteRankResponse ( unsigned long InIsSuccess )
	{
		static UFunction* pfnymDeleteRankResponse = NULL;

		if ( !pfnymDeleteRankResponse )
			pfnymDeleteRankResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeleteRankResponse" );

		UCCCheatManager_execymDeleteRankResponse_Parms ymDeleteRankResponse_Parms;
		ymDeleteRankResponse_Parms.InIsSuccess = InIsSuccess;

		this->ProcessEvent( pfnymDeleteRankResponse, &ymDeleteRankResponse_Parms, NULL );
	};

	void ymDeleteRank ( unsigned char InRankId )
	{
		static UFunction* pfnymDeleteRank = NULL;

		if ( !pfnymDeleteRank )
			pfnymDeleteRank = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeleteRank" );

		UCCCheatManager_execymDeleteRank_Parms ymDeleteRank_Parms;
		ymDeleteRank_Parms.InRankId = InRankId;

		this->ProcessEvent( pfnymDeleteRank, &ymDeleteRank_Parms, NULL );
	};

	void ymAddNewRankResponse ( unsigned long InIsSuccess )
	{
		static UFunction* pfnymAddNewRankResponse = NULL;

		if ( !pfnymAddNewRankResponse )
			pfnymAddNewRankResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAddNewRankResponse" );

		UCCCheatManager_execymAddNewRankResponse_Parms ymAddNewRankResponse_Parms;
		ymAddNewRankResponse_Parms.InIsSuccess = InIsSuccess;

		this->ProcessEvent( pfnymAddNewRankResponse, &ymAddNewRankResponse_Parms, NULL );
	};

	void ymAddNewRank ( unsigned char InLevel, int InRights, struct FString InName )
	{
		static UFunction* pfnymAddNewRank = NULL;

		if ( !pfnymAddNewRank )
			pfnymAddNewRank = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAddNewRank" );

		UCCCheatManager_execymAddNewRank_Parms ymAddNewRank_Parms;
		ymAddNewRank_Parms.InLevel = InLevel;
		ymAddNewRank_Parms.InRights = InRights;
		memcpy( &ymAddNewRank_Parms.InName, &InName, 0xC );

		this->ProcessEvent( pfnymAddNewRank, &ymAddNewRank_Parms, NULL );
	};

	void ymChangeRankResponse ( unsigned long InIsSuccess )
	{
		static UFunction* pfnymChangeRankResponse = NULL;

		if ( !pfnymChangeRankResponse )
			pfnymChangeRankResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymChangeRankResponse" );

		UCCCheatManager_execymChangeRankResponse_Parms ymChangeRankResponse_Parms;
		ymChangeRankResponse_Parms.InIsSuccess = InIsSuccess;

		this->ProcessEvent( pfnymChangeRankResponse, &ymChangeRankResponse_Parms, NULL );
	};

	void ymChangeRank ( unsigned char InRankId, unsigned char InNewLevel, int InNewRights, struct FString InNewName )
	{
		static UFunction* pfnymChangeRank = NULL;

		if ( !pfnymChangeRank )
			pfnymChangeRank = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymChangeRank" );

		UCCCheatManager_execymChangeRank_Parms ymChangeRank_Parms;
		ymChangeRank_Parms.InRankId = InRankId;
		ymChangeRank_Parms.InNewLevel = InNewLevel;
		ymChangeRank_Parms.InNewRights = InNewRights;
		memcpy( &ymChangeRank_Parms.InNewName, &InNewName, 0xC );

		this->ProcessEvent( pfnymChangeRank, &ymChangeRank_Parms, NULL );
	};

	void ymSetClanmateRankResponse ( unsigned long InIsSuccess )
	{
		static UFunction* pfnymSetClanmateRankResponse = NULL;

		if ( !pfnymSetClanmateRankResponse )
			pfnymSetClanmateRankResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSetClanmateRankResponse" );

		UCCCheatManager_execymSetClanmateRankResponse_Parms ymSetClanmateRankResponse_Parms;
		ymSetClanmateRankResponse_Parms.InIsSuccess = InIsSuccess;

		this->ProcessEvent( pfnymSetClanmateRankResponse, &ymSetClanmateRankResponse_Parms, NULL );
	};

	void ymSetClanmateRank ( int InCharacterId, unsigned char InRankId )
	{
		static UFunction* pfnymSetClanmateRank = NULL;

		if ( !pfnymSetClanmateRank )
			pfnymSetClanmateRank = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSetClanmateRank" );

		UCCCheatManager_execymSetClanmateRank_Parms ymSetClanmateRank_Parms;
		ymSetClanmateRank_Parms.InCharacterId = InCharacterId;
		ymSetClanmateRank_Parms.InRankId = InRankId;

		this->ProcessEvent( pfnymSetClanmateRank, &ymSetClanmateRank_Parms, NULL );
	};

	void ymChangeSecureClanmateNotesResponse ( unsigned long InIsSuccess )
	{
		static UFunction* pfnymChangeSecureClanmateNotesResponse = NULL;

		if ( !pfnymChangeSecureClanmateNotesResponse )
			pfnymChangeSecureClanmateNotesResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymChangeSecureClanmateNotesResponse" );

		UCCCheatManager_execymChangeSecureClanmateNotesResponse_Parms ymChangeSecureClanmateNotesResponse_Parms;
		ymChangeSecureClanmateNotesResponse_Parms.InIsSuccess = InIsSuccess;

		this->ProcessEvent( pfnymChangeSecureClanmateNotesResponse, &ymChangeSecureClanmateNotesResponse_Parms, NULL );
	};

	void ymChangeSecureClanmateNote ( int InCharacterId, struct FString InNewNote )
	{
		static UFunction* pfnymChangeSecureClanmateNote = NULL;

		if ( !pfnymChangeSecureClanmateNote )
			pfnymChangeSecureClanmateNote = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymChangeSecureClanmateNote" );

		UCCCheatManager_execymChangeSecureClanmateNote_Parms ymChangeSecureClanmateNote_Parms;
		ymChangeSecureClanmateNote_Parms.InCharacterId = InCharacterId;
		memcpy( &ymChangeSecureClanmateNote_Parms.InNewNote, &InNewNote, 0xC );

		this->ProcessEvent( pfnymChangeSecureClanmateNote, &ymChangeSecureClanmateNote_Parms, NULL );
	};

	void ymChangeClanmateNotesResponse ( unsigned long InIsSuccess )
	{
		static UFunction* pfnymChangeClanmateNotesResponse = NULL;

		if ( !pfnymChangeClanmateNotesResponse )
			pfnymChangeClanmateNotesResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymChangeClanmateNotesResponse" );

		UCCCheatManager_execymChangeClanmateNotesResponse_Parms ymChangeClanmateNotesResponse_Parms;
		ymChangeClanmateNotesResponse_Parms.InIsSuccess = InIsSuccess;

		this->ProcessEvent( pfnymChangeClanmateNotesResponse, &ymChangeClanmateNotesResponse_Parms, NULL );
	};

	void ymChangeClanmateNote ( int InCharacterId, struct FString InNewNote )
	{
		static UFunction* pfnymChangeClanmateNote = NULL;

		if ( !pfnymChangeClanmateNote )
			pfnymChangeClanmateNote = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymChangeClanmateNote" );

		UCCCheatManager_execymChangeClanmateNote_Parms ymChangeClanmateNote_Parms;
		ymChangeClanmateNote_Parms.InCharacterId = InCharacterId;
		memcpy( &ymChangeClanmateNote_Parms.InNewNote, &InNewNote, 0xC );

		this->ProcessEvent( pfnymChangeClanmateNote, &ymChangeClanmateNote_Parms, NULL );
	};

	void ymChangeClanDescription ( struct FString InDescription )
	{
		static UFunction* pfnymChangeClanDescription = NULL;

		if ( !pfnymChangeClanDescription )
			pfnymChangeClanDescription = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymChangeClanDescription" );

		UCCCheatManager_execymChangeClanDescription_Parms ymChangeClanDescription_Parms;
		memcpy( &ymChangeClanDescription_Parms.InDescription, &InDescription, 0xC );

		this->ProcessEvent( pfnymChangeClanDescription, &ymChangeClanDescription_Parms, NULL );
	};

	void ymRaiseClanLevelResponse ( unsigned long InIsSuccess, int InSecondsLeftForCooldown )
	{
		static UFunction* pfnymRaiseClanLevelResponse = NULL;

		if ( !pfnymRaiseClanLevelResponse )
			pfnymRaiseClanLevelResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRaiseClanLevelResponse" );

		UCCCheatManager_execymRaiseClanLevelResponse_Parms ymRaiseClanLevelResponse_Parms;
		ymRaiseClanLevelResponse_Parms.InIsSuccess = InIsSuccess;
		ymRaiseClanLevelResponse_Parms.InSecondsLeftForCooldown = InSecondsLeftForCooldown;

		this->ProcessEvent( pfnymRaiseClanLevelResponse, &ymRaiseClanLevelResponse_Parms, NULL );
	};

	void ymRaiseClanLevel ()
	{
		static UFunction* pfnymRaiseClanLevel = NULL;

		if ( !pfnymRaiseClanLevel )
			pfnymRaiseClanLevel = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRaiseClanLevel" );

		UCCCheatManager_execymRaiseClanLevel_Parms ymRaiseClanLevel_Parms;

		this->ProcessEvent( pfnymRaiseClanLevel, &ymRaiseClanLevel_Parms, NULL );
	};

	void ymNotifyKickFromClan ( int InCharacterId )
	{
		static UFunction* pfnymNotifyKickFromClan = NULL;

		if ( !pfnymNotifyKickFromClan )
			pfnymNotifyKickFromClan = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyKickFromClan" );

		UCCCheatManager_execymNotifyKickFromClan_Parms ymNotifyKickFromClan_Parms;
		ymNotifyKickFromClan_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymNotifyKickFromClan, &ymNotifyKickFromClan_Parms, NULL );
	};

	void ymKickFromClanResponse ( unsigned char InResult )
	{
		static UFunction* pfnymKickFromClanResponse = NULL;

		if ( !pfnymKickFromClanResponse )
			pfnymKickFromClanResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymKickFromClanResponse" );

		UCCCheatManager_execymKickFromClanResponse_Parms ymKickFromClanResponse_Parms;
		ymKickFromClanResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymKickFromClanResponse, &ymKickFromClanResponse_Parms, NULL );
	};

	void ymKickFromClan ( int InCharacterId )
	{
		static UFunction* pfnymKickFromClan = NULL;

		if ( !pfnymKickFromClan )
			pfnymKickFromClan = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymKickFromClan" );

		UCCCheatManager_execymKickFromClan_Parms ymKickFromClan_Parms;
		ymKickFromClan_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymKickFromClan, &ymKickFromClan_Parms, NULL );
	};

	void ymLeaveClanResponse ( unsigned char InResult )
	{
		static UFunction* pfnymLeaveClanResponse = NULL;

		if ( !pfnymLeaveClanResponse )
			pfnymLeaveClanResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLeaveClanResponse" );

		UCCCheatManager_execymLeaveClanResponse_Parms ymLeaveClanResponse_Parms;
		ymLeaveClanResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymLeaveClanResponse, &ymLeaveClanResponse_Parms, NULL );
	};

	void ymLeaveClan ()
	{
		static UFunction* pfnymLeaveClan = NULL;

		if ( !pfnymLeaveClan )
			pfnymLeaveClan = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLeaveClan" );

		UCCCheatManager_execymLeaveClan_Parms ymLeaveClan_Parms;

		this->ProcessEvent( pfnymLeaveClan, &ymLeaveClan_Parms, NULL );
	};

	void ymExpireInvitation ( int InInvitationId )
	{
		static UFunction* pfnymExpireInvitation = NULL;

		if ( !pfnymExpireInvitation )
			pfnymExpireInvitation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymExpireInvitation" );

		UCCCheatManager_execymExpireInvitation_Parms ymExpireInvitation_Parms;
		ymExpireInvitation_Parms.InInvitationId = InInvitationId;

		this->ProcessEvent( pfnymExpireInvitation, &ymExpireInvitation_Parms, NULL );
	};

	void ymNotifyJoinToClanFailure ( unsigned char InResult, int InClanId )
	{
		static UFunction* pfnymNotifyJoinToClanFailure = NULL;

		if ( !pfnymNotifyJoinToClanFailure )
			pfnymNotifyJoinToClanFailure = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyJoinToClanFailure" );

		UCCCheatManager_execymNotifyJoinToClanFailure_Parms ymNotifyJoinToClanFailure_Parms;
		ymNotifyJoinToClanFailure_Parms.InResult = InResult;
		ymNotifyJoinToClanFailure_Parms.InClanId = InClanId;

		this->ProcessEvent( pfnymNotifyJoinToClanFailure, &ymNotifyJoinToClanFailure_Parms, NULL );
	};

	void ymRespondToClanInvitation ( unsigned char InResult, int InInvitationId )
	{
		static UFunction* pfnymRespondToClanInvitation = NULL;

		if ( !pfnymRespondToClanInvitation )
			pfnymRespondToClanInvitation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRespondToClanInvitation" );

		UCCCheatManager_execymRespondToClanInvitation_Parms ymRespondToClanInvitation_Parms;
		ymRespondToClanInvitation_Parms.InResult = InResult;
		ymRespondToClanInvitation_Parms.InInvitationId = InInvitationId;

		this->ProcessEvent( pfnymRespondToClanInvitation, &ymRespondToClanInvitation_Parms, NULL );
	};

	void ymInviteToClanRespond ( unsigned char InResult )
	{
		static UFunction* pfnymInviteToClanRespond = NULL;

		if ( !pfnymInviteToClanRespond )
			pfnymInviteToClanRespond = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInviteToClanRespond" );

		UCCCheatManager_execymInviteToClanRespond_Parms ymInviteToClanRespond_Parms;
		ymInviteToClanRespond_Parms.InResult = InResult;

		this->ProcessEvent( pfnymInviteToClanRespond, &ymInviteToClanRespond_Parms, NULL );
	};

	void ymInviteToClan ( struct FString InCharacterName )
	{
		static UFunction* pfnymInviteToClan = NULL;

		if ( !pfnymInviteToClan )
			pfnymInviteToClan = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInviteToClan" );

		UCCCheatManager_execymInviteToClan_Parms ymInviteToClan_Parms;
		memcpy( &ymInviteToClan_Parms.InCharacterName, &InCharacterName, 0xC );

		this->ProcessEvent( pfnymInviteToClan, &ymInviteToClan_Parms, NULL );
	};

	void ymSignPetitionStatus ( unsigned char InStatus )
	{
		static UFunction* pfnymSignPetitionStatus = NULL;

		if ( !pfnymSignPetitionStatus )
			pfnymSignPetitionStatus = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSignPetitionStatus" );

		UCCCheatManager_execymSignPetitionStatus_Parms ymSignPetitionStatus_Parms;
		ymSignPetitionStatus_Parms.InStatus = InStatus;

		this->ProcessEvent( pfnymSignPetitionStatus, &ymSignPetitionStatus_Parms, NULL );
	};

	void ymNotifyClanPetitionResponse ( unsigned char InResult )
	{
		static UFunction* pfnymNotifyClanPetitionResponse = NULL;

		if ( !pfnymNotifyClanPetitionResponse )
			pfnymNotifyClanPetitionResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanPetitionResponse" );

		UCCCheatManager_execymNotifyClanPetitionResponse_Parms ymNotifyClanPetitionResponse_Parms;
		ymNotifyClanPetitionResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymNotifyClanPetitionResponse, &ymNotifyClanPetitionResponse_Parms, NULL );
	};

	void ymRespondToClanPetitition ( unsigned long InResult, int InPetitionId )
	{
		static UFunction* pfnymRespondToClanPetitition = NULL;

		if ( !pfnymRespondToClanPetitition )
			pfnymRespondToClanPetitition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRespondToClanPetitition" );

		UCCCheatManager_execymRespondToClanPetitition_Parms ymRespondToClanPetitition_Parms;
		ymRespondToClanPetitition_Parms.InResult = InResult;
		ymRespondToClanPetitition_Parms.InPetitionId = InPetitionId;

		this->ProcessEvent( pfnymRespondToClanPetitition, &ymRespondToClanPetitition_Parms, NULL );
	};

	void ymSendPetitionResponse ( unsigned char InResult )
	{
		static UFunction* pfnymSendPetitionResponse = NULL;

		if ( !pfnymSendPetitionResponse )
			pfnymSendPetitionResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSendPetitionResponse" );

		UCCCheatManager_execymSendPetitionResponse_Parms ymSendPetitionResponse_Parms;
		ymSendPetitionResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymSendPetitionResponse, &ymSendPetitionResponse_Parms, NULL );
	};

	void ymSendPetition ( struct FString InAddresseeName )
	{
		static UFunction* pfnymSendPetition = NULL;

		if ( !pfnymSendPetition )
			pfnymSendPetition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSendPetition" );

		UCCCheatManager_execymSendPetition_Parms ymSendPetition_Parms;
		memcpy( &ymSendPetition_Parms.InAddresseeName, &InAddresseeName, 0xC );

		this->ProcessEvent( pfnymSendPetition, &ymSendPetition_Parms, NULL );
	};

	void ymNotifyClanDisbandment ( int InClanId )
	{
		static UFunction* pfnymNotifyClanDisbandment = NULL;

		if ( !pfnymNotifyClanDisbandment )
			pfnymNotifyClanDisbandment = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyClanDisbandment" );

		UCCCheatManager_execymNotifyClanDisbandment_Parms ymNotifyClanDisbandment_Parms;
		ymNotifyClanDisbandment_Parms.InClanId = InClanId;

		this->ProcessEvent( pfnymNotifyClanDisbandment, &ymNotifyClanDisbandment_Parms, NULL );
	};

	void ymDisbandClanResponse ( unsigned char InResult )
	{
		static UFunction* pfnymDisbandClanResponse = NULL;

		if ( !pfnymDisbandClanResponse )
			pfnymDisbandClanResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDisbandClanResponse" );

		UCCCheatManager_execymDisbandClanResponse_Parms ymDisbandClanResponse_Parms;
		ymDisbandClanResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymDisbandClanResponse, &ymDisbandClanResponse_Parms, NULL );
	};

	void ymDisbandClan ()
	{
		static UFunction* pfnymDisbandClan = NULL;

		if ( !pfnymDisbandClan )
			pfnymDisbandClan = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDisbandClan" );

		UCCCheatManager_execymDisbandClan_Parms ymDisbandClan_Parms;

		this->ProcessEvent( pfnymDisbandClan, &ymDisbandClan_Parms, NULL );
	};

	void ymChangedClanLogo ( unsigned char InResult )
	{
		static UFunction* pfnymChangedClanLogo = NULL;

		if ( !pfnymChangedClanLogo )
			pfnymChangedClanLogo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymChangedClanLogo" );

		UCCCheatManager_execymChangedClanLogo_Parms ymChangedClanLogo_Parms;
		ymChangedClanLogo_Parms.InResult = InResult;

		this->ProcessEvent( pfnymChangedClanLogo, &ymChangedClanLogo_Parms, NULL );
	};

	void ymChangeClanLogo ( int InClanLogoId, int InClanLogoColorId, unsigned long InPayFronClanBank )
	{
		static UFunction* pfnymChangeClanLogo = NULL;

		if ( !pfnymChangeClanLogo )
			pfnymChangeClanLogo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymChangeClanLogo" );

		UCCCheatManager_execymChangeClanLogo_Parms ymChangeClanLogo_Parms;
		ymChangeClanLogo_Parms.InClanLogoId = InClanLogoId;
		ymChangeClanLogo_Parms.InClanLogoColorId = InClanLogoColorId;
		ymChangeClanLogo_Parms.InPayFronClanBank = InPayFronClanBank;

		this->ProcessEvent( pfnymChangeClanLogo, &ymChangeClanLogo_Parms, NULL );
	};

	void ymClanCreationCanceled ( unsigned char InResult )
	{
		static UFunction* pfnymClanCreationCanceled = NULL;

		if ( !pfnymClanCreationCanceled )
			pfnymClanCreationCanceled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymClanCreationCanceled" );

		UCCCheatManager_execymClanCreationCanceled_Parms ymClanCreationCanceled_Parms;
		ymClanCreationCanceled_Parms.InResult = InResult;

		this->ProcessEvent( pfnymClanCreationCanceled, &ymClanCreationCanceled_Parms, NULL );
	};

	void ymCancelClanCreation ()
	{
		static UFunction* pfnymCancelClanCreation = NULL;

		if ( !pfnymCancelClanCreation )
			pfnymCancelClanCreation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCancelClanCreation" );

		UCCCheatManager_execymCancelClanCreation_Parms ymCancelClanCreation_Parms;

		this->ProcessEvent( pfnymCancelClanCreation, &ymCancelClanCreation_Parms, NULL );
	};

	void ymCreateClanResponse ( unsigned long InIsSuccess, int InClanId )
	{
		static UFunction* pfnymCreateClanResponse = NULL;

		if ( !pfnymCreateClanResponse )
			pfnymCreateClanResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCreateClanResponse" );

		UCCCheatManager_execymCreateClanResponse_Parms ymCreateClanResponse_Parms;
		ymCreateClanResponse_Parms.InIsSuccess = InIsSuccess;
		ymCreateClanResponse_Parms.InClanId = InClanId;

		this->ProcessEvent( pfnymCreateClanResponse, &ymCreateClanResponse_Parms, NULL );
	};

	void ymCreateClan ( struct FString InName, struct FString InDescription, int InClanLogoId, int InClanLogoColorId )
	{
		static UFunction* pfnymCreateClan = NULL;

		if ( !pfnymCreateClan )
			pfnymCreateClan = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCreateClan" );

		UCCCheatManager_execymCreateClan_Parms ymCreateClan_Parms;
		memcpy( &ymCreateClan_Parms.InName, &InName, 0xC );
		memcpy( &ymCreateClan_Parms.InDescription, &InDescription, 0xC );
		ymCreateClan_Parms.InClanLogoId = InClanLogoId;
		ymCreateClan_Parms.InClanLogoColorId = InClanLogoColorId;

		this->ProcessEvent( pfnymCreateClan, &ymCreateClan_Parms, NULL );
	};

	void ymClanRegister ( int Inm_ticket )
	{
		static UFunction* pfnymClanRegister = NULL;

		if ( !pfnymClanRegister )
			pfnymClanRegister = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymClanRegister" );

		UCCCheatManager_execymClanRegister_Parms ymClanRegister_Parms;
		ymClanRegister_Parms.Inm_ticket = Inm_ticket;

		this->ProcessEvent( pfnymClanRegister, &ymClanRegister_Parms, NULL );
	};

	void ymCraftRoomLeft ()
	{
		static UFunction* pfnymCraftRoomLeft = NULL;

		if ( !pfnymCraftRoomLeft )
			pfnymCraftRoomLeft = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCraftRoomLeft" );

		UCCCheatManager_execymCraftRoomLeft_Parms ymCraftRoomLeft_Parms;

		this->ProcessEvent( pfnymCraftRoomLeft, &ymCraftRoomLeft_Parms, NULL );
	};

	void ymCraftRoomEntered ()
	{
		static UFunction* pfnymCraftRoomEntered = NULL;

		if ( !pfnymCraftRoomEntered )
			pfnymCraftRoomEntered = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCraftRoomEntered" );

		UCCCheatManager_execymCraftRoomEntered_Parms ymCraftRoomEntered_Parms;

		this->ProcessEvent( pfnymCraftRoomEntered, &ymCraftRoomEntered_Parms, NULL );
	};

	void ymNotifyAboutReadedEventDeclarations ( TArray< int > InEventMessageId )
	{
		static UFunction* pfnymNotifyAboutReadedEventDeclarations = NULL;

		if ( !pfnymNotifyAboutReadedEventDeclarations )
			pfnymNotifyAboutReadedEventDeclarations = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyAboutReadedEventDeclarations" );

		UCCCheatManager_execymNotifyAboutReadedEventDeclarations_Parms ymNotifyAboutReadedEventDeclarations_Parms;
		ymNotifyAboutReadedEventDeclarations_Parms.InEventMessageId = InEventMessageId;

		this->ProcessEvent( pfnymNotifyAboutReadedEventDeclarations, &ymNotifyAboutReadedEventDeclarations_Parms, NULL );
	};

	void ymNotifyReadEventDeclaration ( int InEventMessageId )
	{
		static UFunction* pfnymNotifyReadEventDeclaration = NULL;

		if ( !pfnymNotifyReadEventDeclaration )
			pfnymNotifyReadEventDeclaration = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyReadEventDeclaration" );

		UCCCheatManager_execymNotifyReadEventDeclaration_Parms ymNotifyReadEventDeclaration_Parms;
		ymNotifyReadEventDeclaration_Parms.InEventMessageId = InEventMessageId;

		this->ProcessEvent( pfnymNotifyReadEventDeclaration, &ymNotifyReadEventDeclaration_Parms, NULL );
	};

	void ymNotifyEventDeclarationsChangedInOffline ( unsigned char InType )
	{
		static UFunction* pfnymNotifyEventDeclarationsChangedInOffline = NULL;

		if ( !pfnymNotifyEventDeclarationsChangedInOffline )
			pfnymNotifyEventDeclarationsChangedInOffline = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyEventDeclarationsChangedInOffline" );

		UCCCheatManager_execymNotifyEventDeclarationsChangedInOffline_Parms ymNotifyEventDeclarationsChangedInOffline_Parms;
		ymNotifyEventDeclarationsChangedInOffline_Parms.InType = InType;

		this->ProcessEvent( pfnymNotifyEventDeclarationsChangedInOffline, &ymNotifyEventDeclarationsChangedInOffline_Parms, NULL );
	};

	void ymRejectedEventDeclaration ( unsigned char InResult )
	{
		static UFunction* pfnymRejectedEventDeclaration = NULL;

		if ( !pfnymRejectedEventDeclaration )
			pfnymRejectedEventDeclaration = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRejectedEventDeclaration" );

		UCCCheatManager_execymRejectedEventDeclaration_Parms ymRejectedEventDeclaration_Parms;
		ymRejectedEventDeclaration_Parms.InResult = InResult;

		this->ProcessEvent( pfnymRejectedEventDeclaration, &ymRejectedEventDeclaration_Parms, NULL );
	};

	void ymRejectEventDeclaration ( int InEventMessageId )
	{
		static UFunction* pfnymRejectEventDeclaration = NULL;

		if ( !pfnymRejectEventDeclaration )
			pfnymRejectEventDeclaration = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRejectEventDeclaration" );

		UCCCheatManager_execymRejectEventDeclaration_Parms ymRejectEventDeclaration_Parms;
		ymRejectEventDeclaration_Parms.InEventMessageId = InEventMessageId;

		this->ProcessEvent( pfnymRejectEventDeclaration, &ymRejectEventDeclaration_Parms, NULL );
	};

	void ymAcceptedEventDeclaration ( unsigned char InResult )
	{
		static UFunction* pfnymAcceptedEventDeclaration = NULL;

		if ( !pfnymAcceptedEventDeclaration )
			pfnymAcceptedEventDeclaration = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAcceptedEventDeclaration" );

		UCCCheatManager_execymAcceptedEventDeclaration_Parms ymAcceptedEventDeclaration_Parms;
		ymAcceptedEventDeclaration_Parms.InResult = InResult;

		this->ProcessEvent( pfnymAcceptedEventDeclaration, &ymAcceptedEventDeclaration_Parms, NULL );
	};

	void ymAcceptEventDeclaration ( int InEventMessageId )
	{
		static UFunction* pfnymAcceptEventDeclaration = NULL;

		if ( !pfnymAcceptEventDeclaration )
			pfnymAcceptEventDeclaration = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAcceptEventDeclaration" );

		UCCCheatManager_execymAcceptEventDeclaration_Parms ymAcceptEventDeclaration_Parms;
		ymAcceptEventDeclaration_Parms.InEventMessageId = InEventMessageId;

		this->ProcessEvent( pfnymAcceptEventDeclaration, &ymAcceptEventDeclaration_Parms, NULL );
	};

	void ymNotifyDeleteEventDeclaration ( int InEventMessageId )
	{
		static UFunction* pfnymNotifyDeleteEventDeclaration = NULL;

		if ( !pfnymNotifyDeleteEventDeclaration )
			pfnymNotifyDeleteEventDeclaration = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyDeleteEventDeclaration" );

		UCCCheatManager_execymNotifyDeleteEventDeclaration_Parms ymNotifyDeleteEventDeclaration_Parms;
		ymNotifyDeleteEventDeclaration_Parms.InEventMessageId = InEventMessageId;

		this->ProcessEvent( pfnymNotifyDeleteEventDeclaration, &ymNotifyDeleteEventDeclaration_Parms, NULL );
	};

	void ymDeletedEventDeclaration ( unsigned char InResult )
	{
		static UFunction* pfnymDeletedEventDeclaration = NULL;

		if ( !pfnymDeletedEventDeclaration )
			pfnymDeletedEventDeclaration = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeletedEventDeclaration" );

		UCCCheatManager_execymDeletedEventDeclaration_Parms ymDeletedEventDeclaration_Parms;
		ymDeletedEventDeclaration_Parms.InResult = InResult;

		this->ProcessEvent( pfnymDeletedEventDeclaration, &ymDeletedEventDeclaration_Parms, NULL );
	};

	void ymDeleteEventDeclaration ( int InEventMessageId )
	{
		static UFunction* pfnymDeleteEventDeclaration = NULL;

		if ( !pfnymDeleteEventDeclaration )
			pfnymDeleteEventDeclaration = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeleteEventDeclaration" );

		UCCCheatManager_execymDeleteEventDeclaration_Parms ymDeleteEventDeclaration_Parms;
		ymDeleteEventDeclaration_Parms.InEventMessageId = InEventMessageId;

		this->ProcessEvent( pfnymDeleteEventDeclaration, &ymDeleteEventDeclaration_Parms, NULL );
	};

	void ymUpdatedEventDeclaration ( unsigned char InResult )
	{
		static UFunction* pfnymUpdatedEventDeclaration = NULL;

		if ( !pfnymUpdatedEventDeclaration )
			pfnymUpdatedEventDeclaration = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdatedEventDeclaration" );

		UCCCheatManager_execymUpdatedEventDeclaration_Parms ymUpdatedEventDeclaration_Parms;
		ymUpdatedEventDeclaration_Parms.InResult = InResult;

		this->ProcessEvent( pfnymUpdatedEventDeclaration, &ymUpdatedEventDeclaration_Parms, NULL );
	};

	void ymUpdateEventDeclaration ( int InEventMessageId, struct FServerDateTime InDateTime, int InTypeId, struct FString InTitle, struct FString InText, int InEventDuration, unsigned long InCreatorWillPresent, unsigned long InRequestForVisit )
	{
		static UFunction* pfnymUpdateEventDeclaration = NULL;

		if ( !pfnymUpdateEventDeclaration )
			pfnymUpdateEventDeclaration = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymUpdateEventDeclaration" );

		UCCCheatManager_execymUpdateEventDeclaration_Parms ymUpdateEventDeclaration_Parms;
		ymUpdateEventDeclaration_Parms.InEventMessageId = InEventMessageId;
		memcpy( &ymUpdateEventDeclaration_Parms.InDateTime, &InDateTime, 0x8 );
		ymUpdateEventDeclaration_Parms.InTypeId = InTypeId;
		memcpy( &ymUpdateEventDeclaration_Parms.InTitle, &InTitle, 0xC );
		memcpy( &ymUpdateEventDeclaration_Parms.InText, &InText, 0xC );
		ymUpdateEventDeclaration_Parms.InEventDuration = InEventDuration;
		ymUpdateEventDeclaration_Parms.InCreatorWillPresent = InCreatorWillPresent;
		ymUpdateEventDeclaration_Parms.InRequestForVisit = InRequestForVisit;

		this->ProcessEvent( pfnymUpdateEventDeclaration, &ymUpdateEventDeclaration_Parms, NULL );
	};

	void ymCreatedEventDeclaration ( unsigned char InResult )
	{
		static UFunction* pfnymCreatedEventDeclaration = NULL;

		if ( !pfnymCreatedEventDeclaration )
			pfnymCreatedEventDeclaration = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCreatedEventDeclaration" );

		UCCCheatManager_execymCreatedEventDeclaration_Parms ymCreatedEventDeclaration_Parms;
		ymCreatedEventDeclaration_Parms.InResult = InResult;

		this->ProcessEvent( pfnymCreatedEventDeclaration, &ymCreatedEventDeclaration_Parms, NULL );
	};

	void ymCreateEventDeclaration ( struct FServerDateTime InDateTime, int InTypeId, struct FString InTitle, struct FString InText, TArray< unsigned char > InRankIDs, int InEventDuration, unsigned long InCreatorWillPresent, int InMinCharacterLevel, int InMaxCharacterLevel, unsigned long InPrivateMessageStatus, unsigned long InRequestForVisit )
	{
		static UFunction* pfnymCreateEventDeclaration = NULL;

		if ( !pfnymCreateEventDeclaration )
			pfnymCreateEventDeclaration = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCreateEventDeclaration" );

		UCCCheatManager_execymCreateEventDeclaration_Parms ymCreateEventDeclaration_Parms;
		memcpy( &ymCreateEventDeclaration_Parms.InDateTime, &InDateTime, 0x8 );
		ymCreateEventDeclaration_Parms.InTypeId = InTypeId;
		memcpy( &ymCreateEventDeclaration_Parms.InTitle, &InTitle, 0xC );
		memcpy( &ymCreateEventDeclaration_Parms.InText, &InText, 0xC );
		ymCreateEventDeclaration_Parms.InRankIDs = InRankIDs;
		ymCreateEventDeclaration_Parms.InEventDuration = InEventDuration;
		ymCreateEventDeclaration_Parms.InCreatorWillPresent = InCreatorWillPresent;
		ymCreateEventDeclaration_Parms.InMinCharacterLevel = InMinCharacterLevel;
		ymCreateEventDeclaration_Parms.InMaxCharacterLevel = InMaxCharacterLevel;
		ymCreateEventDeclaration_Parms.InPrivateMessageStatus = InPrivateMessageStatus;
		ymCreateEventDeclaration_Parms.InRequestForVisit = InRequestForVisit;

		this->ProcessEvent( pfnymCreateEventDeclaration, &ymCreateEventDeclaration_Parms, NULL );
	};

	void ymCreatedEventManager ( unsigned char InResult )
	{
		static UFunction* pfnymCreatedEventManager = NULL;

		if ( !pfnymCreatedEventManager )
			pfnymCreatedEventManager = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCreatedEventManager" );

		UCCCheatManager_execymCreatedEventManager_Parms ymCreatedEventManager_Parms;
		ymCreatedEventManager_Parms.InResult = InResult;

		this->ProcessEvent( pfnymCreatedEventManager, &ymCreatedEventManager_Parms, NULL );
	};

	void ymCreateEventManager ()
	{
		static UFunction* pfnymCreateEventManager = NULL;

		if ( !pfnymCreateEventManager )
			pfnymCreateEventManager = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCreateEventManager" );

		UCCCheatManager_execymCreateEventManager_Parms ymCreateEventManager_Parms;

		this->ProcessEvent( pfnymCreateEventManager, &ymCreateEventManager_Parms, NULL );
	};

	void ymCurrentPlanProductionResponse ( int InCurrentPlanId, int InNextPlanId, int InSecondsLeft, unsigned char InCurrentPlanProductionResult )
	{
		static UFunction* pfnymCurrentPlanProductionResponse = NULL;

		if ( !pfnymCurrentPlanProductionResponse )
			pfnymCurrentPlanProductionResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCurrentPlanProductionResponse" );

		UCCCheatManager_execymCurrentPlanProductionResponse_Parms ymCurrentPlanProductionResponse_Parms;
		ymCurrentPlanProductionResponse_Parms.InCurrentPlanId = InCurrentPlanId;
		ymCurrentPlanProductionResponse_Parms.InNextPlanId = InNextPlanId;
		ymCurrentPlanProductionResponse_Parms.InSecondsLeft = InSecondsLeft;
		ymCurrentPlanProductionResponse_Parms.InCurrentPlanProductionResult = InCurrentPlanProductionResult;

		this->ProcessEvent( pfnymCurrentPlanProductionResponse, &ymCurrentPlanProductionResponse_Parms, NULL );
	};

	void ymAppointedPlanProduction ( unsigned char InResult )
	{
		static UFunction* pfnymAppointedPlanProduction = NULL;

		if ( !pfnymAppointedPlanProduction )
			pfnymAppointedPlanProduction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAppointedPlanProduction" );

		UCCCheatManager_execymAppointedPlanProduction_Parms ymAppointedPlanProduction_Parms;
		ymAppointedPlanProduction_Parms.InResult = InResult;

		this->ProcessEvent( pfnymAppointedPlanProduction, &ymAppointedPlanProduction_Parms, NULL );
	};

	void ymAppointPlanProduction ( int InPlanId )
	{
		static UFunction* pfnymAppointPlanProduction = NULL;

		if ( !pfnymAppointPlanProduction )
			pfnymAppointPlanProduction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAppointPlanProduction" );

		UCCCheatManager_execymAppointPlanProduction_Parms ymAppointPlanProduction_Parms;
		ymAppointPlanProduction_Parms.InPlanId = InPlanId;

		this->ProcessEvent( pfnymAppointPlanProduction, &ymAppointPlanProduction_Parms, NULL );
	};

	void ymTookOutPlanProduction ( unsigned char InResult )
	{
		static UFunction* pfnymTookOutPlanProduction = NULL;

		if ( !pfnymTookOutPlanProduction )
			pfnymTookOutPlanProduction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTookOutPlanProduction" );

		UCCCheatManager_execymTookOutPlanProduction_Parms ymTookOutPlanProduction_Parms;
		ymTookOutPlanProduction_Parms.InResult = InResult;

		this->ProcessEvent( pfnymTookOutPlanProduction, &ymTookOutPlanProduction_Parms, NULL );
	};

	void ymTakeOutPlanProduction ()
	{
		static UFunction* pfnymTakeOutPlanProduction = NULL;

		if ( !pfnymTakeOutPlanProduction )
			pfnymTakeOutPlanProduction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTakeOutPlanProduction" );

		UCCCheatManager_execymTakeOutPlanProduction_Parms ymTakeOutPlanProduction_Parms;

		this->ProcessEvent( pfnymTakeOutPlanProduction, &ymTakeOutPlanProduction_Parms, NULL );
	};

	void ymBoughtCraftFunctionality ( unsigned char InResult )
	{
		static UFunction* pfnymBoughtCraftFunctionality = NULL;

		if ( !pfnymBoughtCraftFunctionality )
			pfnymBoughtCraftFunctionality = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBoughtCraftFunctionality" );

		UCCCheatManager_execymBoughtCraftFunctionality_Parms ymBoughtCraftFunctionality_Parms;
		ymBoughtCraftFunctionality_Parms.InResult = InResult;

		this->ProcessEvent( pfnymBoughtCraftFunctionality, &ymBoughtCraftFunctionality_Parms, NULL );
	};

	void ymBuyCraftFunctionality ()
	{
		static UFunction* pfnymBuyCraftFunctionality = NULL;

		if ( !pfnymBuyCraftFunctionality )
			pfnymBuyCraftFunctionality = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuyCraftFunctionality" );

		UCCCheatManager_execymBuyCraftFunctionality_Parms ymBuyCraftFunctionality_Parms;

		this->ProcessEvent( pfnymBuyCraftFunctionality, &ymBuyCraftFunctionality_Parms, NULL );
	};

	void ymBoughtBuffSlot ( unsigned char InResult )
	{
		static UFunction* pfnymBoughtBuffSlot = NULL;

		if ( !pfnymBoughtBuffSlot )
			pfnymBoughtBuffSlot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBoughtBuffSlot" );

		UCCCheatManager_execymBoughtBuffSlot_Parms ymBoughtBuffSlot_Parms;
		ymBoughtBuffSlot_Parms.InResult = InResult;

		this->ProcessEvent( pfnymBoughtBuffSlot, &ymBoughtBuffSlot_Parms, NULL );
	};

	void ymBuyBuffSlot ()
	{
		static UFunction* pfnymBuyBuffSlot = NULL;

		if ( !pfnymBuyBuffSlot )
			pfnymBuyBuffSlot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuyBuffSlot" );

		UCCCheatManager_execymBuyBuffSlot_Parms ymBuyBuffSlot_Parms;

		this->ProcessEvent( pfnymBuyBuffSlot, &ymBuyBuffSlot_Parms, NULL );
	};

	void ymNotifyPushbuffItemCooldown ( int InMinutesLeft )
	{
		static UFunction* pfnymNotifyPushbuffItemCooldown = NULL;

		if ( !pfnymNotifyPushbuffItemCooldown )
			pfnymNotifyPushbuffItemCooldown = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyPushbuffItemCooldown" );

		UCCCheatManager_execymNotifyPushbuffItemCooldown_Parms ymNotifyPushbuffItemCooldown_Parms;
		ymNotifyPushbuffItemCooldown_Parms.InMinutesLeft = InMinutesLeft;

		this->ProcessEvent( pfnymNotifyPushbuffItemCooldown, &ymNotifyPushbuffItemCooldown_Parms, NULL );
	};

	void ymBoughtClanHallVisualizationSlot ( unsigned char InResult )
	{
		static UFunction* pfnymBoughtClanHallVisualizationSlot = NULL;

		if ( !pfnymBoughtClanHallVisualizationSlot )
			pfnymBoughtClanHallVisualizationSlot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBoughtClanHallVisualizationSlot" );

		UCCCheatManager_execymBoughtClanHallVisualizationSlot_Parms ymBoughtClanHallVisualizationSlot_Parms;
		ymBoughtClanHallVisualizationSlot_Parms.InResult = InResult;

		this->ProcessEvent( pfnymBoughtClanHallVisualizationSlot, &ymBoughtClanHallVisualizationSlot_Parms, NULL );
	};

	void ymBuyClanHallVisualizationSlot ( unsigned char InSlotId )
	{
		static UFunction* pfnymBuyClanHallVisualizationSlot = NULL;

		if ( !pfnymBuyClanHallVisualizationSlot )
			pfnymBuyClanHallVisualizationSlot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuyClanHallVisualizationSlot" );

		UCCCheatManager_execymBuyClanHallVisualizationSlot_Parms ymBuyClanHallVisualizationSlot_Parms;
		ymBuyClanHallVisualizationSlot_Parms.InSlotId = InSlotId;

		this->ProcessEvent( pfnymBuyClanHallVisualizationSlot, &ymBuyClanHallVisualizationSlot_Parms, NULL );
	};

	void ymNotifyVendorCooldown ( int InMinutesLeft )
	{
		static UFunction* pfnymNotifyVendorCooldown = NULL;

		if ( !pfnymNotifyVendorCooldown )
			pfnymNotifyVendorCooldown = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyVendorCooldown" );

		UCCCheatManager_execymNotifyVendorCooldown_Parms ymNotifyVendorCooldown_Parms;
		ymNotifyVendorCooldown_Parms.InMinutesLeft = InMinutesLeft;

		this->ProcessEvent( pfnymNotifyVendorCooldown, &ymNotifyVendorCooldown_Parms, NULL );
	};

	void ymChangeVendorNotification ()
	{
		static UFunction* pfnymChangeVendorNotification = NULL;

		if ( !pfnymChangeVendorNotification )
			pfnymChangeVendorNotification = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymChangeVendorNotification" );

		UCCCheatManager_execymChangeVendorNotification_Parms ymChangeVendorNotification_Parms;

		this->ProcessEvent( pfnymChangeVendorNotification, &ymChangeVendorNotification_Parms, NULL );
	};

	void ymCreatedVendor ( unsigned char InResult )
	{
		static UFunction* pfnymCreatedVendor = NULL;

		if ( !pfnymCreatedVendor )
			pfnymCreatedVendor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCreatedVendor" );

		UCCCheatManager_execymCreatedVendor_Parms ymCreatedVendor_Parms;
		ymCreatedVendor_Parms.InResult = InResult;

		this->ProcessEvent( pfnymCreatedVendor, &ymCreatedVendor_Parms, NULL );
	};

	void ymCreateVendor ( int InShopTemplateId )
	{
		static UFunction* pfnymCreateVendor = NULL;

		if ( !pfnymCreateVendor )
			pfnymCreateVendor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCreateVendor" );

		UCCCheatManager_execymCreateVendor_Parms ymCreateVendor_Parms;
		ymCreateVendor_Parms.InShopTemplateId = InShopTemplateId;

		this->ProcessEvent( pfnymCreateVendor, &ymCreateVendor_Parms, NULL );
	};

	void ymCreatedPostBox ( unsigned char InResult )
	{
		static UFunction* pfnymCreatedPostBox = NULL;

		if ( !pfnymCreatedPostBox )
			pfnymCreatedPostBox = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCreatedPostBox" );

		UCCCheatManager_execymCreatedPostBox_Parms ymCreatedPostBox_Parms;
		ymCreatedPostBox_Parms.InResult = InResult;

		this->ProcessEvent( pfnymCreatedPostBox, &ymCreatedPostBox_Parms, NULL );
	};

	void ymCreatePostBox ()
	{
		static UFunction* pfnymCreatePostBox = NULL;

		if ( !pfnymCreatePostBox )
			pfnymCreatePostBox = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCreatePostBox" );

		UCCCheatManager_execymCreatePostBox_Parms ymCreatePostBox_Parms;

		this->ProcessEvent( pfnymCreatePostBox, &ymCreatePostBox_Parms, NULL );
	};

	void ymCreateClubVendorResponse ( unsigned char InResultCode )
	{
		static UFunction* pfnymCreateClubVendorResponse = NULL;

		if ( !pfnymCreateClubVendorResponse )
			pfnymCreateClubVendorResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCreateClubVendorResponse" );

		UCCCheatManager_execymCreateClubVendorResponse_Parms ymCreateClubVendorResponse_Parms;
		ymCreateClubVendorResponse_Parms.InResultCode = InResultCode;

		this->ProcessEvent( pfnymCreateClubVendorResponse, &ymCreateClubVendorResponse_Parms, NULL );
	};

	void ymCreateClubVendor ( int InFunctionalityType )
	{
		static UFunction* pfnymCreateClubVendor = NULL;

		if ( !pfnymCreateClubVendor )
			pfnymCreateClubVendor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCreateClubVendor" );

		UCCCheatManager_execymCreateClubVendor_Parms ymCreateClubVendor_Parms;
		ymCreateClubVendor_Parms.InFunctionalityType = InFunctionalityType;

		this->ProcessEvent( pfnymCreateClubVendor, &ymCreateClubVendor_Parms, NULL );
	};

	void ymExitedClanHall ( unsigned char InResult )
	{
		static UFunction* pfnymExitedClanHall = NULL;

		if ( !pfnymExitedClanHall )
			pfnymExitedClanHall = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymExitedClanHall" );

		UCCCheatManager_execymExitedClanHall_Parms ymExitedClanHall_Parms;
		ymExitedClanHall_Parms.InResult = InResult;

		this->ProcessEvent( pfnymExitedClanHall, &ymExitedClanHall_Parms, NULL );
	};

	void ymExitClanHall ()
	{
		static UFunction* pfnymExitClanHall = NULL;

		if ( !pfnymExitClanHall )
			pfnymExitClanHall = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymExitClanHall" );

		UCCCheatManager_execymExitClanHall_Parms ymExitClanHall_Parms;

		this->ProcessEvent( pfnymExitClanHall, &ymExitClanHall_Parms, NULL );
	};

	void ymSkipEnteringClanHall ()
	{
		static UFunction* pfnymSkipEnteringClanHall = NULL;

		if ( !pfnymSkipEnteringClanHall )
			pfnymSkipEnteringClanHall = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSkipEnteringClanHall" );

		UCCCheatManager_execymSkipEnteringClanHall_Parms ymSkipEnteringClanHall_Parms;

		this->ProcessEvent( pfnymSkipEnteringClanHall, &ymSkipEnteringClanHall_Parms, NULL );
	};

	void ymEnteredClanHall ()
	{
		static UFunction* pfnymEnteredClanHall = NULL;

		if ( !pfnymEnteredClanHall )
			pfnymEnteredClanHall = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymEnteredClanHall" );

		UCCCheatManager_execymEnteredClanHall_Parms ymEnteredClanHall_Parms;

		this->ProcessEvent( pfnymEnteredClanHall, &ymEnteredClanHall_Parms, NULL );
	};

	void ymEnterClanHallResponse ( unsigned char InResult )
	{
		static UFunction* pfnymEnterClanHallResponse = NULL;

		if ( !pfnymEnterClanHallResponse )
			pfnymEnterClanHallResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymEnterClanHallResponse" );

		UCCCheatManager_execymEnterClanHallResponse_Parms ymEnterClanHallResponse_Parms;
		ymEnterClanHallResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymEnterClanHallResponse, &ymEnterClanHallResponse_Parms, NULL );
	};

	void ymEnterClanHall ( int InClanHallId )
	{
		static UFunction* pfnymEnterClanHall = NULL;

		if ( !pfnymEnterClanHall )
			pfnymEnterClanHall = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymEnterClanHall" );

		UCCCheatManager_execymEnterClanHall_Parms ymEnterClanHall_Parms;
		ymEnterClanHall_Parms.InClanHallId = InClanHallId;

		this->ProcessEvent( pfnymEnterClanHall, &ymEnterClanHall_Parms, NULL );
	};

	void ymCreatedClanHall ( unsigned char InResult )
	{
		static UFunction* pfnymCreatedClanHall = NULL;

		if ( !pfnymCreatedClanHall )
			pfnymCreatedClanHall = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCreatedClanHall" );

		UCCCheatManager_execymCreatedClanHall_Parms ymCreatedClanHall_Parms;
		ymCreatedClanHall_Parms.InResult = InResult;

		this->ProcessEvent( pfnymCreatedClanHall, &ymCreatedClanHall_Parms, NULL );
	};

	void ymCreateClanHall ( int InLobbyId, int InClanHallTypeId, unsigned char InSpecialization )
	{
		static UFunction* pfnymCreateClanHall = NULL;

		if ( !pfnymCreateClanHall )
			pfnymCreateClanHall = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCreateClanHall" );

		UCCCheatManager_execymCreateClanHall_Parms ymCreateClanHall_Parms;
		ymCreateClanHall_Parms.InLobbyId = InLobbyId;
		ymCreateClanHall_Parms.InClanHallTypeId = InClanHallTypeId;
		ymCreateClanHall_Parms.InSpecialization = InSpecialization;

		this->ProcessEvent( pfnymCreateClanHall, &ymCreateClanHall_Parms, NULL );
	};

	void ymResponseClanBankLog ( TArray< struct FClanBankCashLogRecord > InCashLog, TArray< struct FClanBankItemLogRecord > InItemLog, int InLastCashLogRecord, int InLastItemLogRecord )
	{
		static UFunction* pfnymResponseClanBankLog = NULL;

		if ( !pfnymResponseClanBankLog )
			pfnymResponseClanBankLog = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymResponseClanBankLog" );

		UCCCheatManager_execymResponseClanBankLog_Parms ymResponseClanBankLog_Parms;
		memcpy( &ymResponseClanBankLog_Parms.InCashLog, &InCashLog, 0xC );
		memcpy( &ymResponseClanBankLog_Parms.InItemLog, &InItemLog, 0xC );
		ymResponseClanBankLog_Parms.InLastCashLogRecord = InLastCashLogRecord;
		ymResponseClanBankLog_Parms.InLastItemLogRecord = InLastItemLogRecord;

		this->ProcessEvent( pfnymResponseClanBankLog, &ymResponseClanBankLog_Parms, NULL );
	};

	void ymRequestClanBankLog ( int InLastCashLogRecord, int InLastItemLogRecord )
	{
		static UFunction* pfnymRequestClanBankLog = NULL;

		if ( !pfnymRequestClanBankLog )
			pfnymRequestClanBankLog = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestClanBankLog" );

		UCCCheatManager_execymRequestClanBankLog_Parms ymRequestClanBankLog_Parms;
		ymRequestClanBankLog_Parms.InLastCashLogRecord = InLastCashLogRecord;
		ymRequestClanBankLog_Parms.InLastItemLogRecord = InLastItemLogRecord;

		this->ProcessEvent( pfnymRequestClanBankLog, &ymRequestClanBankLog_Parms, NULL );
	};

	void ymPlacedCashIntoClanBank ( unsigned long InIsSuccess )
	{
		static UFunction* pfnymPlacedCashIntoClanBank = NULL;

		if ( !pfnymPlacedCashIntoClanBank )
			pfnymPlacedCashIntoClanBank = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymPlacedCashIntoClanBank" );

		UCCCheatManager_execymPlacedCashIntoClanBank_Parms ymPlacedCashIntoClanBank_Parms;
		ymPlacedCashIntoClanBank_Parms.InIsSuccess = InIsSuccess;

		this->ProcessEvent( pfnymPlacedCashIntoClanBank, &ymPlacedCashIntoClanBank_Parms, NULL );
	};

	void ymPlaceCashIntoClanBank ( int inAmount )
	{
		static UFunction* pfnymPlaceCashIntoClanBank = NULL;

		if ( !pfnymPlaceCashIntoClanBank )
			pfnymPlaceCashIntoClanBank = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymPlaceCashIntoClanBank" );

		UCCCheatManager_execymPlaceCashIntoClanBank_Parms ymPlaceCashIntoClanBank_Parms;
		ymPlaceCashIntoClanBank_Parms.inAmount = inAmount;

		this->ProcessEvent( pfnymPlaceCashIntoClanBank, &ymPlaceCashIntoClanBank_Parms, NULL );
	};

	void ymRenamedClanBankTab ( unsigned long InIsSuccess )
	{
		static UFunction* pfnymRenamedClanBankTab = NULL;

		if ( !pfnymRenamedClanBankTab )
			pfnymRenamedClanBankTab = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRenamedClanBankTab" );

		UCCCheatManager_execymRenamedClanBankTab_Parms ymRenamedClanBankTab_Parms;
		ymRenamedClanBankTab_Parms.InIsSuccess = InIsSuccess;

		this->ProcessEvent( pfnymRenamedClanBankTab, &ymRenamedClanBankTab_Parms, NULL );
	};

	void ymRenameClanBankTab ( unsigned char InTabIndex, struct FString InNewCaption )
	{
		static UFunction* pfnymRenameClanBankTab = NULL;

		if ( !pfnymRenameClanBankTab )
			pfnymRenameClanBankTab = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRenameClanBankTab" );

		UCCCheatManager_execymRenameClanBankTab_Parms ymRenameClanBankTab_Parms;
		ymRenameClanBankTab_Parms.InTabIndex = InTabIndex;
		memcpy( &ymRenameClanBankTab_Parms.InNewCaption, &InNewCaption, 0xC );

		this->ProcessEvent( pfnymRenameClanBankTab, &ymRenameClanBankTab_Parms, NULL );
	};

	void ymBoughtClanBankTab ( unsigned long InIsSuccess )
	{
		static UFunction* pfnymBoughtClanBankTab = NULL;

		if ( !pfnymBoughtClanBankTab )
			pfnymBoughtClanBankTab = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBoughtClanBankTab" );

		UCCCheatManager_execymBoughtClanBankTab_Parms ymBoughtClanBankTab_Parms;
		ymBoughtClanBankTab_Parms.InIsSuccess = InIsSuccess;

		this->ProcessEvent( pfnymBoughtClanBankTab, &ymBoughtClanBankTab_Parms, NULL );
	};

	void ymBuyClanBankTab ( struct FString InCaption )
	{
		static UFunction* pfnymBuyClanBankTab = NULL;

		if ( !pfnymBuyClanBankTab )
			pfnymBuyClanBankTab = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuyClanBankTab" );

		UCCCheatManager_execymBuyClanBankTab_Parms ymBuyClanBankTab_Parms;
		memcpy( &ymBuyClanBankTab_Parms.InCaption, &InCaption, 0xC );

		this->ProcessEvent( pfnymBuyClanBankTab, &ymBuyClanBankTab_Parms, NULL );
	};

	void ymBoughtClanBank ( unsigned long InIsSuccess )
	{
		static UFunction* pfnymBoughtClanBank = NULL;

		if ( !pfnymBoughtClanBank )
			pfnymBoughtClanBank = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBoughtClanBank" );

		UCCCheatManager_execymBoughtClanBank_Parms ymBoughtClanBank_Parms;
		ymBoughtClanBank_Parms.InIsSuccess = InIsSuccess;

		this->ProcessEvent( pfnymBoughtClanBank, &ymBoughtClanBank_Parms, NULL );
	};

	void ymBuyClanBank ()
	{
		static UFunction* pfnymBuyClanBank = NULL;

		if ( !pfnymBuyClanBank )
			pfnymBuyClanBank = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuyClanBank" );

		UCCCheatManager_execymBuyClanBank_Parms ymBuyClanBank_Parms;

		this->ProcessEvent( pfnymBuyClanBank, &ymBuyClanBank_Parms, NULL );
	};

	void ymCheat_SetTestTournament ()
	{
		static UFunction* pfnymCheat_SetTestTournament = NULL;

		if ( !pfnymCheat_SetTestTournament )
			pfnymCheat_SetTestTournament = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_SetTestTournament" );

		UCCCheatManager_execymCheat_SetTestTournament_Parms ymCheat_SetTestTournament_Parms;

		this->ProcessEvent( pfnymCheat_SetTestTournament, &ymCheat_SetTestTournament_Parms, NULL );
	};

	void ymCheat_GainInstanceLoot ( int InInstanceId, int InWinType )
	{
		static UFunction* pfnymCheat_GainInstanceLoot = NULL;

		if ( !pfnymCheat_GainInstanceLoot )
			pfnymCheat_GainInstanceLoot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_GainInstanceLoot" );

		UCCCheatManager_execymCheat_GainInstanceLoot_Parms ymCheat_GainInstanceLoot_Parms;
		ymCheat_GainInstanceLoot_Parms.InInstanceId = InInstanceId;
		ymCheat_GainInstanceLoot_Parms.InWinType = InWinType;

		this->ProcessEvent( pfnymCheat_GainInstanceLoot, &ymCheat_GainInstanceLoot_Parms, NULL );
	};

	void ymCheat_AddTitle ( int InTitleId )
	{
		static UFunction* pfnymCheat_AddTitle = NULL;

		if ( !pfnymCheat_AddTitle )
			pfnymCheat_AddTitle = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_AddTitle" );

		UCCCheatManager_execymCheat_AddTitle_Parms ymCheat_AddTitle_Parms;
		ymCheat_AddTitle_Parms.InTitleId = InTitleId;

		this->ProcessEvent( pfnymCheat_AddTitle, &ymCheat_AddTitle_Parms, NULL );
	};

	void ymCheat_SetStartingLobby ( int InLobbyId )
	{
		static UFunction* pfnymCheat_SetStartingLobby = NULL;

		if ( !pfnymCheat_SetStartingLobby )
			pfnymCheat_SetStartingLobby = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_SetStartingLobby" );

		UCCCheatManager_execymCheat_SetStartingLobby_Parms ymCheat_SetStartingLobby_Parms;
		ymCheat_SetStartingLobby_Parms.InLobbyId = InLobbyId;

		this->ProcessEvent( pfnymCheat_SetStartingLobby, &ymCheat_SetStartingLobby_Parms, NULL );
	};

	void ymCheat_SetDesignConstant ( struct FString InName, struct FString InValue )
	{
		static UFunction* pfnymCheat_SetDesignConstant = NULL;

		if ( !pfnymCheat_SetDesignConstant )
			pfnymCheat_SetDesignConstant = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_SetDesignConstant" );

		UCCCheatManager_execymCheat_SetDesignConstant_Parms ymCheat_SetDesignConstant_Parms;
		memcpy( &ymCheat_SetDesignConstant_Parms.InName, &InName, 0xC );
		memcpy( &ymCheat_SetDesignConstant_Parms.InValue, &InValue, 0xC );

		this->ProcessEvent( pfnymCheat_SetDesignConstant, &ymCheat_SetDesignConstant_Parms, NULL );
	};

	void ymCheat_SetInstanceForPromotion ( int InInstanceId )
	{
		static UFunction* pfnymCheat_SetInstanceForPromotion = NULL;

		if ( !pfnymCheat_SetInstanceForPromotion )
			pfnymCheat_SetInstanceForPromotion = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_SetInstanceForPromotion" );

		UCCCheatManager_execymCheat_SetInstanceForPromotion_Parms ymCheat_SetInstanceForPromotion_Parms;
		ymCheat_SetInstanceForPromotion_Parms.InInstanceId = InInstanceId;

		this->ProcessEvent( pfnymCheat_SetInstanceForPromotion, &ymCheat_SetInstanceForPromotion_Parms, NULL );
	};

	void ymCheat_SetInstanceGameTime ( int InInstanceId, int InGameTime )
	{
		static UFunction* pfnymCheat_SetInstanceGameTime = NULL;

		if ( !pfnymCheat_SetInstanceGameTime )
			pfnymCheat_SetInstanceGameTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_SetInstanceGameTime" );

		UCCCheatManager_execymCheat_SetInstanceGameTime_Parms ymCheat_SetInstanceGameTime_Parms;
		ymCheat_SetInstanceGameTime_Parms.InInstanceId = InInstanceId;
		ymCheat_SetInstanceGameTime_Parms.InGameTime = InGameTime;

		this->ProcessEvent( pfnymCheat_SetInstanceGameTime, &ymCheat_SetInstanceGameTime_Parms, NULL );
	};

	void ymCheat_SetInstanceWarmupTime ( int InInstanceId, int InWarmupTime )
	{
		static UFunction* pfnymCheat_SetInstanceWarmupTime = NULL;

		if ( !pfnymCheat_SetInstanceWarmupTime )
			pfnymCheat_SetInstanceWarmupTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_SetInstanceWarmupTime" );

		UCCCheatManager_execymCheat_SetInstanceWarmupTime_Parms ymCheat_SetInstanceWarmupTime_Parms;
		ymCheat_SetInstanceWarmupTime_Parms.InInstanceId = InInstanceId;
		ymCheat_SetInstanceWarmupTime_Parms.InWarmupTime = InWarmupTime;

		this->ProcessEvent( pfnymCheat_SetInstanceWarmupTime, &ymCheat_SetInstanceWarmupTime_Parms, NULL );
	};

	void ymCheat_SetInstanceMinPlayers ( int InInstanceId, int InMinPlayers )
	{
		static UFunction* pfnymCheat_SetInstanceMinPlayers = NULL;

		if ( !pfnymCheat_SetInstanceMinPlayers )
			pfnymCheat_SetInstanceMinPlayers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_SetInstanceMinPlayers" );

		UCCCheatManager_execymCheat_SetInstanceMinPlayers_Parms ymCheat_SetInstanceMinPlayers_Parms;
		ymCheat_SetInstanceMinPlayers_Parms.InInstanceId = InInstanceId;
		ymCheat_SetInstanceMinPlayers_Parms.InMinPlayers = InMinPlayers;

		this->ProcessEvent( pfnymCheat_SetInstanceMinPlayers, &ymCheat_SetInstanceMinPlayers_Parms, NULL );
	};

	void ymCheat_GainPvPScore ( int InScore )
	{
		static UFunction* pfnymCheat_GainPvPScore = NULL;

		if ( !pfnymCheat_GainPvPScore )
			pfnymCheat_GainPvPScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_GainPvPScore" );

		UCCCheatManager_execymCheat_GainPvPScore_Parms ymCheat_GainPvPScore_Parms;
		ymCheat_GainPvPScore_Parms.InScore = InScore;

		this->ProcessEvent( pfnymCheat_GainPvPScore, &ymCheat_GainPvPScore_Parms, NULL );
	};

	void ymCheat_RecalculateTitle ()
	{
		static UFunction* pfnymCheat_RecalculateTitle = NULL;

		if ( !pfnymCheat_RecalculateTitle )
			pfnymCheat_RecalculateTitle = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_RecalculateTitle" );

		UCCCheatManager_execymCheat_RecalculateTitle_Parms ymCheat_RecalculateTitle_Parms;

		this->ProcessEvent( pfnymCheat_RecalculateTitle, &ymCheat_RecalculateTitle_Parms, NULL );
	};

	void ymCheat_RecalculateScore ()
	{
		static UFunction* pfnymCheat_RecalculateScore = NULL;

		if ( !pfnymCheat_RecalculateScore )
			pfnymCheat_RecalculateScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_RecalculateScore" );

		UCCCheatManager_execymCheat_RecalculateScore_Parms ymCheat_RecalculateScore_Parms;

		this->ProcessEvent( pfnymCheat_RecalculateScore, &ymCheat_RecalculateScore_Parms, NULL );
	};

	void ymCheat_StartNewClanWarSeason ()
	{
		static UFunction* pfnymCheat_StartNewClanWarSeason = NULL;

		if ( !pfnymCheat_StartNewClanWarSeason )
			pfnymCheat_StartNewClanWarSeason = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_StartNewClanWarSeason" );

		UCCCheatManager_execymCheat_StartNewClanWarSeason_Parms ymCheat_StartNewClanWarSeason_Parms;

		this->ProcessEvent( pfnymCheat_StartNewClanWarSeason, &ymCheat_StartNewClanWarSeason_Parms, NULL );
	};

	void ymCheat_StartNextTournamentRound ()
	{
		static UFunction* pfnymCheat_StartNextTournamentRound = NULL;

		if ( !pfnymCheat_StartNextTournamentRound )
			pfnymCheat_StartNextTournamentRound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_StartNextTournamentRound" );

		UCCCheatManager_execymCheat_StartNextTournamentRound_Parms ymCheat_StartNextTournamentRound_Parms;

		this->ProcessEvent( pfnymCheat_StartNextTournamentRound, &ymCheat_StartNextTournamentRound_Parms, NULL );
	};

	void ymCheat_StopWaitingDemandForClanWarTournament ()
	{
		static UFunction* pfnymCheat_StopWaitingDemandForClanWarTournament = NULL;

		if ( !pfnymCheat_StopWaitingDemandForClanWarTournament )
			pfnymCheat_StopWaitingDemandForClanWarTournament = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_StopWaitingDemandForClanWarTournament" );

		UCCCheatManager_execymCheat_StopWaitingDemandForClanWarTournament_Parms ymCheat_StopWaitingDemandForClanWarTournament_Parms;

		this->ProcessEvent( pfnymCheat_StopWaitingDemandForClanWarTournament, &ymCheat_StopWaitingDemandForClanWarTournament_Parms, NULL );
	};

	void ymCheat_StartTournamentFreeze ()
	{
		static UFunction* pfnymCheat_StartTournamentFreeze = NULL;

		if ( !pfnymCheat_StartTournamentFreeze )
			pfnymCheat_StartTournamentFreeze = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_StartTournamentFreeze" );

		UCCCheatManager_execymCheat_StartTournamentFreeze_Parms ymCheat_StartTournamentFreeze_Parms;

		this->ProcessEvent( pfnymCheat_StartTournamentFreeze, &ymCheat_StartTournamentFreeze_Parms, NULL );
	};

	void ymCheat_GainClanRate ( int InRate )
	{
		static UFunction* pfnymCheat_GainClanRate = NULL;

		if ( !pfnymCheat_GainClanRate )
			pfnymCheat_GainClanRate = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_GainClanRate" );

		UCCCheatManager_execymCheat_GainClanRate_Parms ymCheat_GainClanRate_Parms;
		ymCheat_GainClanRate_Parms.InRate = InRate;

		this->ProcessEvent( pfnymCheat_GainClanRate, &ymCheat_GainClanRate_Parms, NULL );
	};

	void ymCheat_GainClan ( struct FString InName, struct FString InDescription, int InClanLogoId, int InClanLogoColorId )
	{
		static UFunction* pfnymCheat_GainClan = NULL;

		if ( !pfnymCheat_GainClan )
			pfnymCheat_GainClan = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_GainClan" );

		UCCCheatManager_execymCheat_GainClan_Parms ymCheat_GainClan_Parms;
		memcpy( &ymCheat_GainClan_Parms.InName, &InName, 0xC );
		memcpy( &ymCheat_GainClan_Parms.InDescription, &InDescription, 0xC );
		ymCheat_GainClan_Parms.InClanLogoId = InClanLogoId;
		ymCheat_GainClan_Parms.InClanLogoColorId = InClanLogoColorId;

		this->ProcessEvent( pfnymCheat_GainClan, &ymCheat_GainClan_Parms, NULL );
	};

	void ymGoToLobby ( int InLobbyId )
	{
		static UFunction* pfnymGoToLobby = NULL;

		if ( !pfnymGoToLobby )
			pfnymGoToLobby = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGoToLobby" );

		UCCCheatManager_execymGoToLobby_Parms ymGoToLobby_Parms;
		ymGoToLobby_Parms.InLobbyId = InLobbyId;

		this->ProcessEvent( pfnymGoToLobby, &ymGoToLobby_Parms, NULL );
	};

	void ymCheat_GainCounter ( int InType, int InValue )
	{
		static UFunction* pfnymCheat_GainCounter = NULL;

		if ( !pfnymCheat_GainCounter )
			pfnymCheat_GainCounter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_GainCounter" );

		UCCCheatManager_execymCheat_GainCounter_Parms ymCheat_GainCounter_Parms;
		ymCheat_GainCounter_Parms.InType = InType;
		ymCheat_GainCounter_Parms.InValue = InValue;

		this->ProcessEvent( pfnymCheat_GainCounter, &ymCheat_GainCounter_Parms, NULL );
	};

	void ymCheat_CompleteQuest ( int InQuestId, unsigned long InOnlyMark )
	{
		static UFunction* pfnymCheat_CompleteQuest = NULL;

		if ( !pfnymCheat_CompleteQuest )
			pfnymCheat_CompleteQuest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_CompleteQuest" );

		UCCCheatManager_execymCheat_CompleteQuest_Parms ymCheat_CompleteQuest_Parms;
		ymCheat_CompleteQuest_Parms.InQuestId = InQuestId;
		ymCheat_CompleteQuest_Parms.InOnlyMark = InOnlyMark;

		this->ProcessEvent( pfnymCheat_CompleteQuest, &ymCheat_CompleteQuest_Parms, NULL );
	};

	void ymCheat_GainQuest ( int InQuestId )
	{
		static UFunction* pfnymCheat_GainQuest = NULL;

		if ( !pfnymCheat_GainQuest )
			pfnymCheat_GainQuest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_GainQuest" );

		UCCCheatManager_execymCheat_GainQuest_Parms ymCheat_GainQuest_Parms;
		ymCheat_GainQuest_Parms.InQuestId = InQuestId;

		this->ProcessEvent( pfnymCheat_GainQuest, &ymCheat_GainQuest_Parms, NULL );
	};

	void ymCheat_GainItem ( int InItemTemplateId )
	{
		static UFunction* pfnymCheat_GainItem = NULL;

		if ( !pfnymCheat_GainItem )
			pfnymCheat_GainItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_GainItem" );

		UCCCheatManager_execymCheat_GainItem_Parms ymCheat_GainItem_Parms;
		ymCheat_GainItem_Parms.InItemTemplateId = InItemTemplateId;

		this->ProcessEvent( pfnymCheat_GainItem, &ymCheat_GainItem_Parms, NULL );
	};

	void ymCheat_GainCraftAbility ( int InCraftAbilityId )
	{
		static UFunction* pfnymCheat_GainCraftAbility = NULL;

		if ( !pfnymCheat_GainCraftAbility )
			pfnymCheat_GainCraftAbility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_GainCraftAbility" );

		UCCCheatManager_execymCheat_GainCraftAbility_Parms ymCheat_GainCraftAbility_Parms;
		ymCheat_GainCraftAbility_Parms.InCraftAbilityId = InCraftAbilityId;

		this->ProcessEvent( pfnymCheat_GainCraftAbility, &ymCheat_GainCraftAbility_Parms, NULL );
	};

	void ymCheat_GainAbility ( int InAbilityId, unsigned char InLevel )
	{
		static UFunction* pfnymCheat_GainAbility = NULL;

		if ( !pfnymCheat_GainAbility )
			pfnymCheat_GainAbility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_GainAbility" );

		UCCCheatManager_execymCheat_GainAbility_Parms ymCheat_GainAbility_Parms;
		ymCheat_GainAbility_Parms.InAbilityId = InAbilityId;
		ymCheat_GainAbility_Parms.InLevel = InLevel;

		this->ProcessEvent( pfnymCheat_GainAbility, &ymCheat_GainAbility_Parms, NULL );
	};

	void ymCheat_GainProffesion ( int InProffesionId )
	{
		static UFunction* pfnymCheat_GainProffesion = NULL;

		if ( !pfnymCheat_GainProffesion )
			pfnymCheat_GainProffesion = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_GainProffesion" );

		UCCCheatManager_execymCheat_GainProffesion_Parms ymCheat_GainProffesion_Parms;
		ymCheat_GainProffesion_Parms.InProffesionId = InProffesionId;

		this->ProcessEvent( pfnymCheat_GainProffesion, &ymCheat_GainProffesion_Parms, NULL );
	};

	void ymCheat_GainExperiencePoints ( int inAmount )
	{
		static UFunction* pfnymCheat_GainExperiencePoints = NULL;

		if ( !pfnymCheat_GainExperiencePoints )
			pfnymCheat_GainExperiencePoints = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_GainExperiencePoints" );

		UCCCheatManager_execymCheat_GainExperiencePoints_Parms ymCheat_GainExperiencePoints_Parms;
		ymCheat_GainExperiencePoints_Parms.inAmount = inAmount;

		this->ProcessEvent( pfnymCheat_GainExperiencePoints, &ymCheat_GainExperiencePoints_Parms, NULL );
	};

	void ymCheat_GainGold ( int inAmount )
	{
		static UFunction* pfnymCheat_GainGold = NULL;

		if ( !pfnymCheat_GainGold )
			pfnymCheat_GainGold = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_GainGold" );

		UCCCheatManager_execymCheat_GainGold_Parms ymCheat_GainGold_Parms;
		ymCheat_GainGold_Parms.inAmount = inAmount;

		this->ProcessEvent( pfnymCheat_GainGold, &ymCheat_GainGold_Parms, NULL );
	};

	void ymCheat_GainCash ( int inAmount )
	{
		static UFunction* pfnymCheat_GainCash = NULL;

		if ( !pfnymCheat_GainCash )
			pfnymCheat_GainCash = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_GainCash" );

		UCCCheatManager_execymCheat_GainCash_Parms ymCheat_GainCash_Parms;
		ymCheat_GainCash_Parms.inAmount = inAmount;

		this->ProcessEvent( pfnymCheat_GainCash, &ymCheat_GainCash_Parms, NULL );
	};

	void ymCheat_GainAbilityPoints ( int inAmount )
	{
		static UFunction* pfnymCheat_GainAbilityPoints = NULL;

		if ( !pfnymCheat_GainAbilityPoints )
			pfnymCheat_GainAbilityPoints = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_GainAbilityPoints" );

		UCCCheatManager_execymCheat_GainAbilityPoints_Parms ymCheat_GainAbilityPoints_Parms;
		ymCheat_GainAbilityPoints_Parms.inAmount = inAmount;

		this->ProcessEvent( pfnymCheat_GainAbilityPoints, &ymCheat_GainAbilityPoints_Parms, NULL );
	};

	void ymCheat_GainProfessionLevel ( unsigned char InNewLevel )
	{
		static UFunction* pfnymCheat_GainProfessionLevel = NULL;

		if ( !pfnymCheat_GainProfessionLevel )
			pfnymCheat_GainProfessionLevel = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_GainProfessionLevel" );

		UCCCheatManager_execymCheat_GainProfessionLevel_Parms ymCheat_GainProfessionLevel_Parms;
		ymCheat_GainProfessionLevel_Parms.InNewLevel = InNewLevel;

		this->ProcessEvent( pfnymCheat_GainProfessionLevel, &ymCheat_GainProfessionLevel_Parms, NULL );
	};

	void ymCheat_SetItemDurability ( int InItemId, int InDurability )
	{
		static UFunction* pfnymCheat_SetItemDurability = NULL;

		if ( !pfnymCheat_SetItemDurability )
			pfnymCheat_SetItemDurability = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_SetItemDurability" );

		UCCCheatManager_execymCheat_SetItemDurability_Parms ymCheat_SetItemDurability_Parms;
		ymCheat_SetItemDurability_Parms.InItemId = InItemId;
		ymCheat_SetItemDurability_Parms.InDurability = InDurability;

		this->ProcessEvent( pfnymCheat_SetItemDurability, &ymCheat_SetItemDurability_Parms, NULL );
	};

	void ymCheat_GainClanLevel ( unsigned char InLevel )
	{
		static UFunction* pfnymCheat_GainClanLevel = NULL;

		if ( !pfnymCheat_GainClanLevel )
			pfnymCheat_GainClanLevel = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_GainClanLevel" );

		UCCCheatManager_execymCheat_GainClanLevel_Parms ymCheat_GainClanLevel_Parms;
		ymCheat_GainClanLevel_Parms.InLevel = InLevel;

		this->ProcessEvent( pfnymCheat_GainClanLevel, &ymCheat_GainClanLevel_Parms, NULL );
	};

	void ymCheat_GainLevel ( unsigned char InNewLevel )
	{
		static UFunction* pfnymCheat_GainLevel = NULL;

		if ( !pfnymCheat_GainLevel )
			pfnymCheat_GainLevel = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCheat_GainLevel" );

		UCCCheatManager_execymCheat_GainLevel_Parms ymCheat_GainLevel_Parms;
		ymCheat_GainLevel_Parms.InNewLevel = InNewLevel;

		this->ProcessEvent( pfnymCheat_GainLevel, &ymCheat_GainLevel_Parms, NULL );
	};

	void ymDisableVoice ()
	{
		static UFunction* pfnymDisableVoice = NULL;

		if ( !pfnymDisableVoice )
			pfnymDisableVoice = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDisableVoice" );

		UCCCheatManager_execymDisableVoice_Parms ymDisableVoice_Parms;

		this->ProcessEvent( pfnymDisableVoice, &ymDisableVoice_Parms, NULL );
	};

	void ymEnableVoice ( int InChannelId )
	{
		static UFunction* pfnymEnableVoice = NULL;

		if ( !pfnymEnableVoice )
			pfnymEnableVoice = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymEnableVoice" );

		UCCCheatManager_execymEnableVoice_Parms ymEnableVoice_Parms;
		ymEnableVoice_Parms.InChannelId = InChannelId;

		this->ProcessEvent( pfnymEnableVoice, &ymEnableVoice_Parms, NULL );
	};

	void ymChannelOwnerChanged ( int InChannelId, int InCharacterId )
	{
		static UFunction* pfnymChannelOwnerChanged = NULL;

		if ( !pfnymChannelOwnerChanged )
			pfnymChannelOwnerChanged = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymChannelOwnerChanged" );

		UCCCheatManager_execymChannelOwnerChanged_Parms ymChannelOwnerChanged_Parms;
		ymChannelOwnerChanged_Parms.InChannelId = InChannelId;
		ymChannelOwnerChanged_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymChannelOwnerChanged, &ymChannelOwnerChanged_Parms, NULL );
	};

	void ymSetChannelOwner ( int InChannelId, int InCharacterId )
	{
		static UFunction* pfnymSetChannelOwner = NULL;

		if ( !pfnymSetChannelOwner )
			pfnymSetChannelOwner = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSetChannelOwner" );

		UCCCheatManager_execymSetChannelOwner_Parms ymSetChannelOwner_Parms;
		ymSetChannelOwner_Parms.InChannelId = InChannelId;
		ymSetChannelOwner_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymSetChannelOwner, &ymSetChannelOwner_Parms, NULL );
	};

	void ymCharacterKicked ( int InChannelId, int InCharacterId )
	{
		static UFunction* pfnymCharacterKicked = NULL;

		if ( !pfnymCharacterKicked )
			pfnymCharacterKicked = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCharacterKicked" );

		UCCCheatManager_execymCharacterKicked_Parms ymCharacterKicked_Parms;
		ymCharacterKicked_Parms.InChannelId = InChannelId;
		ymCharacterKicked_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymCharacterKicked, &ymCharacterKicked_Parms, NULL );
	};

	void ymKickCharacter ( int InChannelId, int InCharacterId )
	{
		static UFunction* pfnymKickCharacter = NULL;

		if ( !pfnymKickCharacter )
			pfnymKickCharacter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymKickCharacter" );

		UCCCheatManager_execymKickCharacter_Parms ymKickCharacter_Parms;
		ymKickCharacter_Parms.InChannelId = InChannelId;
		ymKickCharacter_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymKickCharacter, &ymKickCharacter_Parms, NULL );
	};

	void ymLeaveChannel ( int InChannelId, int InCharacterId )
	{
		static UFunction* pfnymLeaveChannel = NULL;

		if ( !pfnymLeaveChannel )
			pfnymLeaveChannel = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLeaveChannel" );

		UCCCheatManager_execymLeaveChannel_Parms ymLeaveChannel_Parms;
		ymLeaveChannel_Parms.InChannelId = InChannelId;
		ymLeaveChannel_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymLeaveChannel, &ymLeaveChannel_Parms, NULL );
	};

	void ymLeaveChannelRequest ( int InChannelId )
	{
		static UFunction* pfnymLeaveChannelRequest = NULL;

		if ( !pfnymLeaveChannelRequest )
			pfnymLeaveChannelRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLeaveChannelRequest" );

		UCCCheatManager_execymLeaveChannelRequest_Parms ymLeaveChannelRequest_Parms;
		ymLeaveChannelRequest_Parms.InChannelId = InChannelId;

		this->ProcessEvent( pfnymLeaveChannelRequest, &ymLeaveChannelRequest_Parms, NULL );
	};

	void ymJoinChannelResponse ( int InChannelId, TArray< int > InCharacterList )
	{
		static UFunction* pfnymJoinChannelResponse = NULL;

		if ( !pfnymJoinChannelResponse )
			pfnymJoinChannelResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymJoinChannelResponse" );

		UCCCheatManager_execymJoinChannelResponse_Parms ymJoinChannelResponse_Parms;
		ymJoinChannelResponse_Parms.InChannelId = InChannelId;
		ymJoinChannelResponse_Parms.InCharacterList = InCharacterList;

		this->ProcessEvent( pfnymJoinChannelResponse, &ymJoinChannelResponse_Parms, NULL );
	};

	void ymJoinChannel ( int InChannelId, int inCharacter )
	{
		static UFunction* pfnymJoinChannel = NULL;

		if ( !pfnymJoinChannel )
			pfnymJoinChannel = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymJoinChannel" );

		UCCCheatManager_execymJoinChannel_Parms ymJoinChannel_Parms;
		ymJoinChannel_Parms.InChannelId = InChannelId;
		ymJoinChannel_Parms.inCharacter = inCharacter;

		this->ProcessEvent( pfnymJoinChannel, &ymJoinChannel_Parms, NULL );
	};

	void ymInviteToChannelResponse ( int InChannelId, unsigned long InAccept )
	{
		static UFunction* pfnymInviteToChannelResponse = NULL;

		if ( !pfnymInviteToChannelResponse )
			pfnymInviteToChannelResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInviteToChannelResponse" );

		UCCCheatManager_execymInviteToChannelResponse_Parms ymInviteToChannelResponse_Parms;
		ymInviteToChannelResponse_Parms.InChannelId = InChannelId;
		ymInviteToChannelResponse_Parms.InAccept = InAccept;

		this->ProcessEvent( pfnymInviteToChannelResponse, &ymInviteToChannelResponse_Parms, NULL );
	};

	void ymInviteToChannel ( int InChannelId, struct FString InChannelName, int InCharacterId )
	{
		static UFunction* pfnymInviteToChannel = NULL;

		if ( !pfnymInviteToChannel )
			pfnymInviteToChannel = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInviteToChannel" );

		UCCCheatManager_execymInviteToChannel_Parms ymInviteToChannel_Parms;
		ymInviteToChannel_Parms.InChannelId = InChannelId;
		memcpy( &ymInviteToChannel_Parms.InChannelName, &InChannelName, 0xC );
		ymInviteToChannel_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymInviteToChannel, &ymInviteToChannel_Parms, NULL );
	};

	void ymInviteToChannelRequest ( int InChannelId, int InCharacterId )
	{
		static UFunction* pfnymInviteToChannelRequest = NULL;

		if ( !pfnymInviteToChannelRequest )
			pfnymInviteToChannelRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymInviteToChannelRequest" );

		UCCCheatManager_execymInviteToChannelRequest_Parms ymInviteToChannelRequest_Parms;
		ymInviteToChannelRequest_Parms.InChannelId = InChannelId;
		ymInviteToChannelRequest_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymInviteToChannelRequest, &ymInviteToChannelRequest_Parms, NULL );
	};

	void ymCreateChannelResponse ( int InChannelId )
	{
		static UFunction* pfnymCreateChannelResponse = NULL;

		if ( !pfnymCreateChannelResponse )
			pfnymCreateChannelResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCreateChannelResponse" );

		UCCCheatManager_execymCreateChannelResponse_Parms ymCreateChannelResponse_Parms;
		ymCreateChannelResponse_Parms.InChannelId = InChannelId;

		this->ProcessEvent( pfnymCreateChannelResponse, &ymCreateChannelResponse_Parms, NULL );
	};

	void ymCreateChannel ( struct FString InName )
	{
		static UFunction* pfnymCreateChannel = NULL;

		if ( !pfnymCreateChannel )
			pfnymCreateChannel = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCreateChannel" );

		UCCCheatManager_execymCreateChannel_Parms ymCreateChannel_Parms;
		memcpy( &ymCreateChannel_Parms.InName, &InName, 0xC );

		this->ProcessEvent( pfnymCreateChannel, &ymCreateChannel_Parms, NULL );
	};

	void ymMessageRecieved ( int InSenderCharacterId, struct FString InSenderCharacterName, int InSendedChannelId, struct FString InMessageText )
	{
		static UFunction* pfnymMessageRecieved = NULL;

		if ( !pfnymMessageRecieved )
			pfnymMessageRecieved = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymMessageRecieved" );

		UCCCheatManager_execymMessageRecieved_Parms ymMessageRecieved_Parms;
		ymMessageRecieved_Parms.InSenderCharacterId = InSenderCharacterId;
		memcpy( &ymMessageRecieved_Parms.InSenderCharacterName, &InSenderCharacterName, 0xC );
		ymMessageRecieved_Parms.InSendedChannelId = InSendedChannelId;
		memcpy( &ymMessageRecieved_Parms.InMessageText, &InMessageText, 0xC );

		this->ProcessEvent( pfnymMessageRecieved, &ymMessageRecieved_Parms, NULL );
	};

	void ymSendMessageResponse ( unsigned char InResponse )
	{
		static UFunction* pfnymSendMessageResponse = NULL;

		if ( !pfnymSendMessageResponse )
			pfnymSendMessageResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSendMessageResponse" );

		UCCCheatManager_execymSendMessageResponse_Parms ymSendMessageResponse_Parms;
		ymSendMessageResponse_Parms.InResponse = InResponse;

		this->ProcessEvent( pfnymSendMessageResponse, &ymSendMessageResponse_Parms, NULL );
	};

	void ymSendChannelMessage ( int InChannelTypeId, struct FString InMessageText )
	{
		static UFunction* pfnymSendChannelMessage = NULL;

		if ( !pfnymSendChannelMessage )
			pfnymSendChannelMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSendChannelMessage" );

		UCCCheatManager_execymSendChannelMessage_Parms ymSendChannelMessage_Parms;
		ymSendChannelMessage_Parms.InChannelTypeId = InChannelTypeId;
		memcpy( &ymSendChannelMessage_Parms.InMessageText, &InMessageText, 0xC );

		this->ProcessEvent( pfnymSendChannelMessage, &ymSendChannelMessage_Parms, NULL );
	};

	void ymSendPrivateMessageEx ( struct FString InTargetCharacterName, struct FString InMessageText )
	{
		static UFunction* pfnymSendPrivateMessageEx = NULL;

		if ( !pfnymSendPrivateMessageEx )
			pfnymSendPrivateMessageEx = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSendPrivateMessageEx" );

		UCCCheatManager_execymSendPrivateMessageEx_Parms ymSendPrivateMessageEx_Parms;
		memcpy( &ymSendPrivateMessageEx_Parms.InTargetCharacterName, &InTargetCharacterName, 0xC );
		memcpy( &ymSendPrivateMessageEx_Parms.InMessageText, &InMessageText, 0xC );

		this->ProcessEvent( pfnymSendPrivateMessageEx, &ymSendPrivateMessageEx_Parms, NULL );
	};

	void ymSendPrivateMessage ( int InTargetCharacterId, struct FString InMessageText )
	{
		static UFunction* pfnymSendPrivateMessage = NULL;

		if ( !pfnymSendPrivateMessage )
			pfnymSendPrivateMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSendPrivateMessage" );

		UCCCheatManager_execymSendPrivateMessage_Parms ymSendPrivateMessage_Parms;
		ymSendPrivateMessage_Parms.InTargetCharacterId = InTargetCharacterId;
		memcpy( &ymSendPrivateMessage_Parms.InMessageText, &InMessageText, 0xC );

		this->ProcessEvent( pfnymSendPrivateMessage, &ymSendPrivateMessage_Parms, NULL );
	};

	void ymMoveCharacterToFriendListGroup ( int InCharacterId, int InGroupId )
	{
		static UFunction* pfnymMoveCharacterToFriendListGroup = NULL;

		if ( !pfnymMoveCharacterToFriendListGroup )
			pfnymMoveCharacterToFriendListGroup = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymMoveCharacterToFriendListGroup" );

		UCCCheatManager_execymMoveCharacterToFriendListGroup_Parms ymMoveCharacterToFriendListGroup_Parms;
		ymMoveCharacterToFriendListGroup_Parms.InCharacterId = InCharacterId;
		ymMoveCharacterToFriendListGroup_Parms.InGroupId = InGroupId;

		this->ProcessEvent( pfnymMoveCharacterToFriendListGroup, &ymMoveCharacterToFriendListGroup_Parms, NULL );
	};

	void ymRenameFriendListGroup ( int InGroupId, struct FString InGroupName )
	{
		static UFunction* pfnymRenameFriendListGroup = NULL;

		if ( !pfnymRenameFriendListGroup )
			pfnymRenameFriendListGroup = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRenameFriendListGroup" );

		UCCCheatManager_execymRenameFriendListGroup_Parms ymRenameFriendListGroup_Parms;
		ymRenameFriendListGroup_Parms.InGroupId = InGroupId;
		memcpy( &ymRenameFriendListGroup_Parms.InGroupName, &InGroupName, 0xC );

		this->ProcessEvent( pfnymRenameFriendListGroup, &ymRenameFriendListGroup_Parms, NULL );
	};

	void ymDeleteFriendListGroup ( int InGroupId )
	{
		static UFunction* pfnymDeleteFriendListGroup = NULL;

		if ( !pfnymDeleteFriendListGroup )
			pfnymDeleteFriendListGroup = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeleteFriendListGroup" );

		UCCCheatManager_execymDeleteFriendListGroup_Parms ymDeleteFriendListGroup_Parms;
		ymDeleteFriendListGroup_Parms.InGroupId = InGroupId;

		this->ProcessEvent( pfnymDeleteFriendListGroup, &ymDeleteFriendListGroup_Parms, NULL );
	};

	void ymCreateFriendListGroupResponse ( unsigned char InResponse )
	{
		static UFunction* pfnymCreateFriendListGroupResponse = NULL;

		if ( !pfnymCreateFriendListGroupResponse )
			pfnymCreateFriendListGroupResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCreateFriendListGroupResponse" );

		UCCCheatManager_execymCreateFriendListGroupResponse_Parms ymCreateFriendListGroupResponse_Parms;
		ymCreateFriendListGroupResponse_Parms.InResponse = InResponse;

		this->ProcessEvent( pfnymCreateFriendListGroupResponse, &ymCreateFriendListGroupResponse_Parms, NULL );
	};

	void ymCreateFriendListGroup ( struct FString InGroupName )
	{
		static UFunction* pfnymCreateFriendListGroup = NULL;

		if ( !pfnymCreateFriendListGroup )
			pfnymCreateFriendListGroup = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCreateFriendListGroup" );

		UCCCheatManager_execymCreateFriendListGroup_Parms ymCreateFriendListGroup_Parms;
		memcpy( &ymCreateFriendListGroup_Parms.InGroupName, &InGroupName, 0xC );

		this->ProcessEvent( pfnymCreateFriendListGroup, &ymCreateFriendListGroup_Parms, NULL );
	};

	void ymAttachNotesToCharacter ( int InCharacterId, struct FString InNotesText )
	{
		static UFunction* pfnymAttachNotesToCharacter = NULL;

		if ( !pfnymAttachNotesToCharacter )
			pfnymAttachNotesToCharacter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAttachNotesToCharacter" );

		UCCCheatManager_execymAttachNotesToCharacter_Parms ymAttachNotesToCharacter_Parms;
		ymAttachNotesToCharacter_Parms.InCharacterId = InCharacterId;
		memcpy( &ymAttachNotesToCharacter_Parms.InNotesText, &InNotesText, 0xC );

		this->ProcessEvent( pfnymAttachNotesToCharacter, &ymAttachNotesToCharacter_Parms, NULL );
	};

	void ymDeleteCharacterFromBlackListResponse ( int InCharacterId, unsigned char InResult )
	{
		static UFunction* pfnymDeleteCharacterFromBlackListResponse = NULL;

		if ( !pfnymDeleteCharacterFromBlackListResponse )
			pfnymDeleteCharacterFromBlackListResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeleteCharacterFromBlackListResponse" );

		UCCCheatManager_execymDeleteCharacterFromBlackListResponse_Parms ymDeleteCharacterFromBlackListResponse_Parms;
		ymDeleteCharacterFromBlackListResponse_Parms.InCharacterId = InCharacterId;
		ymDeleteCharacterFromBlackListResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymDeleteCharacterFromBlackListResponse, &ymDeleteCharacterFromBlackListResponse_Parms, NULL );
	};

	void ymDeleteCharacterFromFriendListResponse ( int InCharacterId, unsigned char InResult )
	{
		static UFunction* pfnymDeleteCharacterFromFriendListResponse = NULL;

		if ( !pfnymDeleteCharacterFromFriendListResponse )
			pfnymDeleteCharacterFromFriendListResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeleteCharacterFromFriendListResponse" );

		UCCCheatManager_execymDeleteCharacterFromFriendListResponse_Parms ymDeleteCharacterFromFriendListResponse_Parms;
		ymDeleteCharacterFromFriendListResponse_Parms.InCharacterId = InCharacterId;
		ymDeleteCharacterFromFriendListResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymDeleteCharacterFromFriendListResponse, &ymDeleteCharacterFromFriendListResponse_Parms, NULL );
	};

	void ymAddCharacterToBlackListResponse ( int InCharacterId, struct FString InCharacterName, unsigned char InResult )
	{
		static UFunction* pfnymAddCharacterToBlackListResponse = NULL;

		if ( !pfnymAddCharacterToBlackListResponse )
			pfnymAddCharacterToBlackListResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAddCharacterToBlackListResponse" );

		UCCCheatManager_execymAddCharacterToBlackListResponse_Parms ymAddCharacterToBlackListResponse_Parms;
		ymAddCharacterToBlackListResponse_Parms.InCharacterId = InCharacterId;
		memcpy( &ymAddCharacterToBlackListResponse_Parms.InCharacterName, &InCharacterName, 0xC );
		ymAddCharacterToBlackListResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymAddCharacterToBlackListResponse, &ymAddCharacterToBlackListResponse_Parms, NULL );
	};

	void ymAddCharacterToFriendListResponse ( int InCharacterId, struct FString InCharacterName, unsigned char InResult )
	{
		static UFunction* pfnymAddCharacterToFriendListResponse = NULL;

		if ( !pfnymAddCharacterToFriendListResponse )
			pfnymAddCharacterToFriendListResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAddCharacterToFriendListResponse" );

		UCCCheatManager_execymAddCharacterToFriendListResponse_Parms ymAddCharacterToFriendListResponse_Parms;
		ymAddCharacterToFriendListResponse_Parms.InCharacterId = InCharacterId;
		memcpy( &ymAddCharacterToFriendListResponse_Parms.InCharacterName, &InCharacterName, 0xC );
		ymAddCharacterToFriendListResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymAddCharacterToFriendListResponse, &ymAddCharacterToFriendListResponse_Parms, NULL );
	};

	void ymDeleteCharacterFromBlackList ( int InCharacterId )
	{
		static UFunction* pfnymDeleteCharacterFromBlackList = NULL;

		if ( !pfnymDeleteCharacterFromBlackList )
			pfnymDeleteCharacterFromBlackList = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeleteCharacterFromBlackList" );

		UCCCheatManager_execymDeleteCharacterFromBlackList_Parms ymDeleteCharacterFromBlackList_Parms;
		ymDeleteCharacterFromBlackList_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymDeleteCharacterFromBlackList, &ymDeleteCharacterFromBlackList_Parms, NULL );
	};

	void ymAddCharacterToBlackListEx ( struct FString InTargetCharacterName )
	{
		static UFunction* pfnymAddCharacterToBlackListEx = NULL;

		if ( !pfnymAddCharacterToBlackListEx )
			pfnymAddCharacterToBlackListEx = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAddCharacterToBlackListEx" );

		UCCCheatManager_execymAddCharacterToBlackListEx_Parms ymAddCharacterToBlackListEx_Parms;
		memcpy( &ymAddCharacterToBlackListEx_Parms.InTargetCharacterName, &InTargetCharacterName, 0xC );

		this->ProcessEvent( pfnymAddCharacterToBlackListEx, &ymAddCharacterToBlackListEx_Parms, NULL );
	};

	void ymAddCharacterToBlackList ( int InCharacterId )
	{
		static UFunction* pfnymAddCharacterToBlackList = NULL;

		if ( !pfnymAddCharacterToBlackList )
			pfnymAddCharacterToBlackList = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAddCharacterToBlackList" );

		UCCCheatManager_execymAddCharacterToBlackList_Parms ymAddCharacterToBlackList_Parms;
		ymAddCharacterToBlackList_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymAddCharacterToBlackList, &ymAddCharacterToBlackList_Parms, NULL );
	};

	void ymDeleteCharacterFromFriendList ( int InCharacterId )
	{
		static UFunction* pfnymDeleteCharacterFromFriendList = NULL;

		if ( !pfnymDeleteCharacterFromFriendList )
			pfnymDeleteCharacterFromFriendList = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDeleteCharacterFromFriendList" );

		UCCCheatManager_execymDeleteCharacterFromFriendList_Parms ymDeleteCharacterFromFriendList_Parms;
		ymDeleteCharacterFromFriendList_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymDeleteCharacterFromFriendList, &ymDeleteCharacterFromFriendList_Parms, NULL );
	};

	void ymAddCharacterToFriendListEx ( struct FString InTargetCharacterName )
	{
		static UFunction* pfnymAddCharacterToFriendListEx = NULL;

		if ( !pfnymAddCharacterToFriendListEx )
			pfnymAddCharacterToFriendListEx = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAddCharacterToFriendListEx" );

		UCCCheatManager_execymAddCharacterToFriendListEx_Parms ymAddCharacterToFriendListEx_Parms;
		memcpy( &ymAddCharacterToFriendListEx_Parms.InTargetCharacterName, &InTargetCharacterName, 0xC );

		this->ProcessEvent( pfnymAddCharacterToFriendListEx, &ymAddCharacterToFriendListEx_Parms, NULL );
	};

	void ymAddCharacterToFriendList ( int InCharacterId )
	{
		static UFunction* pfnymAddCharacterToFriendList = NULL;

		if ( !pfnymAddCharacterToFriendList )
			pfnymAddCharacterToFriendList = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAddCharacterToFriendList" );

		UCCCheatManager_execymAddCharacterToFriendList_Parms ymAddCharacterToFriendList_Parms;
		ymAddCharacterToFriendList_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymAddCharacterToFriendList, &ymAddCharacterToFriendList_Parms, NULL );
	};

	void ymKeyPreset ( int InCharacterId, struct FString InData )
	{
		static UFunction* pfnymKeyPreset = NULL;

		if ( !pfnymKeyPreset )
			pfnymKeyPreset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymKeyPreset" );

		UCCCheatManager_execymKeyPreset_Parms ymKeyPreset_Parms;
		ymKeyPreset_Parms.InCharacterId = InCharacterId;
		memcpy( &ymKeyPreset_Parms.InData, &InData, 0xC );

		this->ProcessEvent( pfnymKeyPreset, &ymKeyPreset_Parms, NULL );
	};

	void ymSetKeyPreset ( int InCharacterId, struct FString InData )
	{
		static UFunction* pfnymSetKeyPreset = NULL;

		if ( !pfnymSetKeyPreset )
			pfnymSetKeyPreset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSetKeyPreset" );

		UCCCheatManager_execymSetKeyPreset_Parms ymSetKeyPreset_Parms;
		ymSetKeyPreset_Parms.InCharacterId = InCharacterId;
		memcpy( &ymSetKeyPreset_Parms.InData, &InData, 0xC );

		this->ProcessEvent( pfnymSetKeyPreset, &ymSetKeyPreset_Parms, NULL );
	};

	void ymSetNameColor ( int InColorId )
	{
		static UFunction* pfnymSetNameColor = NULL;

		if ( !pfnymSetNameColor )
			pfnymSetNameColor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSetNameColor" );

		UCCCheatManager_execymSetNameColor_Parms ymSetNameColor_Parms;
		ymSetNameColor_Parms.InColorId = InColorId;

		this->ProcessEvent( pfnymSetNameColor, &ymSetNameColor_Parms, NULL );
	};

	void ymSendEmail ( unsigned char InFeedbackType, struct FString InSubject, struct FString InText )
	{
		static UFunction* pfnymSendEmail = NULL;

		if ( !pfnymSendEmail )
			pfnymSendEmail = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymSendEmail" );

		UCCCheatManager_execymSendEmail_Parms ymSendEmail_Parms;
		ymSendEmail_Parms.InFeedbackType = InFeedbackType;
		memcpy( &ymSendEmail_Parms.InSubject, &InSubject, 0xC );
		memcpy( &ymSendEmail_Parms.InText, &InText, 0xC );

		this->ProcessEvent( pfnymSendEmail, &ymSendEmail_Parms, NULL );
	};

	void ymResponseCharacterIdByName ( int InCharacterId, struct FString InCharacterName )
	{
		static UFunction* pfnymResponseCharacterIdByName = NULL;

		if ( !pfnymResponseCharacterIdByName )
			pfnymResponseCharacterIdByName = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymResponseCharacterIdByName" );

		UCCCheatManager_execymResponseCharacterIdByName_Parms ymResponseCharacterIdByName_Parms;
		ymResponseCharacterIdByName_Parms.InCharacterId = InCharacterId;
		memcpy( &ymResponseCharacterIdByName_Parms.InCharacterName, &InCharacterName, 0xC );

		this->ProcessEvent( pfnymResponseCharacterIdByName, &ymResponseCharacterIdByName_Parms, NULL );
	};

	void ymRequestCharacterIdByName ( struct FString InCharacterName )
	{
		static UFunction* pfnymRequestCharacterIdByName = NULL;

		if ( !pfnymRequestCharacterIdByName )
			pfnymRequestCharacterIdByName = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRequestCharacterIdByName" );

		UCCCheatManager_execymRequestCharacterIdByName_Parms ymRequestCharacterIdByName_Parms;
		memcpy( &ymRequestCharacterIdByName_Parms.InCharacterName, &InCharacterName, 0xC );

		this->ProcessEvent( pfnymRequestCharacterIdByName, &ymRequestCharacterIdByName_Parms, NULL );
	};

	void ymCharacterChangeDistrict ( int InDistrictId )
	{
		static UFunction* pfnymCharacterChangeDistrict = NULL;

		if ( !pfnymCharacterChangeDistrict )
			pfnymCharacterChangeDistrict = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCharacterChangeDistrict" );

		UCCCheatManager_execymCharacterChangeDistrict_Parms ymCharacterChangeDistrict_Parms;
		ymCharacterChangeDistrict_Parms.InDistrictId = InDistrictId;

		this->ProcessEvent( pfnymCharacterChangeDistrict, &ymCharacterChangeDistrict_Parms, NULL );
	};

	void ymNotifyCharacterPosition ( int InCharacterId, struct FCharacterPosition InPosition )
	{
		static UFunction* pfnymNotifyCharacterPosition = NULL;

		if ( !pfnymNotifyCharacterPosition )
			pfnymNotifyCharacterPosition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyCharacterPosition" );

		UCCCheatManager_execymNotifyCharacterPosition_Parms ymNotifyCharacterPosition_Parms;
		ymNotifyCharacterPosition_Parms.InCharacterId = InCharacterId;
		memcpy( &ymNotifyCharacterPosition_Parms.InPosition, &InPosition, 0x10 );

		this->ProcessEvent( pfnymNotifyCharacterPosition, &ymNotifyCharacterPosition_Parms, NULL );
	};

	void ymNotifyCharacterStatus ( int InCharacterId, unsigned char InStatus, int InLocationId, int InDistrictId )
	{
		static UFunction* pfnymNotifyCharacterStatus = NULL;

		if ( !pfnymNotifyCharacterStatus )
			pfnymNotifyCharacterStatus = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyCharacterStatus" );

		UCCCheatManager_execymNotifyCharacterStatus_Parms ymNotifyCharacterStatus_Parms;
		ymNotifyCharacterStatus_Parms.InCharacterId = InCharacterId;
		ymNotifyCharacterStatus_Parms.InStatus = InStatus;
		ymNotifyCharacterStatus_Parms.InLocationId = InLocationId;
		ymNotifyCharacterStatus_Parms.InDistrictId = InDistrictId;

		this->ProcessEvent( pfnymNotifyCharacterStatus, &ymNotifyCharacterStatus_Parms, NULL );
	};

	void ymJoinToBroadcastStationResponse ( unsigned char InResponse )
	{
		static UFunction* pfnymJoinToBroadcastStationResponse = NULL;

		if ( !pfnymJoinToBroadcastStationResponse )
			pfnymJoinToBroadcastStationResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymJoinToBroadcastStationResponse" );

		UCCCheatManager_execymJoinToBroadcastStationResponse_Parms ymJoinToBroadcastStationResponse_Parms;
		ymJoinToBroadcastStationResponse_Parms.InResponse = InResponse;

		this->ProcessEvent( pfnymJoinToBroadcastStationResponse, &ymJoinToBroadcastStationResponse_Parms, NULL );
	};

	void ymJoinToBroadcastStation ( int InTicket1, int InTicket2 )
	{
		static UFunction* pfnymJoinToBroadcastStation = NULL;

		if ( !pfnymJoinToBroadcastStation )
			pfnymJoinToBroadcastStation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymJoinToBroadcastStation" );

		UCCCheatManager_execymJoinToBroadcastStation_Parms ymJoinToBroadcastStation_Parms;
		ymJoinToBroadcastStation_Parms.InTicket1 = InTicket1;
		ymJoinToBroadcastStation_Parms.InTicket2 = InTicket2;

		this->ProcessEvent( pfnymJoinToBroadcastStation, &ymJoinToBroadcastStation_Parms, NULL );
	};

	void ymTransmissionToStation ( TArray< unsigned char > InTransmission )
	{
		static UFunction* pfnymTransmissionToStation = NULL;

		if ( !pfnymTransmissionToStation )
			pfnymTransmissionToStation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTransmissionToStation" );

		UCCCheatManager_execymTransmissionToStation_Parms ymTransmissionToStation_Parms;
		ymTransmissionToStation_Parms.InTransmission = InTransmission;

		this->ProcessEvent( pfnymTransmissionToStation, &ymTransmissionToStation_Parms, NULL );
	};

	void ymGotTransmission ( int InCharacterId, TArray< unsigned char > InTransmission )
	{
		static UFunction* pfnymGotTransmission = NULL;

		if ( !pfnymGotTransmission )
			pfnymGotTransmission = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGotTransmission" );

		UCCCheatManager_execymGotTransmission_Parms ymGotTransmission_Parms;
		ymGotTransmission_Parms.InCharacterId = InCharacterId;
		ymGotTransmission_Parms.InTransmission = InTransmission;

		this->ProcessEvent( pfnymGotTransmission, &ymGotTransmission_Parms, NULL );
	};

	void ymVoiceStationListeners ( TArray< int > InCharacterIds )
	{
		static UFunction* pfnymVoiceStationListeners = NULL;

		if ( !pfnymVoiceStationListeners )
			pfnymVoiceStationListeners = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymVoiceStationListeners" );

		UCCCheatManager_execymVoiceStationListeners_Parms ymVoiceStationListeners_Parms;
		ymVoiceStationListeners_Parms.InCharacterIds = InCharacterIds;

		this->ProcessEvent( pfnymVoiceStationListeners, &ymVoiceStationListeners_Parms, NULL );
	};

	void ymLeaveVoiceBroadcastStation ( int InCharacterId )
	{
		static UFunction* pfnymLeaveVoiceBroadcastStation = NULL;

		if ( !pfnymLeaveVoiceBroadcastStation )
			pfnymLeaveVoiceBroadcastStation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLeaveVoiceBroadcastStation" );

		UCCCheatManager_execymLeaveVoiceBroadcastStation_Parms ymLeaveVoiceBroadcastStation_Parms;
		ymLeaveVoiceBroadcastStation_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymLeaveVoiceBroadcastStation, &ymLeaveVoiceBroadcastStation_Parms, NULL );
	};

	void ymJoinedToVoiceBroadcastStation ( int InCharacterId )
	{
		static UFunction* pfnymJoinedToVoiceBroadcastStation = NULL;

		if ( !pfnymJoinedToVoiceBroadcastStation )
			pfnymJoinedToVoiceBroadcastStation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymJoinedToVoiceBroadcastStation" );

		UCCCheatManager_execymJoinedToVoiceBroadcastStation_Parms ymJoinedToVoiceBroadcastStation_Parms;
		ymJoinedToVoiceBroadcastStation_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnymJoinedToVoiceBroadcastStation, &ymJoinedToVoiceBroadcastStation_Parms, NULL );
	};

	void ymTicketToMovementBroadcastStation ( int InTicket1, int InTicket2, struct FString InHost, int InPort )
	{
		static UFunction* pfnymTicketToMovementBroadcastStation = NULL;

		if ( !pfnymTicketToMovementBroadcastStation )
			pfnymTicketToMovementBroadcastStation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTicketToMovementBroadcastStation" );

		UCCCheatManager_execymTicketToMovementBroadcastStation_Parms ymTicketToMovementBroadcastStation_Parms;
		ymTicketToMovementBroadcastStation_Parms.InTicket1 = InTicket1;
		ymTicketToMovementBroadcastStation_Parms.InTicket2 = InTicket2;
		memcpy( &ymTicketToMovementBroadcastStation_Parms.InHost, &InHost, 0xC );
		ymTicketToMovementBroadcastStation_Parms.InPort = InPort;

		this->ProcessEvent( pfnymTicketToMovementBroadcastStation, &ymTicketToMovementBroadcastStation_Parms, NULL );
	};

	void ymTicketToVoiceBroadcastStation ( int InTicket1, int InTicket2, struct FString InHost, int InPort )
	{
		static UFunction* pfnymTicketToVoiceBroadcastStation = NULL;

		if ( !pfnymTicketToVoiceBroadcastStation )
			pfnymTicketToVoiceBroadcastStation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTicketToVoiceBroadcastStation" );

		UCCCheatManager_execymTicketToVoiceBroadcastStation_Parms ymTicketToVoiceBroadcastStation_Parms;
		ymTicketToVoiceBroadcastStation_Parms.InTicket1 = InTicket1;
		ymTicketToVoiceBroadcastStation_Parms.InTicket2 = InTicket2;
		memcpy( &ymTicketToVoiceBroadcastStation_Parms.InHost, &InHost, 0xC );
		ymTicketToVoiceBroadcastStation_Parms.InPort = InPort;

		this->ProcessEvent( pfnymTicketToVoiceBroadcastStation, &ymTicketToVoiceBroadcastStation_Parms, NULL );
	};

	void ymGotMovementTransmission ( int InCharacterId, TArray< unsigned char > InTransmission )
	{
		static UFunction* pfnymGotMovementTransmission = NULL;

		if ( !pfnymGotMovementTransmission )
			pfnymGotMovementTransmission = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGotMovementTransmission" );

		UCCCheatManager_execymGotMovementTransmission_Parms ymGotMovementTransmission_Parms;
		ymGotMovementTransmission_Parms.InCharacterId = InCharacterId;
		ymGotMovementTransmission_Parms.InTransmission = InTransmission;

		this->ProcessEvent( pfnymGotMovementTransmission, &ymGotMovementTransmission_Parms, NULL );
	};

	void ymGotVoiceTransmission ( int InCharacterId, TArray< unsigned char > InTransmission )
	{
		static UFunction* pfnymGotVoiceTransmission = NULL;

		if ( !pfnymGotVoiceTransmission )
			pfnymGotVoiceTransmission = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGotVoiceTransmission" );

		UCCCheatManager_execymGotVoiceTransmission_Parms ymGotVoiceTransmission_Parms;
		ymGotVoiceTransmission_Parms.InCharacterId = InCharacterId;
		ymGotVoiceTransmission_Parms.InTransmission = InTransmission;

		this->ProcessEvent( pfnymGotVoiceTransmission, &ymGotVoiceTransmission_Parms, NULL );
	};

	void ymTransmissionToMovementStation ( TArray< unsigned char > InTransmission )
	{
		static UFunction* pfnymTransmissionToMovementStation = NULL;

		if ( !pfnymTransmissionToMovementStation )
			pfnymTransmissionToMovementStation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTransmissionToMovementStation" );

		UCCCheatManager_execymTransmissionToMovementStation_Parms ymTransmissionToMovementStation_Parms;
		ymTransmissionToMovementStation_Parms.InTransmission = InTransmission;

		this->ProcessEvent( pfnymTransmissionToMovementStation, &ymTransmissionToMovementStation_Parms, NULL );
	};

	void ymTransmissionToVoiceStation ( TArray< unsigned char > InTransmission )
	{
		static UFunction* pfnymTransmissionToVoiceStation = NULL;

		if ( !pfnymTransmissionToVoiceStation )
			pfnymTransmissionToVoiceStation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymTransmissionToVoiceStation" );

		UCCCheatManager_execymTransmissionToVoiceStation_Parms ymTransmissionToVoiceStation_Parms;
		ymTransmissionToVoiceStation_Parms.InTransmission = InTransmission;

		this->ProcessEvent( pfnymTransmissionToVoiceStation, &ymTransmissionToVoiceStation_Parms, NULL );
	};

	void ymJoinToMovementBroadcastStationResponse ( unsigned char InResponse )
	{
		static UFunction* pfnymJoinToMovementBroadcastStationResponse = NULL;

		if ( !pfnymJoinToMovementBroadcastStationResponse )
			pfnymJoinToMovementBroadcastStationResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymJoinToMovementBroadcastStationResponse" );

		UCCCheatManager_execymJoinToMovementBroadcastStationResponse_Parms ymJoinToMovementBroadcastStationResponse_Parms;
		ymJoinToMovementBroadcastStationResponse_Parms.InResponse = InResponse;

		this->ProcessEvent( pfnymJoinToMovementBroadcastStationResponse, &ymJoinToMovementBroadcastStationResponse_Parms, NULL );
	};

	void ymJoinToVoiceBroadcastStationResponse ( unsigned char InResponse )
	{
		static UFunction* pfnymJoinToVoiceBroadcastStationResponse = NULL;

		if ( !pfnymJoinToVoiceBroadcastStationResponse )
			pfnymJoinToVoiceBroadcastStationResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymJoinToVoiceBroadcastStationResponse" );

		UCCCheatManager_execymJoinToVoiceBroadcastStationResponse_Parms ymJoinToVoiceBroadcastStationResponse_Parms;
		ymJoinToVoiceBroadcastStationResponse_Parms.InResponse = InResponse;

		this->ProcessEvent( pfnymJoinToVoiceBroadcastStationResponse, &ymJoinToVoiceBroadcastStationResponse_Parms, NULL );
	};

	void ymJoinToMovementBroadcastStation ( int InTicket1, int InTicket2 )
	{
		static UFunction* pfnymJoinToMovementBroadcastStation = NULL;

		if ( !pfnymJoinToMovementBroadcastStation )
			pfnymJoinToMovementBroadcastStation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymJoinToMovementBroadcastStation" );

		UCCCheatManager_execymJoinToMovementBroadcastStation_Parms ymJoinToMovementBroadcastStation_Parms;
		ymJoinToMovementBroadcastStation_Parms.InTicket1 = InTicket1;
		ymJoinToMovementBroadcastStation_Parms.InTicket2 = InTicket2;

		this->ProcessEvent( pfnymJoinToMovementBroadcastStation, &ymJoinToMovementBroadcastStation_Parms, NULL );
	};

	void ymJoinToVoiceBroadcastStation ( int InTicket1, int InTicket2 )
	{
		static UFunction* pfnymJoinToVoiceBroadcastStation = NULL;

		if ( !pfnymJoinToVoiceBroadcastStation )
			pfnymJoinToVoiceBroadcastStation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymJoinToVoiceBroadcastStation" );

		UCCCheatManager_execymJoinToVoiceBroadcastStation_Parms ymJoinToVoiceBroadcastStation_Parms;
		ymJoinToVoiceBroadcastStation_Parms.InTicket1 = InTicket1;
		ymJoinToVoiceBroadcastStation_Parms.InTicket2 = InTicket2;

		this->ProcessEvent( pfnymJoinToVoiceBroadcastStation, &ymJoinToVoiceBroadcastStation_Parms, NULL );
	};

	void ymRenameBankTabResponse ( unsigned long InIsSuccess )
	{
		static UFunction* pfnymRenameBankTabResponse = NULL;

		if ( !pfnymRenameBankTabResponse )
			pfnymRenameBankTabResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRenameBankTabResponse" );

		UCCCheatManager_execymRenameBankTabResponse_Parms ymRenameBankTabResponse_Parms;
		ymRenameBankTabResponse_Parms.InIsSuccess = InIsSuccess;

		this->ProcessEvent( pfnymRenameBankTabResponse, &ymRenameBankTabResponse_Parms, NULL );
	};

	void ymRenameBankTab ( unsigned char InTabIndex, struct FString InCaption )
	{
		static UFunction* pfnymRenameBankTab = NULL;

		if ( !pfnymRenameBankTab )
			pfnymRenameBankTab = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRenameBankTab" );

		UCCCheatManager_execymRenameBankTab_Parms ymRenameBankTab_Parms;
		ymRenameBankTab_Parms.InTabIndex = InTabIndex;
		memcpy( &ymRenameBankTab_Parms.InCaption, &InCaption, 0xC );

		this->ProcessEvent( pfnymRenameBankTab, &ymRenameBankTab_Parms, NULL );
	};

	void ymBuyNewBankTabResponse ( unsigned long InIsSuccess )
	{
		static UFunction* pfnymBuyNewBankTabResponse = NULL;

		if ( !pfnymBuyNewBankTabResponse )
			pfnymBuyNewBankTabResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuyNewBankTabResponse" );

		UCCCheatManager_execymBuyNewBankTabResponse_Parms ymBuyNewBankTabResponse_Parms;
		ymBuyNewBankTabResponse_Parms.InIsSuccess = InIsSuccess;

		this->ProcessEvent( pfnymBuyNewBankTabResponse, &ymBuyNewBankTabResponse_Parms, NULL );
	};

	void ymBuyNewBankTab ( struct FString InCaption )
	{
		static UFunction* pfnymBuyNewBankTab = NULL;

		if ( !pfnymBuyNewBankTab )
			pfnymBuyNewBankTab = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuyNewBankTab" );

		UCCCheatManager_execymBuyNewBankTab_Parms ymBuyNewBankTab_Parms;
		memcpy( &ymBuyNewBankTab_Parms.InCaption, &InCaption, 0xC );

		this->ProcessEvent( pfnymBuyNewBankTab, &ymBuyNewBankTab_Parms, NULL );
	};

	void ymAuctionStatisticsTimeList ( TArray< struct FAuctionStatisticsTime > InTimes )
	{
		static UFunction* pfnymAuctionStatisticsTimeList = NULL;

		if ( !pfnymAuctionStatisticsTimeList )
			pfnymAuctionStatisticsTimeList = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAuctionStatisticsTimeList" );

		UCCCheatManager_execymAuctionStatisticsTimeList_Parms ymAuctionStatisticsTimeList_Parms;
		memcpy( &ymAuctionStatisticsTimeList_Parms.InTimes, &InTimes, 0xC );

		this->ProcessEvent( pfnymAuctionStatisticsTimeList, &ymAuctionStatisticsTimeList_Parms, NULL );
	};

	void ymAuctionStatisticsData ( int InHistoricalMinPrice, int InHistoricalMinStackPrice, int InHistoricalMaxPrice, int InHistoricalMaxStackPrice, int InHistoricalItemCount, int InHistoricalStackCount, int InHistoricalWeightedAveragePrice, int InHistoricalWeightedAverageStackPrice, int InCurrentMinBuyoutPrice, int InCurrentMinBuyoutStackPrice, int InCurrentMaxBuyoutPrice, int InCurrentMaxBuyoutStackPrice, int InCurrentWeightedAverageBuyoutPrice, int InCurrentWeightedAverageBuyoutStackPrice, int InCurrentMinPrice, int InCurrentMinStackPrice, int InCurrentMaxPrice, int InCurrentMaxStackPrice, int InCurrentItemCount, int InCurrentStackCount, int InCurrentWeightedAveragePrice, int InCurrentWeightedAverageStackPrice, int InCurrentWeightedAverageBid, int InCurrentWeightedAverageStackBid )
	{
		static UFunction* pfnymAuctionStatisticsData = NULL;

		if ( !pfnymAuctionStatisticsData )
			pfnymAuctionStatisticsData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAuctionStatisticsData" );

		UCCCheatManager_execymAuctionStatisticsData_Parms ymAuctionStatisticsData_Parms;
		ymAuctionStatisticsData_Parms.InHistoricalMinPrice = InHistoricalMinPrice;
		ymAuctionStatisticsData_Parms.InHistoricalMinStackPrice = InHistoricalMinStackPrice;
		ymAuctionStatisticsData_Parms.InHistoricalMaxPrice = InHistoricalMaxPrice;
		ymAuctionStatisticsData_Parms.InHistoricalMaxStackPrice = InHistoricalMaxStackPrice;
		ymAuctionStatisticsData_Parms.InHistoricalItemCount = InHistoricalItemCount;
		ymAuctionStatisticsData_Parms.InHistoricalStackCount = InHistoricalStackCount;
		ymAuctionStatisticsData_Parms.InHistoricalWeightedAveragePrice = InHistoricalWeightedAveragePrice;
		ymAuctionStatisticsData_Parms.InHistoricalWeightedAverageStackPrice = InHistoricalWeightedAverageStackPrice;
		ymAuctionStatisticsData_Parms.InCurrentMinBuyoutPrice = InCurrentMinBuyoutPrice;
		ymAuctionStatisticsData_Parms.InCurrentMinBuyoutStackPrice = InCurrentMinBuyoutStackPrice;
		ymAuctionStatisticsData_Parms.InCurrentMaxBuyoutPrice = InCurrentMaxBuyoutPrice;
		ymAuctionStatisticsData_Parms.InCurrentMaxBuyoutStackPrice = InCurrentMaxBuyoutStackPrice;
		ymAuctionStatisticsData_Parms.InCurrentWeightedAverageBuyoutPrice = InCurrentWeightedAverageBuyoutPrice;
		ymAuctionStatisticsData_Parms.InCurrentWeightedAverageBuyoutStackPrice = InCurrentWeightedAverageBuyoutStackPrice;
		ymAuctionStatisticsData_Parms.InCurrentMinPrice = InCurrentMinPrice;
		ymAuctionStatisticsData_Parms.InCurrentMinStackPrice = InCurrentMinStackPrice;
		ymAuctionStatisticsData_Parms.InCurrentMaxPrice = InCurrentMaxPrice;
		ymAuctionStatisticsData_Parms.InCurrentMaxStackPrice = InCurrentMaxStackPrice;
		ymAuctionStatisticsData_Parms.InCurrentItemCount = InCurrentItemCount;
		ymAuctionStatisticsData_Parms.InCurrentStackCount = InCurrentStackCount;
		ymAuctionStatisticsData_Parms.InCurrentWeightedAveragePrice = InCurrentWeightedAveragePrice;
		ymAuctionStatisticsData_Parms.InCurrentWeightedAverageStackPrice = InCurrentWeightedAverageStackPrice;
		ymAuctionStatisticsData_Parms.InCurrentWeightedAverageBid = InCurrentWeightedAverageBid;
		ymAuctionStatisticsData_Parms.InCurrentWeightedAverageStackBid = InCurrentWeightedAverageStackBid;

		this->ProcessEvent( pfnymAuctionStatisticsData, &ymAuctionStatisticsData_Parms, NULL );
	};

	void ymAuctionStatisticsResponse ( unsigned char InResult )
	{
		static UFunction* pfnymAuctionStatisticsResponse = NULL;

		if ( !pfnymAuctionStatisticsResponse )
			pfnymAuctionStatisticsResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAuctionStatisticsResponse" );

		UCCCheatManager_execymAuctionStatisticsResponse_Parms ymAuctionStatisticsResponse_Parms;
		ymAuctionStatisticsResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymAuctionStatisticsResponse, &ymAuctionStatisticsResponse_Parms, NULL );
	};

	void ymAuctionStatisticsRequest ( int InTemplateId )
	{
		static UFunction* pfnymAuctionStatisticsRequest = NULL;

		if ( !pfnymAuctionStatisticsRequest )
			pfnymAuctionStatisticsRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymAuctionStatisticsRequest" );

		UCCCheatManager_execymAuctionStatisticsRequest_Parms ymAuctionStatisticsRequest_Parms;
		ymAuctionStatisticsRequest_Parms.InTemplateId = InTemplateId;

		this->ProcessEvent( pfnymAuctionStatisticsRequest, &ymAuctionStatisticsRequest_Parms, NULL );
	};

	void ymBuyAuctionStatisticsTime ( int InTemplateId )
	{
		static UFunction* pfnymBuyAuctionStatisticsTime = NULL;

		if ( !pfnymBuyAuctionStatisticsTime )
			pfnymBuyAuctionStatisticsTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuyAuctionStatisticsTime" );

		UCCCheatManager_execymBuyAuctionStatisticsTime_Parms ymBuyAuctionStatisticsTime_Parms;
		ymBuyAuctionStatisticsTime_Parms.InTemplateId = InTemplateId;

		this->ProcessEvent( pfnymBuyAuctionStatisticsTime, &ymBuyAuctionStatisticsTime_Parms, NULL );
	};

	void ymDisableAutoupdateLotList ()
	{
		static UFunction* pfnymDisableAutoupdateLotList = NULL;

		if ( !pfnymDisableAutoupdateLotList )
			pfnymDisableAutoupdateLotList = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymDisableAutoupdateLotList" );

		UCCCheatManager_execymDisableAutoupdateLotList_Parms ymDisableAutoupdateLotList_Parms;

		this->ProcessEvent( pfnymDisableAutoupdateLotList, &ymDisableAutoupdateLotList_Parms, NULL );
	};

	void ymEnableAutoupdateLotList ()
	{
		static UFunction* pfnymEnableAutoupdateLotList = NULL;

		if ( !pfnymEnableAutoupdateLotList )
			pfnymEnableAutoupdateLotList = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymEnableAutoupdateLotList" );

		UCCCheatManager_execymEnableAutoupdateLotList_Parms ymEnableAutoupdateLotList_Parms;

		this->ProcessEvent( pfnymEnableAutoupdateLotList, &ymEnableAutoupdateLotList_Parms, NULL );
	};

	void ymLotListUpdate ( int InRequestId, TArray< struct FLotDesc > InLotAdd, TArray< int > InLotDelete )
	{
		static UFunction* pfnymLotListUpdate = NULL;

		if ( !pfnymLotListUpdate )
			pfnymLotListUpdate = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLotListUpdate" );

		UCCCheatManager_execymLotListUpdate_Parms ymLotListUpdate_Parms;
		ymLotListUpdate_Parms.InRequestId = InRequestId;
		memcpy( &ymLotListUpdate_Parms.InLotAdd, &InLotAdd, 0xC );
		ymLotListUpdate_Parms.InLotDelete = InLotDelete;

		this->ProcessEvent( pfnymLotListUpdate, &ymLotListUpdate_Parms, NULL );
	};

	void ymLotListResponse ( int InRequestId, TArray< struct FLotDesc > InLotList )
	{
		static UFunction* pfnymLotListResponse = NULL;

		if ( !pfnymLotListResponse )
			pfnymLotListResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLotListResponse" );

		UCCCheatManager_execymLotListResponse_Parms ymLotListResponse_Parms;
		ymLotListResponse_Parms.InRequestId = InRequestId;
		memcpy( &ymLotListResponse_Parms.InLotList, &InLotList, 0xC );

		this->ProcessEvent( pfnymLotListResponse, &ymLotListResponse_Parms, NULL );
	};

	void ymLotListRequest ( int InFilterId, int InRequestId, unsigned char InSorter, int InStartIndex, int InCount )
	{
		static UFunction* pfnymLotListRequest = NULL;

		if ( !pfnymLotListRequest )
			pfnymLotListRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymLotListRequest" );

		UCCCheatManager_execymLotListRequest_Parms ymLotListRequest_Parms;
		ymLotListRequest_Parms.InFilterId = InFilterId;
		ymLotListRequest_Parms.InRequestId = InRequestId;
		ymLotListRequest_Parms.InSorter = InSorter;
		ymLotListRequest_Parms.InStartIndex = InStartIndex;
		ymLotListRequest_Parms.InCount = InCount;

		this->ProcessEvent( pfnymLotListRequest, &ymLotListRequest_Parms, NULL );
	};

	void ymFilterUserUpdate ( int InFilterId, int InLotCount )
	{
		static UFunction* pfnymFilterUserUpdate = NULL;

		if ( !pfnymFilterUserUpdate )
			pfnymFilterUserUpdate = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymFilterUserUpdate" );

		UCCCheatManager_execymFilterUserUpdate_Parms ymFilterUserUpdate_Parms;
		ymFilterUserUpdate_Parms.InFilterId = InFilterId;
		ymFilterUserUpdate_Parms.InLotCount = InLotCount;

		this->ProcessEvent( pfnymFilterUserUpdate, &ymFilterUserUpdate_Parms, NULL );
	};

	void ymFilterUserResponse ( int InFilterId, int InLotCount )
	{
		static UFunction* pfnymFilterUserResponse = NULL;

		if ( !pfnymFilterUserResponse )
			pfnymFilterUserResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymFilterUserResponse" );

		UCCCheatManager_execymFilterUserResponse_Parms ymFilterUserResponse_Parms;
		ymFilterUserResponse_Parms.InFilterId = InFilterId;
		ymFilterUserResponse_Parms.InLotCount = InLotCount;

		this->ProcessEvent( pfnymFilterUserResponse, &ymFilterUserResponse_Parms, NULL );
	};

	void ymFilterUser ( int InFilterId, TArray< struct FFilterUnit > InFilters, TArray< struct FFilterUnitString > InFiltersString )
	{
		static UFunction* pfnymFilterUser = NULL;

		if ( !pfnymFilterUser )
			pfnymFilterUser = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymFilterUser" );

		UCCCheatManager_execymFilterUser_Parms ymFilterUser_Parms;
		ymFilterUser_Parms.InFilterId = InFilterId;
		memcpy( &ymFilterUser_Parms.InFilters, &InFilters, 0xC );
		memcpy( &ymFilterUser_Parms.InFiltersString, &InFiltersString, 0xC );

		this->ProcessEvent( pfnymFilterUser, &ymFilterUser_Parms, NULL );
	};

	void ymBuyoutLotResponse ( unsigned char InResult )
	{
		static UFunction* pfnymBuyoutLotResponse = NULL;

		if ( !pfnymBuyoutLotResponse )
			pfnymBuyoutLotResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuyoutLotResponse" );

		UCCCheatManager_execymBuyoutLotResponse_Parms ymBuyoutLotResponse_Parms;
		ymBuyoutLotResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymBuyoutLotResponse, &ymBuyoutLotResponse_Parms, NULL );
	};

	void ymBuyoutLot ( int InLotId )
	{
		static UFunction* pfnymBuyoutLot = NULL;

		if ( !pfnymBuyoutLot )
			pfnymBuyoutLot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBuyoutLot" );

		UCCCheatManager_execymBuyoutLot_Parms ymBuyoutLot_Parms;
		ymBuyoutLot_Parms.InLotId = InLotId;

		this->ProcessEvent( pfnymBuyoutLot, &ymBuyoutLot_Parms, NULL );
	};

	void ymBidLotResponse ( unsigned char InResult )
	{
		static UFunction* pfnymBidLotResponse = NULL;

		if ( !pfnymBidLotResponse )
			pfnymBidLotResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBidLotResponse" );

		UCCCheatManager_execymBidLotResponse_Parms ymBidLotResponse_Parms;
		ymBidLotResponse_Parms.InResult = InResult;

		this->ProcessEvent( pfnymBidLotResponse, &ymBidLotResponse_Parms, NULL );
	};

	void ymBidLot ( int InLotId, int InPrice )
	{
		static UFunction* pfnymBidLot = NULL;

		if ( !pfnymBidLot )
			pfnymBidLot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymBidLot" );

		UCCCheatManager_execymBidLot_Parms ymBidLot_Parms;
		ymBidLot_Parms.InLotId = InLotId;
		ymBidLot_Parms.InPrice = InPrice;

		this->ProcessEvent( pfnymBidLot, &ymBidLot_Parms, NULL );
	};

	void ymCanceledLot ( unsigned char InResult )
	{
		static UFunction* pfnymCanceledLot = NULL;

		if ( !pfnymCanceledLot )
			pfnymCanceledLot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCanceledLot" );

		UCCCheatManager_execymCanceledLot_Parms ymCanceledLot_Parms;
		ymCanceledLot_Parms.InResult = InResult;

		this->ProcessEvent( pfnymCanceledLot, &ymCanceledLot_Parms, NULL );
	};

	void ymCancelLot ( int InLotId )
	{
		static UFunction* pfnymCancelLot = NULL;

		if ( !pfnymCancelLot )
			pfnymCancelLot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCancelLot" );

		UCCCheatManager_execymCancelLot_Parms ymCancelLot_Parms;
		ymCancelLot_Parms.InLotId = InLotId;

		this->ProcessEvent( pfnymCancelLot, &ymCancelLot_Parms, NULL );
	};

	void ymCreatedLot ( unsigned char InResult )
	{
		static UFunction* pfnymCreatedLot = NULL;

		if ( !pfnymCreatedLot )
			pfnymCreatedLot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCreatedLot" );

		UCCCheatManager_execymCreatedLot_Parms ymCreatedLot_Parms;
		ymCreatedLot_Parms.InResult = InResult;

		this->ProcessEvent( pfnymCreatedLot, &ymCreatedLot_Parms, NULL );
	};

	void ymCreateLot ( int InItemId, int InStartPrice, int InBuyoutPrice, int InBidStep, int InTTL )
	{
		static UFunction* pfnymCreateLot = NULL;

		if ( !pfnymCreateLot )
			pfnymCreateLot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymCreateLot" );

		UCCCheatManager_execymCreateLot_Parms ymCreateLot_Parms;
		ymCreateLot_Parms.InItemId = InItemId;
		ymCreateLot_Parms.InStartPrice = InStartPrice;
		ymCreateLot_Parms.InBuyoutPrice = InBuyoutPrice;
		ymCreateLot_Parms.InBidStep = InBidStep;
		ymCreateLot_Parms.InTTL = InTTL;

		this->ProcessEvent( pfnymCreateLot, &ymCreateLot_Parms, NULL );
	};

	void ymGotCharacterStatistic ( TArray< struct FStatisticParameterDescription > InStatisticParameter )
	{
		static UFunction* pfnymGotCharacterStatistic = NULL;

		if ( !pfnymGotCharacterStatistic )
			pfnymGotCharacterStatistic = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGotCharacterStatistic" );

		UCCCheatManager_execymGotCharacterStatistic_Parms ymGotCharacterStatistic_Parms;
		memcpy( &ymGotCharacterStatistic_Parms.InStatisticParameter, &InStatisticParameter, 0xC );

		this->ProcessEvent( pfnymGotCharacterStatistic, &ymGotCharacterStatistic_Parms, NULL );
	};

	void ymGetCharacterStatistic ()
	{
		static UFunction* pfnymGetCharacterStatistic = NULL;

		if ( !pfnymGetCharacterStatistic )
			pfnymGetCharacterStatistic = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymGetCharacterStatistic" );

		UCCCheatManager_execymGetCharacterStatistic_Parms ymGetCharacterStatistic_Parms;

		this->ProcessEvent( pfnymGetCharacterStatistic, &ymGetCharacterStatistic_Parms, NULL );
	};

	void ymNotifyKnownAbilities ( TArray< struct FNotifyKnownAbilities_NonPremiumAbility > InNonPremiumAbilities, TArray< struct FNotifyKnownAbilities_PremiumAbilityWithLimitedTime > InPremiumAbilitiesWithLimitedTime, TArray< struct FNotifyKnownAbilities_PremiumAbilityWithLimitedUses > InPremiumAbilitiesWithLimitedUses )
	{
		static UFunction* pfnymNotifyKnownAbilities = NULL;

		if ( !pfnymNotifyKnownAbilities )
			pfnymNotifyKnownAbilities = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyKnownAbilities" );

		UCCCheatManager_execymNotifyKnownAbilities_Parms ymNotifyKnownAbilities_Parms;
		memcpy( &ymNotifyKnownAbilities_Parms.InNonPremiumAbilities, &InNonPremiumAbilities, 0xC );
		memcpy( &ymNotifyKnownAbilities_Parms.InPremiumAbilitiesWithLimitedTime, &InPremiumAbilitiesWithLimitedTime, 0xC );
		memcpy( &ymNotifyKnownAbilities_Parms.InPremiumAbilitiesWithLimitedUses, &InPremiumAbilitiesWithLimitedUses, 0xC );

		this->ProcessEvent( pfnymNotifyKnownAbilities, &ymNotifyKnownAbilities_Parms, NULL );
	};

	void ymNotifyAbilityExpiration ( int InAbilityId )
	{
		static UFunction* pfnymNotifyAbilityExpiration = NULL;

		if ( !pfnymNotifyAbilityExpiration )
			pfnymNotifyAbilityExpiration = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyAbilityExpiration" );

		UCCCheatManager_execymNotifyAbilityExpiration_Parms ymNotifyAbilityExpiration_Parms;
		ymNotifyAbilityExpiration_Parms.InAbilityId = InAbilityId;

		this->ProcessEvent( pfnymNotifyAbilityExpiration, &ymNotifyAbilityExpiration_Parms, NULL );
	};

	void ymChangedAbilitiesOnActionBar ( unsigned long InIsSuccess )
	{
		static UFunction* pfnymChangedAbilitiesOnActionBar = NULL;

		if ( !pfnymChangedAbilitiesOnActionBar )
			pfnymChangedAbilitiesOnActionBar = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymChangedAbilitiesOnActionBar" );

		UCCCheatManager_execymChangedAbilitiesOnActionBar_Parms ymChangedAbilitiesOnActionBar_Parms;
		ymChangedAbilitiesOnActionBar_Parms.InIsSuccess = InIsSuccess;

		this->ProcessEvent( pfnymChangedAbilitiesOnActionBar, &ymChangedAbilitiesOnActionBar_Parms, NULL );
	};

	void ymChangeAbilitiesOnActionBar ( TArray< int > InAbilities )
	{
		static UFunction* pfnymChangeAbilitiesOnActionBar = NULL;

		if ( !pfnymChangeAbilitiesOnActionBar )
			pfnymChangeAbilitiesOnActionBar = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymChangeAbilitiesOnActionBar" );

		UCCCheatManager_execymChangeAbilitiesOnActionBar_Parms ymChangeAbilitiesOnActionBar_Parms;
		ymChangeAbilitiesOnActionBar_Parms.InAbilities = InAbilities;

		this->ProcessEvent( pfnymChangeAbilitiesOnActionBar, &ymChangeAbilitiesOnActionBar_Parms, NULL );
	};

	void ymNotifyActionBarAbilities ( TArray< int > InAbilitiesOnActionBar )
	{
		static UFunction* pfnymNotifyActionBarAbilities = NULL;

		if ( !pfnymNotifyActionBarAbilities )
			pfnymNotifyActionBarAbilities = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymNotifyActionBarAbilities" );

		UCCCheatManager_execymNotifyActionBarAbilities_Parms ymNotifyActionBarAbilities_Parms;
		ymNotifyActionBarAbilities_Parms.InAbilitiesOnActionBar = InAbilitiesOnActionBar;

		this->ProcessEvent( pfnymNotifyActionBarAbilities, &ymNotifyActionBarAbilities_Parms, NULL );
	};

	void ymRaisedAbilityLevels ( unsigned long InIsSuccess )
	{
		static UFunction* pfnymRaisedAbilityLevels = NULL;

		if ( !pfnymRaisedAbilityLevels )
			pfnymRaisedAbilityLevels = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRaisedAbilityLevels" );

		UCCCheatManager_execymRaisedAbilityLevels_Parms ymRaisedAbilityLevels_Parms;
		ymRaisedAbilityLevels_Parms.InIsSuccess = InIsSuccess;

		this->ProcessEvent( pfnymRaisedAbilityLevels, &ymRaisedAbilityLevels_Parms, NULL );
	};

	void ymRaiseAbilityLevels ( TArray< struct FAbilityRiseDescription > InAbilitiesToRaise )
	{
		static UFunction* pfnymRaiseAbilityLevels = NULL;

		if ( !pfnymRaiseAbilityLevels )
			pfnymRaiseAbilityLevels = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymRaiseAbilityLevels" );

		UCCCheatManager_execymRaiseAbilityLevels_Parms ymRaiseAbilityLevels_Parms;
		memcpy( &ymRaiseAbilityLevels_Parms.InAbilitiesToRaise, &InAbilitiesToRaise, 0xC );

		this->ProcessEvent( pfnymRaiseAbilityLevels, &ymRaiseAbilityLevels_Parms, NULL );
	};

	void ymResetAbilities ()
	{
		static UFunction* pfnymResetAbilities = NULL;

		if ( !pfnymResetAbilities )
			pfnymResetAbilities = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCheatManager.ymResetAbilities" );

		UCCCheatManager_execymResetAbilities_Parms ymResetAbilities_Parms;

		this->ProcessEvent( pfnymResetAbilities, &ymResetAbilities_Parms, NULL );
	};

};

UClass* UCCCheatManager::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif