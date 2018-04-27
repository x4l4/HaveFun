#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

//Class Engine.Camera
struct ACamera_execGetViewTarget_Parms
{
public:
    class AActor*                                                                ReturnValue;                                                                 // 0x0004 (0x0000) ReturnParam
}; //size=0x4

//Class Engine.Camera
struct ACamera_execDisplayDebug_Parms
{
public:
    class AHUD*                                                                  HUD;                                                                         // 0x0004 (0x0000)
    float                                                                        out_YL;                                                                      // 0x0004 (0x0004) OutParam
    float                                                                        out_YPos;                                                                    // 0x0004 (0x0008) OutParam
    struct FVector                                                               EyesLoc;                                                                     // 0x000C (0x000C)
    struct FRotator                                                              EyesRot;                                                                     // 0x000C (0x0018)
    class UCanvas*                                                               Canvas;                                                                      // 0x0004 (0x0024)
}; //size=0x28

//Class Engine.Camera
struct ACamera_execApplyCameraModifiers_Parms
{
public:
    float                                                                        DeltaTime;                                                                   // 0x0004 (0x0000)
    struct FTPOV                                                                 OutPOV;                                                                      // 0x001C (0x0004) OutParam
}; //size=0x20

//Class Engine.Camera
struct ACamera_execSetViewTarget_Parms
{
public:
    class AActor*                                                                NewViewTarget;                                                               // 0x0004 (0x0000)
    struct FViewTargetTransitionParams                                           TransitionParams;                                                            // 0x000C (0x0004) OptionalParam
    unsigned long                                                                ReturnValue : 1;                                                             // 0x0004 (0x0010) ReturnParam
}; //size=0x14

//Class Engine.Camera
struct ACamera_execUpdateCamera_Parms
{
public:
    float                                                                        DeltaTime;                                                                   // 0x0004 (0x0000)
}; //size=0x4

//Class Engine.Camera
struct ACamera_execSetDesiredColorScale_Parms
{
public:
    struct FVector                                                               NewColorScale;                                                               // 0x000C (0x0000)
    float                                                                        InterpTime;                                                                  // 0x0004 (0x000C)
}; //size=0x10

//Class Engine.Camera
struct ACamera_execSetFOV_Parms
{
public:
    float                                                                        NewFOV;                                                                      // 0x0004 (0x0000)
}; //size=0x4

//Class Engine.Camera
struct ACamera_execGetFOVAngle_Parms
{
public:
    float                                                                        ReturnValue;                                                                 // 0x0004 (0x0000) ReturnParam
}; //size=0x4

//Class Engine.Camera
class ACamera : public AActor
{
public:
    // objects   = 41
    // functions = 8
    // children  = 33
    class APlayerController*                                                     PCOwner;                                                                     // 0x0004 (0x023C) 3
    FName                                                                        CameraStyle;                                                                 // 0x0008 (0x0240) 4
    float                                                                        DefaultFOV;                                                                  // 0x0004 (0x0248) 5
    unsigned long                                                                bLockedFOV : 1;                                                              // 0x0004 (0x024C) 6
    unsigned long                                                                bConstrainAspectRatio : 1;                                                   // 0x0004 (0x024C) 7
    unsigned long                                                                bEnableFading : 1;                                                           // 0x0004 (0x024C) 8
    unsigned long                                                                bCamOverridePostProcess : 1;                                                 // 0x0004 (0x024C) 9
    unsigned long                                                                bEnableColorScaling : 1;                                                     // 0x0004 (0x024C) 10
    unsigned long                                                                bEnableColorScaleInterp : 1;                                                 // 0x0004 (0x024C) 11
    float                                                                        LockedFOV;                                                                   // 0x0004 (0x0250) 12
    float                                                                        ConstrainedAspectRatio;                                                      // 0x0004 (0x0254) 13
    float                                                                        DefaultAspectRatio;                                                          // 0x0004 (0x0258) 14
    struct FColor                                                                FadeColor;                                                                   // 0x0004 (0x025C) 15
    float                                                                        FadeAmount;                                                                  // 0x0004 (0x0260) 16
    struct FPostProcessSettings                                                  CamPostProcessSettings;                                                      // 0x00CC (0x0264) 17
    struct FVector                                                               ColorScale;                                                                  // 0x000C (0x0330) 18
    struct FVector                                                               DesiredColorScale;                                                           // 0x000C (0x033C) 19
    struct FVector                                                               OriginalColorScale;                                                          // 0x000C (0x0348) 20
    float                                                                        ColorScaleInterpDuration;                                                    // 0x0004 (0x0354) 21
    float                                                                        ColorScaleInterpStartTime;                                                   // 0x0004 (0x0358) 22
    TArray< class AActor* >                                                      HiddenActors;                                                                // 0x000C (0x035C) 23
    struct FTCameraCache                                                         CameraCache;                                                                 // 0x0020 (0x0368) 24
    struct FTViewTarget                                                          ViewTarget;                                                                  // 0x002C (0x0388) 25
    struct FTViewTarget                                                          PendingViewTarget;                                                           // 0x002C (0x03B4) 26
    float                                                                        BlendTimeToGo;                                                               // 0x0004 (0x03E0) 27
    struct FViewTargetTransitionParams                                           BlendParams;                                                                 // 0x000C (0x03E4) 28
    TArray< class UCameraModifier* >                                             ModifierList;                                                                // 0x000C (0x03F0) 29
    float                                                                        FreeCamDistance;                                                             // 0x0004 (0x03FC) 30
    struct FVector                                                               FreeCamOffset;                                                               // 0x000C (0x0400) 31

private:
    static UClass* ClassPointer;

public:
    static UClass* StaticClass ()
    {
        if ( !ClassPointer )
            ClassPointer = UObject::FindClass( "Class Engine.Camera" );

        return ClassPointer;
    };

public:
    float GetFOVAngle ()
    {
        static UFunction* pfnGetFOVAngle = NULL;

        if ( !pfnGetFOVAngle )
            pfnGetFOVAngle = UObject::FindObject< UFunction >( "Function Engine.Camera.GetFOVAngle" );

        ACamera_execGetFOVAngle_Parms GetFOVAngle_Parms;

        this->ProcessEvent( pfnGetFOVAngle, &GetFOVAngle_Parms, NULL );

        return GetFOVAngle_Parms.ReturnValue;
    };

    void SetFOV ( float NewFOV )
    {
        static UFunction* pfnSetFOV = NULL;

        if ( !pfnSetFOV )
            pfnSetFOV = UObject::FindObject< UFunction >( "Function Engine.Camera.SetFOV" );

        ACamera_execSetFOV_Parms SetFOV_Parms;
        SetFOV_Parms.NewFOV = NewFOV;

        this->ProcessEvent( pfnSetFOV, &SetFOV_Parms, NULL );
    };

    void GetViewTarget( class AActor* ReturnValue )
    {
        static UFunction* pfnGetViewTarget = NULL;

        if ( !pfnGetViewTarget )
            pfnGetViewTarget = UObject::FindObject< UFunction >( "Function Engine.Camera.GetViewTarget" );

        ACamera_execGetViewTarget_Parms GetViewTarget_Parms;
        GetViewTarget_Parms.ReturnValue = ReturnValue;

        this->ProcessEvent( pfnGetViewTarget, &GetViewTarget_Parms, NULL );
	};

}; //Expected=0x40C, Actual=0x40C, Inherited=0x23C 

UClass* ACamera::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif