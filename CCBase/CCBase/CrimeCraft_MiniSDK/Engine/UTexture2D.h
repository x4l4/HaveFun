/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UTexture2D.h
// Date: 06/16/2011 @ 05:19:38.928
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct UTexture2D_execCreate_Parms
{
	int InSizeX;
	int InSizeY;
	unsigned char InFormat;
	class UTexture2D* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UTexture2D_execSetForceMipLevelsToBeResident_Parms
{
	float Seconds;
};// FUNC_Final FUNC_Native

// (0xC4 - 0x120)
class UTexture2D : public UTexture
{
public:
	struct FIndirectArray_Mirror                       Mips;                                        // 0x00C4 (0x000C)
	int                                                SizeX;                                       // 0x00D0 (0x0004)
	int                                                SizeY;                                       // 0x00D4 (0x0004)
	unsigned char                                      Format;                                      // 0x00D8 (0x0001)
	unsigned char                                      AddressX;                                    // 0x00D9 (0x0001)
	unsigned char                                      AddressY;                                    // 0x00DA (0x0001)
	unsigned long                                      bIsStreamable : 1;                           // 0x00DC (0x0004) [0x00000001]
	unsigned long                                      bHasCancelationPending : 1;                  // 0x00DC (0x0004) [0x00000002]
	unsigned long                                      bHasBeenLoadedFromPersistentArchive : 1;     // 0x00DC (0x0004) [0x00000004]
	unsigned long                                      bForceMiplevelsToBeResident : 1;             // 0x00DC (0x0004) [0x00000008]
	unsigned long                                      bGlobalForceMipLevelsToBeResident : 1;       // 0x00DC (0x0004) [0x00000010]
	float                                              ForceMipLevelsToBeResidentTimestamp;         // 0x00E0 (0x0004)
	struct FName                                       TextureFileCacheName;                        // 0x00E4 (0x0008)
	struct FGuid                                       TextureFileCacheGuid;                        // 0x00EC (0x0010)
	int                                                RequestedMips;                               // 0x00FC (0x0004)
	int                                                ResidentMips;                                // 0x0100 (0x0004)
	struct FThreadSafeCounter                          PendingMipChangeRequestStatus;               // 0x0104 (0x0004)
	struct FTextureLinkedListMirror                    StreamableTexturesLink;                      // 0x0108 (0x000C)
	int                                                MipTailBaseIdx;                              // 0x0114 (0x0004)
	struct FPointer                                    ResourceMem;                                 // 0x0118 (0x0004)
	int                                                FirstResourceMemMip;                         // 0x011C (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Texture2D" );

		return ClassPointer;
	};

public:
	class UTexture2D* Create ( int InSizeX, int InSizeY, unsigned char InFormat/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnCreate = NULL;

		if ( !pfnCreate )
			pfnCreate = UObject::FindObject< UFunction >( "Function Engine.Texture2D.Create" );

		UTexture2D_execCreate_Parms Create_Parms;
		Create_Parms.InSizeX = InSizeX;
		Create_Parms.InSizeY = InSizeY;
		Create_Parms.InFormat = InFormat;

		pfnCreate->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCreate, &Create_Parms, NULL );
		pfnCreate->FunctionFlags |= 0x400;

		return Create_Parms.ReturnValue;
	};

	void SetForceMipLevelsToBeResident ( float Seconds )
	{
		static UFunction* pfnSetForceMipLevelsToBeResident = NULL;

		if ( !pfnSetForceMipLevelsToBeResident )
			pfnSetForceMipLevelsToBeResident = UObject::FindObject< UFunction >( "Function Engine.Texture2D.SetForceMipLevelsToBeResident" );

		UTexture2D_execSetForceMipLevelsToBeResident_Parms SetForceMipLevelsToBeResident_Parms;
		SetForceMipLevelsToBeResident_Parms.Seconds = Seconds;

		pfnSetForceMipLevelsToBeResident->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetForceMipLevelsToBeResident, &SetForceMipLevelsToBeResident_Parms, NULL );
		pfnSetForceMipLevelsToBeResident->FunctionFlags |= 0x400;
	};

};

UClass* UTexture2D::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif