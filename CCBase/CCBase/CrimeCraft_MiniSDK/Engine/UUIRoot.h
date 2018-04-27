/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UUIRoot.h
// Date: 06/16/2011 @ 05:19:40.20
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

#define Const_MAX_SUPPORTED_GAMEPADS               4
#define Const_SCENE_DATASTORE_TAG                  'SceneData'
#define Const_DEFAULT_SIZE_Y                       768
#define Const_DEFAULT_SIZE_X                       1024
#define Const_PRIVATE_Protected                    0x380
#define Const_PRIVATE_KeepFocusedState             0x800
#define Const_PRIVATE_PropagateState               0x400
#define Const_PRIVATE_EditorNoReparent             0x200
#define Const_PRIVATE_EditorNoRename               0x100
#define Const_PRIVATE_EditorNoDelete               0x080
#define Const_PRIVATE_TreeHiddenRecursive          0x042
#define Const_PRIVATE_ManagedStyle                 0x020
#define Const_PRIVATE_NotRotatable                 0x010
#define Const_PRIVATE_NotDockable                  0x008
#define Const_PRIVATE_NotFocusable                 0x004
#define Const_PRIVATE_TreeHidden                   0x002
#define Const_PRIVATE_NotEditorSelectable          0x001
#define Const_DEFAULT_SCENE_PRIORITY               10
#define Const_TEMP_SPLITSCREEN_INDEX               0

enum EUIPostProcessGroup
{
	UIPostProcess_None = 0,
	UIPostProcess_Background = 1,
	UIPostProcess_Foreground = 2,
	UIPostProcess_BackgroundAndForeground = 3,
	UIPostProcess_Dynamic = 4,
	UIPostProcess_MAX = 5
};

enum EInputPlatformType
{
	IPT_PC = 0,
	IPT = 1,
	IPT_PS3 = 2,
	IPT_MAX = 3
};

enum ERotationAnchor
{
	RA_Absolute = 0,
	RA_Center = 1,
	RA_PivotLeft = 2,
	RA_PivotRight = 3,
	RA_PivotTop = 4,
	RA_PivotBottom = 5,
	RA_UpperLeft = 6,
	RA_UpperRight = 7,
	RA_LowerLeft = 8,
	RA_LowerRight = 9,
	RA_MAX = 10
};

enum EEditBoxCharacterSet
{
	CHARSET_All = 0,
	CHARSET_NoSpecial = 1,
	CHARSET_AlphaOnly = 2,
	CHARSET_NumericOnly = 3,
	CHARSET_AlphaNumeric = 4,
	CHARSET_MAX = 5
};

enum EUIDataProviderFieldType
{
	DATATYPE_Property = 0,
	DATATYPE_Provider = 1,
	DATATYPE_RangeProperty = 2,
	DATATYPE_NetIdProperty = 3,
	DATATYPE_Collection = 4,
	DATATYPE_ProviderCollection = 5,
	DATATYPE_MAX = 6
};

enum ESplitscreenRenderMode
{
	SPLITRENDER_Fullscreen = 0,
	SPLITRENDER_PlayerOwner = 1,
	SPLITRENDER_MAX = 2
};

enum EScreenInputMode
{
	INPUTMODE_None = 0,
	INPUTMODE_Locked = 1,
	INPUTMODE_Selective = 2,
	INPUTMODE_MatchingOnly = 3,
	INPUTMODE_ActiveOnly = 4,
	INPUTMODE_Free = 5,
	INPUTMODE_Simultaneous = 6,
	INPUTMODE_MAX = 7
};

enum ENavigationLinkType
{
	NAVLINK_Automatic = 0,
	NAVLINK_Manual = 1,
	NAVLINK_MAX = 2
};

enum EUIDefaultPenColor
{
	UIPEN_White = 0,
	UIPEN_Black = 1,
	UIPEN_Grey = 2,
	UIPEN_MAX = 3
};

enum EUIAspectRatioConstraint
{
	UIASPECTRATIO_AdjustNone = 0,
	UIASPECTRATIO_AdjustWidth = 1,
	UIASPECTRATIO_AdjustHeight = 2,
	UIASPECTRATIO_MAX = 3
};

enum EUIWidgetFace
{
	UIFACE_Left = 0,
	UIFACE_Top = 1,
	UIFACE_Right = 2,
	UIFACE_Bottom = 3,
	UIFACE_MAX = 4
};

enum EUIOrientation
{
	UIORIENT_Horizontal = 0,
	UIORIENT_Vertical = 1,
	UIORIENT_MAX = 2
};

enum EColumnHeaderState
{
	COLUMNHEADER_Normal = 0,
	COLUMNHEADER_PrimarySort = 1,
	COLUMNHEADER_SecondarySort = 2,
	COLUMNHEADER_MAX = 3
};

enum EUIListElementState
{
	ELEMENT_Normal = 0,
	ELEMENT_Active = 1,
	ELEMENT_Selected = 2,
	ELEMENT_UnderCursor = 3,
	ELEMENT_MAX = 4
};

enum EUIAlignment
{
	UIALIGN_Left = 0,
	UIALIGN_Center = 1,
	UIALIGN_Right = 2,
	UIALIGN_Default = 3,
	UIALIGN_MAX = 4
};

enum ETextAutoScaleMode
{
	UIAUTOSCALE_None = 0,
	UIAUTOSCALE_Normal = 1,
	UIAUTOSCALE_Justified = 2,
	UIAUTOSCALE_ResolutionBased = 3,
	UIAUTOSCALE_MAX = 4
};

enum ETextClipMode
{
	CLIP_None = 0,
	CLIP_Normal = 1,
	CLIP_Ellipsis = 2,
	CLIP_Wrap = 3,
	CLIP_MAX = 4
};

enum EUIAutoSizeConstraintType
{
	UIAUTOSIZEREGION_Minimum = 0,
	UIAUTOSIZEREGION_Maximum = 1,
	UIAUTOSIZEREGION_MAX = 2
};

enum EUIDockPaddingEvalType
{
	UIPADDINGEVAL_Pixels = 0,
	UIPADDINGEVAL_PercentTarget = 1,
	UIPADDINGEVAL_PercentOwner = 2,
	UIPADDINGEVAL_PercentScene = 3,
	UIPADDINGEVAL_PercentViewport = 4,
	UIPADDINGEVAL_MAX = 5
};

enum EUIExtentEvalType
{
	UIEXTENTEVAL_Pixels = 0,
	UIEXTENTEVAL_PercentSelf = 1,
	UIEXTENTEVAL_PercentOwner = 2,
	UIEXTENTEVAL_PercentScene = 3,
	UIEXTENTEVAL_PercentViewport = 4,
	UIEXTENTEVAL_MAX = 5
};

enum EPositionEvalType
{
	EVALPOS_None = 0,
	EVALPOS_PixelViewport = 1,
	EVALPOS_PixelScene = 2,
	EVALPOS_PixelOwner = 3,
	EVALPOS_PercentageViewport = 4,
	EVALPOS_PercentageOwner = 5,
	EVALPOS_PercentageScene = 6,
	EVALPOS_MAX = 7
};

enum EListCellStateX
{
	LISTCELLX_Normal = 0,
	LISTCELLX_Active = 1,
	LISTCELLX_Selected = 2,
	LISTCELLX_Picked = 3,
	LISTCELLX_Disabled = 4,
	LISTCELLX_MAX = 5
};

enum EGridCellState
{
	GRIDCELL_Normal = 0,
	GRIDCELL_Active = 1,
	GRIDCELL_Selected = 2,
	GRIDCELL_Picked = 3,
	GRIDCELL_Disabled = 4,
	GRIDCELL_MAX = 5
};

enum EItemType
{
	CIT_Enemy = 0,
	CIT_Ally = 1,
	CIT_RIP = 2,
	CIT_Mine_Enemy = 3,
	CIT_Mine_Ally = 4,
	CIT_Shield_Enemy = 5,
	CIT_Shield_Ally = 6,
	CIT_Turret_Enemy = 7,
	CIT_Turret_Ally = 8,
	CIT_FlagDropped_Enemy = 9,
	CIT_FlagDropped_Ally = 10,
	CIT_FlagOwnedByEnemy = 11,
	CIT_FlagOwnedByAlly = 12,
	CIT_DefencecoreActive = 13,
	CIT_DefencecoreUnactive = 14,
	CIT_DefencecoreDestructed = 15,
	CIT_AllyBase = 16,
	CIT_EnemyBase = 17,
	CIT_PointAlly = 18,
	CIT_PointNeutral = 19,
	CIT_PointEnemy = 20,
	CIT_Player = 21,
	CIT_PointAlly_Locked = 22,
	CIT_PointNeutral_Locked = 23,
	CIT_PointEnemy_Locked = 24,
	CIT_ShopVendor = 25,
	CIT_CraftVendor = 26,
	CIT_AbilityVendor = 27,
	CIT_SkillVendor = 28,
	CIT_ClanManagement = 29,
	CIT_BankManagement = 30,
	CIT_Mail = 31,
	CIT_ClanHallVendor = 32,
	CIT_ClanHallPorter = 33,
	CIT_Auction = 34,
	CIT_RepairVendor = 35,
	CIT_InstanceAccess = 36,
	CIT_PlayerLobby = 37,
	CIT_QuestVendor = 38,
	CIT_NoQuest = 39,
	CIT_QuestProposer = 40,
	CIT_QuestAcceptor = 41,
	CIT_QuestWait = 42,
	CIT_QuestTarget = 43,
	CIT_QuestChallanger = 44,
	CIT_LobbyPC = 45,
	CIT_LobbyPorter = 46,
	CIT_LobbyGroupPC = 47,
	CIT_InstanceType_FFA = 48,
	CIT_InstanceType_TDM = 49,
	CIT_InstanceType_CTF = 50,
	CIT_InstanceType_CTP = 51,
	CIT_InstanceType_CLT = 52,
	CIT_InstanceType_Survival = 53,
	CIT_InstanceType_ROB = 54,
	CIT_InstanceType_Survival2 = 55,
	CIT_InstanceType_KTB = 56,
	CIT_InstanceType_Solo = 57,
	CIT_InstanceType_PTB = 58,
	CIT_InstanceType_RadarPlain = 59,
	CIT_RareShopVendor = 60,
	CIT_PremiumShopVendor = 61,
	CIT_NBR = 62,
	CIT_CTF_BaseAlly = 63,
	CIT_CTF_BaseEnemy = 64,
	CIT_CTF_CarryEnemyEnemy = 65,
	CIT_CTF_CarryEnemyAlly = 66,
	CIT_CTF_CarryAllyAlly = 67,
	CIT_CTF_CarryAllyEnemy = 68,
	CIT_CTF_DroppedAlly = 69,
	CIT_CTF_DroppedEnemy = 70,
	CIT_PvPLadder = 71,
	CIT_ClanWarsManager = 72,
	CIT_FlagAlly = 73,
	CIT_FlagEnemy = 74,
	CIT_ClanHallEventManager = 75,
	CIT_Secretary = 76,
	CIT_InstanceQuestZone = 77,
	CIT_NewspaperBox = 78,
	CIT_MunicipalVendor = 79,
	CIT_PointCTZ = 80,
	CIT_TutorialInstance = 81,
	CIT_InteractionObject_Chair = 82,
	CIT_ClubManager = 83,
	CIT_ClubPorter = 84,
	CIT_VipPorter = 85,
	CIT_None = 86,
	CIT_MAX = 87
};

enum EMaterialAdjustmentType
{
	ADJUST_None = 0,
	ADJUST_Normal = 1,
	ADJUST_Justified = 2,
	ADJUST_Bound = 3,
	ADJUST_Stretch = 4,
	ADJUST_Stretch_Vogster1 = 5,
	ADJUST_Stretch_Vogster2 = 6,
	ADJUST_Wrapped = 7,
	ADJUST_Tiled = 8,
	ADJUST_MAX = 9
};

struct UUIRoot_execGetOnlinePlayerInterfaceEx_Parms
{
};// FUNC_Final

struct UUIRoot_execGetOnlinePlayerInterface_Parms
{
};// FUNC_Final

struct UUIRoot_execGetOnlineGameInterface_Parms
{
};// FUNC_Final

struct UUIRoot_execConvertWidgetIDToString_Parms
{
	void* SourceWidget;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UUIRoot_execGetDataStoreStringValue_Parms
{
	struct FString InDataStoreMarkup;
	struct FString OutStringValue; // CPF_OutParm
	void* OwnerScene;
	void* OwnerPlayer;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct UUIRoot_execGetDataStoreFieldValue_Parms
{
	struct FString InDataStoreMarkup;
	struct FUIProviderFieldValue OutFieldValue; // CPF_OutParm
	void* OwnerScene;
	void* OwnerPlayer;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UUIRoot_execSetDataStoreStringValue_Parms
{
	struct FString InDataStoreMarkup;
	struct FString InStringValue;
	void* OwnerScene;
	void* OwnerPlayer;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct UUIRoot_execSetDataStoreFieldValue_Parms
{
	struct FString InDataStoreMarkup;
	struct FUIProviderFieldValue InFieldValue; // CPF_OutParm
	void* OwnerScene;
	void* OwnerPlayer;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UUIRoot_execStaticResolveDataStore_Parms
{
	struct FName DataStoreTag;
	void* OwnerScene;
	void* InPlayerOwner;
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UUIRoot_execGetPrimitiveTransform_Parms
{
	void* Widget;
	unsigned long bIncludeAnchorPosition : 1;
	unsigned long bIncudeRotation : 1;
	unsigned long bIncludeScale : 1;
	struct FMatrix ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UUIRoot_execSetMouseCaptureOverride_Parms
{
	unsigned long bCaptureMouse : 1;
};// FUNC_Final FUNC_Native

struct UUIRoot_execGetCursorSize_Parms
{
	float CursorXL; // CPF_OutParm
	float CursorYL; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UUIRoot_execGetCursorPosition_Parms
{
	int CursorX; // CPF_OutParm
	int CursorY; // CPF_OutParm
	void* Scene;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UUIRoot_execGetFaceOrientation_Parms
{
	unsigned char Face;
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UUIRoot_execGetSceneClient_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UUIRoot_execGetCurrentUIController_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UUIRoot_execIsEditor_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct UUIRoot_execIsConsole_Parms
{
	unsigned char ConsoleType;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct UUIRoot_execGetInputPlatformType_Parms
{
	void* OwningPlayer;
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

// (0x3C - 0x3C)
class UUIRoot : public UObject
{
public:

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.UIRoot" );

		return ClassPointer;
	};

public:
	void GetOnlinePlayerInterfaceEx ()
	{
		static UFunction* pfnGetOnlinePlayerInterfaceEx = NULL;

		if ( !pfnGetOnlinePlayerInterfaceEx )
			pfnGetOnlinePlayerInterfaceEx = UObject::FindObject< UFunction >( "Function Engine.UIRoot.GetOnlinePlayerInterfaceEx" );

		UUIRoot_execGetOnlinePlayerInterfaceEx_Parms GetOnlinePlayerInterfaceEx_Parms;

		this->ProcessEvent( pfnGetOnlinePlayerInterfaceEx, &GetOnlinePlayerInterfaceEx_Parms, NULL );
	};

	void GetOnlinePlayerInterface ()
	{
		static UFunction* pfnGetOnlinePlayerInterface = NULL;

		if ( !pfnGetOnlinePlayerInterface )
			pfnGetOnlinePlayerInterface = UObject::FindObject< UFunction >( "Function Engine.UIRoot.GetOnlinePlayerInterface" );

		UUIRoot_execGetOnlinePlayerInterface_Parms GetOnlinePlayerInterface_Parms;

		this->ProcessEvent( pfnGetOnlinePlayerInterface, &GetOnlinePlayerInterface_Parms, NULL );
	};

	void GetOnlineGameInterface ()
	{
		static UFunction* pfnGetOnlineGameInterface = NULL;

		if ( !pfnGetOnlineGameInterface )
			pfnGetOnlineGameInterface = UObject::FindObject< UFunction >( "Function Engine.UIRoot.GetOnlineGameInterface" );

		UUIRoot_execGetOnlineGameInterface_Parms GetOnlineGameInterface_Parms;

		this->ProcessEvent( pfnGetOnlineGameInterface, &GetOnlineGameInterface_Parms, NULL );
	};

	struct FString ConvertWidgetIDToString ( void* SourceWidget )
	{
		static UFunction* pfnConvertWidgetIDToString = NULL;

		if ( !pfnConvertWidgetIDToString )
			pfnConvertWidgetIDToString = UObject::FindObject< UFunction >( "Function Engine.UIRoot.ConvertWidgetIDToString" );

		UUIRoot_execConvertWidgetIDToString_Parms ConvertWidgetIDToString_Parms;
		ConvertWidgetIDToString_Parms.SourceWidget = SourceWidget;

		this->ProcessEvent( pfnConvertWidgetIDToString, &ConvertWidgetIDToString_Parms, NULL );

		return ConvertWidgetIDToString_Parms.ReturnValue;
	};

	bool GetDataStoreStringValue ( struct FString InDataStoreMarkup, void* OwnerScene/*CPF_OptionalParm*/, void* OwnerPlayer/*CPF_OptionalParm*/, struct FString* OutStringValue )
	{
		static UFunction* pfnGetDataStoreStringValue = NULL;

		if ( !pfnGetDataStoreStringValue )
			pfnGetDataStoreStringValue = UObject::FindObject< UFunction >( "Function Engine.UIRoot.GetDataStoreStringValue" );

		UUIRoot_execGetDataStoreStringValue_Parms GetDataStoreStringValue_Parms;
		memcpy( &GetDataStoreStringValue_Parms.InDataStoreMarkup, &InDataStoreMarkup, 0xC );
		GetDataStoreStringValue_Parms.OwnerScene = OwnerScene;
		GetDataStoreStringValue_Parms.OwnerPlayer = OwnerPlayer;

		this->ProcessEvent( pfnGetDataStoreStringValue, &GetDataStoreStringValue_Parms, NULL );

		if ( OutStringValue )
			memcpy( OutStringValue, &GetDataStoreStringValue_Parms.OutStringValue, 0xC ); // CPF_OutParm

		return GetDataStoreStringValue_Parms.ReturnValue;
	};

	bool GetDataStoreFieldValue ( struct FString InDataStoreMarkup, void* OwnerScene/*CPF_OptionalParm*/, void* OwnerPlayer/*CPF_OptionalParm*/, struct FUIProviderFieldValue* OutFieldValue )
	{
		static UFunction* pfnGetDataStoreFieldValue = NULL;

		if ( !pfnGetDataStoreFieldValue )
			pfnGetDataStoreFieldValue = UObject::FindObject< UFunction >( "Function Engine.UIRoot.GetDataStoreFieldValue" );

		UUIRoot_execGetDataStoreFieldValue_Parms GetDataStoreFieldValue_Parms;
		memcpy( &GetDataStoreFieldValue_Parms.InDataStoreMarkup, &InDataStoreMarkup, 0xC );
		GetDataStoreFieldValue_Parms.OwnerScene = OwnerScene;
		GetDataStoreFieldValue_Parms.OwnerPlayer = OwnerPlayer;

		pfnGetDataStoreFieldValue->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetDataStoreFieldValue, &GetDataStoreFieldValue_Parms, NULL );
		pfnGetDataStoreFieldValue->FunctionFlags |= 0x400;

		if ( OutFieldValue )
			memcpy( OutFieldValue, &GetDataStoreFieldValue_Parms.OutFieldValue, 0x58 ); // CPF_OutParm

		return GetDataStoreFieldValue_Parms.ReturnValue;
	};

	bool SetDataStoreStringValue ( struct FString InDataStoreMarkup, struct FString InStringValue, void* OwnerScene/*CPF_OptionalParm*/, void* OwnerPlayer/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetDataStoreStringValue = NULL;

		if ( !pfnSetDataStoreStringValue )
			pfnSetDataStoreStringValue = UObject::FindObject< UFunction >( "Function Engine.UIRoot.SetDataStoreStringValue" );

		UUIRoot_execSetDataStoreStringValue_Parms SetDataStoreStringValue_Parms;
		memcpy( &SetDataStoreStringValue_Parms.InDataStoreMarkup, &InDataStoreMarkup, 0xC );
		memcpy( &SetDataStoreStringValue_Parms.InStringValue, &InStringValue, 0xC );
		SetDataStoreStringValue_Parms.OwnerScene = OwnerScene;
		SetDataStoreStringValue_Parms.OwnerPlayer = OwnerPlayer;

		this->ProcessEvent( pfnSetDataStoreStringValue, &SetDataStoreStringValue_Parms, NULL );

		return SetDataStoreStringValue_Parms.ReturnValue;
	};

	bool SetDataStoreFieldValue ( struct FString InDataStoreMarkup, void* OwnerScene/*CPF_OptionalParm*/, void* OwnerPlayer/*CPF_OptionalParm*/, struct FUIProviderFieldValue* InFieldValue )
	{
		static UFunction* pfnSetDataStoreFieldValue = NULL;

		if ( !pfnSetDataStoreFieldValue )
			pfnSetDataStoreFieldValue = UObject::FindObject< UFunction >( "Function Engine.UIRoot.SetDataStoreFieldValue" );

		UUIRoot_execSetDataStoreFieldValue_Parms SetDataStoreFieldValue_Parms;
		memcpy( &SetDataStoreFieldValue_Parms.InDataStoreMarkup, &InDataStoreMarkup, 0xC );
		SetDataStoreFieldValue_Parms.OwnerScene = OwnerScene;
		SetDataStoreFieldValue_Parms.OwnerPlayer = OwnerPlayer;

		pfnSetDataStoreFieldValue->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetDataStoreFieldValue, &SetDataStoreFieldValue_Parms, NULL );
		pfnSetDataStoreFieldValue->FunctionFlags |= 0x400;

		if ( InFieldValue )
			memcpy( InFieldValue, &SetDataStoreFieldValue_Parms.InFieldValue, 0x58 ); // CPF_OutParm

		return SetDataStoreFieldValue_Parms.ReturnValue;
	};

	void* StaticResolveDataStore ( struct FName DataStoreTag, void* OwnerScene/*CPF_OptionalParm*/, void* InPlayerOwner/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnStaticResolveDataStore = NULL;

		if ( !pfnStaticResolveDataStore )
			pfnStaticResolveDataStore = UObject::FindObject< UFunction >( "Function Engine.UIRoot.StaticResolveDataStore" );

		UUIRoot_execStaticResolveDataStore_Parms StaticResolveDataStore_Parms;
		memcpy( &StaticResolveDataStore_Parms.DataStoreTag, &DataStoreTag, 0x8 );
		StaticResolveDataStore_Parms.OwnerScene = OwnerScene;
		StaticResolveDataStore_Parms.InPlayerOwner = InPlayerOwner;

		this->ProcessEvent( pfnStaticResolveDataStore, &StaticResolveDataStore_Parms, NULL );

		return StaticResolveDataStore_Parms.ReturnValue;
	};

	struct FMatrix GetPrimitiveTransform ( void* Widget, unsigned long bIncludeAnchorPosition/*CPF_OptionalParm*/, unsigned long bIncudeRotation/*CPF_OptionalParm*/, unsigned long bIncludeScale/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetPrimitiveTransform = NULL;

		if ( !pfnGetPrimitiveTransform )
			pfnGetPrimitiveTransform = UObject::FindObject< UFunction >( "Function Engine.UIRoot.GetPrimitiveTransform" );

		UUIRoot_execGetPrimitiveTransform_Parms GetPrimitiveTransform_Parms;
		GetPrimitiveTransform_Parms.Widget = Widget;
		GetPrimitiveTransform_Parms.bIncludeAnchorPosition = bIncludeAnchorPosition;
		GetPrimitiveTransform_Parms.bIncudeRotation = bIncudeRotation;
		GetPrimitiveTransform_Parms.bIncludeScale = bIncludeScale;

		pfnGetPrimitiveTransform->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetPrimitiveTransform, &GetPrimitiveTransform_Parms, NULL );
		pfnGetPrimitiveTransform->FunctionFlags |= 0x400;

		return GetPrimitiveTransform_Parms.ReturnValue;
	};

	void SetMouseCaptureOverride ( unsigned long bCaptureMouse )
	{
		static UFunction* pfnSetMouseCaptureOverride = NULL;

		if ( !pfnSetMouseCaptureOverride )
			pfnSetMouseCaptureOverride = UObject::FindObject< UFunction >( "Function Engine.UIRoot.SetMouseCaptureOverride" );

		UUIRoot_execSetMouseCaptureOverride_Parms SetMouseCaptureOverride_Parms;
		SetMouseCaptureOverride_Parms.bCaptureMouse = bCaptureMouse;

		pfnSetMouseCaptureOverride->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetMouseCaptureOverride, &SetMouseCaptureOverride_Parms, NULL );
		pfnSetMouseCaptureOverride->FunctionFlags |= 0x400;
	};

	bool GetCursorSize ( float* CursorXL, float* CursorYL )
	{
		static UFunction* pfnGetCursorSize = NULL;

		if ( !pfnGetCursorSize )
			pfnGetCursorSize = UObject::FindObject< UFunction >( "Function Engine.UIRoot.GetCursorSize" );

		UUIRoot_execGetCursorSize_Parms GetCursorSize_Parms;

		pfnGetCursorSize->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetCursorSize, &GetCursorSize_Parms, NULL );
		pfnGetCursorSize->FunctionFlags |= 0x400;

		if ( CursorXL )
			*CursorXL = GetCursorSize_Parms.CursorXL; // CPF_OutParm
		if ( CursorYL )
			*CursorYL = GetCursorSize_Parms.CursorYL; // CPF_OutParm

		return GetCursorSize_Parms.ReturnValue;
	};

	bool GetCursorPosition ( void* Scene/*CPF_OptionalParm*/, int* CursorX, int* CursorY )
	{
		static UFunction* pfnGetCursorPosition = NULL;

		if ( !pfnGetCursorPosition )
			pfnGetCursorPosition = UObject::FindObject< UFunction >( "Function Engine.UIRoot.GetCursorPosition" );

		UUIRoot_execGetCursorPosition_Parms GetCursorPosition_Parms;
		GetCursorPosition_Parms.Scene = Scene;

		pfnGetCursorPosition->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetCursorPosition, &GetCursorPosition_Parms, NULL );
		pfnGetCursorPosition->FunctionFlags |= 0x400;

		if ( CursorX )
			*CursorX = GetCursorPosition_Parms.CursorX; // CPF_OutParm
		if ( CursorY )
			*CursorY = GetCursorPosition_Parms.CursorY; // CPF_OutParm

		return GetCursorPosition_Parms.ReturnValue;
	};

	unsigned char GetFaceOrientation ( unsigned char Face )
	{
		static UFunction* pfnGetFaceOrientation = NULL;

		if ( !pfnGetFaceOrientation )
			pfnGetFaceOrientation = UObject::FindObject< UFunction >( "Function Engine.UIRoot.GetFaceOrientation" );

		UUIRoot_execGetFaceOrientation_Parms GetFaceOrientation_Parms;
		GetFaceOrientation_Parms.Face = Face;

		pfnGetFaceOrientation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetFaceOrientation, &GetFaceOrientation_Parms, NULL );
		pfnGetFaceOrientation->FunctionFlags |= 0x400;

		return GetFaceOrientation_Parms.ReturnValue;
	};

	void* GetSceneClient ()
	{
		static UFunction* pfnGetSceneClient = NULL;

		if ( !pfnGetSceneClient )
			pfnGetSceneClient = UObject::FindObject< UFunction >( "Function Engine.UIRoot.GetSceneClient" );

		UUIRoot_execGetSceneClient_Parms GetSceneClient_Parms;

		pfnGetSceneClient->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetSceneClient, &GetSceneClient_Parms, NULL );
		pfnGetSceneClient->FunctionFlags |= 0x400;

		return GetSceneClient_Parms.ReturnValue;
	};

	void* GetCurrentUIController ()
	{
		static UFunction* pfnGetCurrentUIController = NULL;

		if ( !pfnGetCurrentUIController )
			pfnGetCurrentUIController = UObject::FindObject< UFunction >( "Function Engine.UIRoot.GetCurrentUIController" );

		UUIRoot_execGetCurrentUIController_Parms GetCurrentUIController_Parms;

		pfnGetCurrentUIController->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetCurrentUIController, &GetCurrentUIController_Parms, NULL );
		pfnGetCurrentUIController->FunctionFlags |= 0x400;

		return GetCurrentUIController_Parms.ReturnValue;
	};

	bool IsEditor ()
	{
		static UFunction* pfnIsEditor = NULL;

		if ( !pfnIsEditor )
			pfnIsEditor = UObject::FindObject< UFunction >( "Function Engine.UIRoot.IsEditor" );

		UUIRoot_execIsEditor_Parms IsEditor_Parms;

		this->ProcessEvent( pfnIsEditor, &IsEditor_Parms, NULL );

		return IsEditor_Parms.ReturnValue;
	};

	bool IsConsole ( unsigned char ConsoleType/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnIsConsole = NULL;

		if ( !pfnIsConsole )
			pfnIsConsole = UObject::FindObject< UFunction >( "Function Engine.UIRoot.IsConsole" );

		UUIRoot_execIsConsole_Parms IsConsole_Parms;
		IsConsole_Parms.ConsoleType = ConsoleType;

		this->ProcessEvent( pfnIsConsole, &IsConsole_Parms, NULL );

		return IsConsole_Parms.ReturnValue;
	};

	unsigned char GetInputPlatformType ( void* OwningPlayer/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetInputPlatformType = NULL;

		if ( !pfnGetInputPlatformType )
			pfnGetInputPlatformType = UObject::FindObject< UFunction >( "Function Engine.UIRoot.GetInputPlatformType" );

		UUIRoot_execGetInputPlatformType_Parms GetInputPlatformType_Parms;
		GetInputPlatformType_Parms.OwningPlayer = OwningPlayer;

		pfnGetInputPlatformType->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetInputPlatformType, &GetInputPlatformType_Parms, NULL );
		pfnGetInputPlatformType->FunctionFlags |= 0x400;

		return GetInputPlatformType_Parms.ReturnValue;
	};

};

UClass* UUIRoot::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif