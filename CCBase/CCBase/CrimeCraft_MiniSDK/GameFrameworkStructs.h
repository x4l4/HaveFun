/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: GameFrameworkStructs.h
// Date: 06/16/2011 @ 05:19:42.380
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct FRecoilParams
{
	unsigned char                                      X;
	unsigned char                                      Y;
	unsigned char                                      Z;
	unsigned char                                      Padding;
};

struct FRecoilDef
{
	float                                              TimeToGo;
	float                                              TimeDuration;
	struct FVector                                     RotAmplitude;
	struct FVector                                     RotFrequency;
	struct FVector                                     RotSinOffset;
	struct FRecoilParams                               RotParams;
	struct FRotator                                    RotOffset;
	struct FVector                                     LocAmplitude;
	struct FVector                                     LocFrequency;
	struct FVector                                     LocSinOffset;
	struct FRecoilParams                               LocParams;
	struct FVector                                     LocOffset;
};

struct FPropertyInfo
{
	struct FName                                       PropertyName;
	unsigned long                                      bModifyProperty : 1;
	struct FString                                     PropertyValue;
};

#ifdef _MSC_VER
#pragma pack( pop )
#endif