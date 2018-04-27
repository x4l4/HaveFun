/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ABrush.h
// Date: 06/16/2011 @ 05:19:39.803
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum ECsgOper
{
	CSG_Active = 0,
	CSG_Add = 1,
	CSG_Subtract = 2,
	CSG_Intersect = 3,
	CSG_Deintersect = 4,
	CSG_MAX = 5
};

// (0x1BC - 0x1E0)
class ABrush : public AActor
{
public:
	unsigned char                                      CsgOper;                                     // 0x01BC (0x0001)
	struct FColor                                      BrushColor;                                  // 0x01C0 (0x0004)
	int                                                PolyFlags;                                   // 0x01C4 (0x0004)
	unsigned long                                      bColored : 1;                                // 0x01C8 (0x0004) [0x00000001]
	unsigned long                                      bSolidWhenSelected : 1;                      // 0x01C8 (0x0004) [0x00000002]
	void*                                              Brush;                                       // 0x01CC (0x0004)
	void*                                              BrushComponent;                              // 0x01D0 (0x0004)
	TArray< struct FGeomSelection >                    SavedSelections;                             // 0x01D4 (0x000C)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Brush" );

		return ClassPointer;
	};

public:
};

UClass* ABrush::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif