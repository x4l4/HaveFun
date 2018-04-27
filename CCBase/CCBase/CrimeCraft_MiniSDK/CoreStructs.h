/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: CoreStructs.h
// Date: 06/16/2011 @ 05:19:42.158
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct FDefault__Struct
{
};

struct FDefault__ScriptStruct
{
};

struct FRotator
{
	int                                                Pitch;
	int                                                Yaw;
	int                                                Roll;
};

struct FVector
{
    FLOAT X, Y, Z;

    FVector() {}

    FVector( FLOAT X, FLOAT Y, FLOAT Z )
    {
        this->X = X;
        this->Y = Y;
        this->Z = Z;
    }

    FVector operator - () { return FVector( -X, -Y, -Z ); }

    FVector operator + ( FVector v ) { return FVector( X + v.X, Y + v.Y, Z + v.Z ); }
    FVector operator - ( FVector v ) { return FVector( X - v.X, Y - v.Y, Z - v.Z ); }
    FVector operator * ( FVector v ) { return FVector( X * v.X, Y * v.Y, Z * v.Z ); }
    FVector operator / ( FVector v ) { return FVector( X / v.X, Y / v.Y, Z / v.Z ); }

    FVector operator = ( FVector v )
    {
        this->X = v.X;
        this->Y = v.Y;
        this->Z = v.Z;

        return *this;
    }

    FVector operator += ( FVector v )
    {
        this->X += v.X;
        this->Y += v.Y;
        this->Z += v.Z;

        return *this;
    }

    FVector operator -= ( FVector v )
    {
        this->X -= v.X;
        this->Y -= v.Y;
        this->Z -= v.Z;

        return *this;
    }

    FVector operator /= ( FVector v )
    {
        this->X /= v.X;
        this->Y /= v.Y;
        this->Z /= v.Z;

        return *this;
    }

    FVector operator *= ( FVector v )
    {
        this->X *= v.X;
        this->Y *= v.Y;
        this->Z *= v.Z;

        return *this;
    }

    FVector operator + ( FLOAT f ) { return FVector( X + f, Y + f, Z + f ); }
    FVector operator - ( FLOAT f ) { return FVector( X - f, Y - f, Z - f ); }
    FVector operator * ( FLOAT f ) { return FVector( X * f, Y * f, Z * f ); }
    FVector operator / ( FLOAT f ) { return FVector( X / f, Y / f, Z / f ); }

    FVector operator = ( FLOAT f )
    {
        this->X = f;
        this->Y = f;
        this->Z = f;

        return *this;
    }

    FVector operator += ( FLOAT f )
    {
        this->X += f;
        this->Y += f;
        this->Z += f;

        return *this;
    }

    FVector operator -= ( FLOAT f )
    {
        this->X -= f;
        this->Y -= f;
        this->Z -= f;

        return *this;
    }

    FVector operator /= ( FLOAT f )
    {
        this->X /= f;
        this->Y /= f;
        this->Z /= f;

        return *this;
    }

    FVector operator *= ( FLOAT f )
    {
        this->X *= f;
        this->Y *= f;
        this->Z *= f;

        return *this;
    }

    BOOL operator == ( FVector v ) { return ( ( X == v.X ) && ( Y == v.Y ) && ( Z == v.Z ) ); }
    BOOL operator != ( FVector v ) { return ( ( X != v.X ) || ( Y != v.Y ) || ( Z != v.Z ) ); }

    FLOAT operator [] ( INT i )
    {
        if( i == 0 )
            return X;
        else if( i == 1 )
            return Y;
        else 
            return Z;
    }

    FLOAT Length() { return sqrtf( X * X + Y * Y + Z * Z ); }
};

FLOAT VectorDotProduct( FVector* pV1, FVector* pV2 )
{
    return ( ( pV1->X * pV2->X ) + ( pV1->Y * pV2->Y ) + ( pV1->Z * pV2->Z ) );
}

struct FPlane : FVector
{
	float                                              W;
};

struct FGuid
{
	int                                                A;
	int                                                B;
	int                                                C;
	int                                                D;
};

struct FVector2D
{
	float                                              X;
	float                                              Y;
};

struct FVector4
{
	float                                              X;
	float                                              Y;
	float                                              Z;
	float                                              W;
};

struct FLinearColor
{
	float                                              R;
	float                                              G;
	float                                              B;
	float                                              A;
};


struct FColor
{
	unsigned char                                      B;
	unsigned char                                      G;
	unsigned char                                      R;
	unsigned char                                      A;
};

struct FQuat
{
	float                                              X;
	float                                              Y;
	float                                              Z;
	float                                              W;
};


struct FMatrix
{
	struct FPlane                                      XPlane;
	struct FPlane                                      YPlane;
	struct FPlane                                      ZPlane;
	struct FPlane                                      WPlane;
};

struct FBoxSphereBounds
{
	struct FVector                                     Origin;
	struct FVector                                     BoxExtent;
	float                                              SphereRadius;
};

struct FTwoVectors
{
	struct FVector                                     v1;
	struct FVector                                     v2;
};

struct FPointer
{
	int                                                Dummy;
};

struct FOctreeElementId
{
	struct FPointer                                    Node;
	int                                                ElementIndex;
};

struct FRenderCommandFence
{
	int                                                NumPendingFences;
};

struct FRawDistribution
{
	unsigned char                                      Type;
	unsigned char                                      Op;
	unsigned char                                      LookupTableNumElements;
	unsigned char                                      LookupTableChunkSize;
	TArray< float >                                    LookupTable;
	float                                              LookupTableTimeScale;
	float                                              LookupTableStartTime;
};

struct FInterpCurvePointQuat
{
	float                                              InVal;
	struct FQuat                                       OutVal;
	struct FQuat                                       ArriveTangent;
	struct FQuat                                       LeaveTangent;
	unsigned char                                      InterpMode;
};

struct FInterpCurveQuat
{
	TArray< struct FInterpCurvePointQuat >             Points;
	unsigned char                                      InterpMethod;
};

struct FInterpCurvePointTwoVectors
{
	float                                              InVal;
	struct FTwoVectors                                 OutVal;
	struct FTwoVectors                                 ArriveTangent;
	struct FTwoVectors                                 LeaveTangent;
	unsigned char                                      InterpMode;
};

struct FInterpCurveTwoVectors
{
	TArray< struct FInterpCurvePointTwoVectors >       Points;
	unsigned char                                      InterpMethod;
};

struct FCylinder
{
	float                                              Radius;
	float                                              Height;
};

struct FInterpCurvePointVector
{
	float                                              InVal;
	struct FVector                                     OutVal;
	struct FVector                                     ArriveTangent;
	struct FVector                                     LeaveTangent;
	unsigned char                                      InterpMode;
};

struct FInterpCurveVector
{
	TArray< struct FInterpCurvePointVector >           Points;
	unsigned char                                      InterpMethod;
};

struct FInterpCurvePointVector2D
{
	float                                              InVal;
	struct FVector2D                                   OutVal;
	struct FVector2D                                   ArriveTangent;
	struct FVector2D                                   LeaveTangent;
	unsigned char                                      InterpMode;
};

struct FInterpCurveVector2D
{
	TArray< struct FInterpCurvePointVector2D >         Points;
	unsigned char                                      InterpMethod;
};

struct FInterpCurvePointFloat
{
	float                                              InVal;
	float                                              OutVal;
	float                                              ArriveTangent;
	float                                              LeaveTangent;
	unsigned char                                      InterpMode;
};

struct FInterpCurveFloat
{
	TArray< struct FInterpCurvePointFloat >            Points;
	unsigned char                                      InterpMethod;
};

struct FBox
{
	struct FVector                                     Min;
	struct FVector                                     Max;
	unsigned char                                      IsValid;
};

struct FTPOV
{
	struct FVector                                     Location;
	struct FRotator                                    Rotation;
	float                                              FOV;
};

struct FSHVector
{
	float                                              V[ 9 ];
	float                                              Padding[ 3 ];
};

struct FSHVectorRGB
{
	struct FSHVector                                   R;
	struct FSHVector                                   G;
	struct FSHVector                                   B;
};

struct FIntPoint
{
	int                                                X;
	int                                                Y;
};

struct FIndirectArray_Mirror
{
	struct FPointer                                    Data;
	int                                                ArrayNum;
	int                                                ArrayMax;
};

struct FRenderCommandFence_Mirror
{
	int                                                NumPendingFences;
};

struct FUntypedBulkData_Mirror
{
	struct FPointer                                    VfTable;
	int                                                BulkDataFlags;
	int                                                ElementCount;
	int                                                BulkDataOffsetInFile;
	int                                                BulkDataSizeOnDisk;
	int                                                SavedBulkDataFlags;
	int                                                SavedElementCount;
	int                                                SavedBulkDataOffsetInFile;
	int                                                SavedBulkDataSizeOnDisk;
	struct FPointer                                    BulkData;
	int                                                LockStatus;
	struct FPointer                                    AttachedAr;
	int                                                bShouldFreeOnEmpty;
};

struct FBitArray_Mirror
{
	struct FPointer                                    IndirectData;
	int                                                InlineData[ 4 ];
	int                                                NumBits;
	int                                                MaxBits;
};

struct FSparseArray_Mirror
{
	TArray< int >                                      Elements;
	struct FBitArray_Mirror                            AllocationFlags;
	int                                                FirstFreeIndex;
	int                                                NumFreeIndices;
};

struct FSet_Mirror
{
	struct FSparseArray_Mirror                         Elements;
	struct FPointer                                    Hash;
	int                                                InlineHash;
	int                                                HashSize;
};

struct FMultiMap_Mirror
{
	struct FSet_Mirror                                 Pairs;
};

struct FLookupMap_Mirror : FMultiMap_Mirror
{
	TArray< int >                                      UniqueElements;
};

struct FMap_Mirror
{
	struct FSet_Mirror                                 Pairs;
};

struct FThreadSafeCounter
{
	int                                                Value;
};

struct FDouble
{
	int                                                A;
	int                                                B;
};

struct FQWord
{
	int                                                A;
	int                                                B;
};

struct FRawDistributionFloat : FRawDistribution
{
	void*                                              Distribution;
};

struct FRawDistributionVector : FRawDistribution
{
	void*                                              Distribution;
};

struct FSSOCallerInfo
{
	int                                                TheControllerID;
	unsigned long                                      bServer : 1;
};

#ifdef _MSC_VER
#pragma pack( pop )
#endif