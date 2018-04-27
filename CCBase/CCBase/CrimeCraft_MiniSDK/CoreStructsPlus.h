/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: APB Reloaded
// File: CoreStructs.h
// Date: 06/16/2011 @ 03:01:58.864
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


/*struct FRotator
{
	int                                                Pitch;
	int                                                Yaw;
	int                                                Roll;
};*/

/*struct FVector
{
	float                                              X;
	float                                              Y;
	float                                              Z;
};*/

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

struct FVector2D
{
    FLOAT X, Y;

    FVector2D() {}

    FVector2D( FLOAT X, FLOAT Y )
    {
        this->X = X;
        this->Y = Y;
    }

    FVector2D operator - () { return FVector2D( -X, -Y ); }

    FVector2D operator + ( FVector2D v ) { return FVector2D( X + v.X, Y + v.Y ); }
    FVector2D operator - ( FVector2D v ) { return FVector2D( X - v.X, Y - v.Y ); }
    FVector2D operator * ( FVector2D v ) { return FVector2D( X * v.X, Y * v.Y ); }
    FVector2D operator / ( FVector2D v ) { return FVector2D( X / v.X, Y / v.Y ); }

    FVector2D operator = ( FVector2D v )
    {
        this->X = v.X;
        this->Y = v.Y;

        return *this;
    }

    FVector2D operator += ( FVector2D v )
    {
        this->X += v.X;
        this->Y += v.Y;

        return *this;
    }

    FVector2D operator -= ( FVector2D v )
    {
        this->X -= v.X;
        this->Y -= v.Y;

        return *this;
    }

    FVector2D operator /= ( FVector2D v )
    {
        this->X /= v.X;
        this->Y /= v.Y;

        return *this;
    }

    FVector2D operator *= ( FVector2D v )
    {
        this->X *= v.X;
        this->Y *= v.Y;

        return *this;
    }

    FVector2D operator + ( FLOAT f ) { return FVector2D( X + f, Y + f ); }
    FVector2D operator - ( FLOAT f ) { return FVector2D( X - f, Y - f ); }
    FVector2D operator * ( FLOAT f ) { return FVector2D( X * f, Y * f ); }
    FVector2D operator / ( FLOAT f ) { return FVector2D( X / f, Y / f ); }

    FVector2D operator = ( FLOAT f )
    {
        this->X = f;
        this->Y = f;

        return *this;
    }

    FVector2D operator += ( FLOAT f )
    {
        this->X += f;
        this->Y += f;

        return *this;
    }

    FVector2D operator -= ( FLOAT f )
    {
        this->X -= f;
        this->Y -= f;

        return *this;
    }

    FVector2D operator /= ( FLOAT f )
    {
        this->X /= f;
        this->Y /= f;

        return *this;
    }

    FVector2D operator *= ( FLOAT f )
    {
        this->X *= f;
        this->Y *= f;

        return *this;
    }

    BOOL operator == ( FVector2D v ) { return ( ( X == v.X ) && ( Y == v.Y ) ); }
    BOOL operator != ( FVector2D v ) { return ( ( X != v.X ) || ( Y != v.Y ) ); }

    FLOAT operator [] ( INT i )
    {
        if( i == 0 )
            return X;
        else 
            return Y; 
    }

    FLOAT Length() { return sqrtf( X * X + Y * Y ); }
};

FLOAT Vector2DDotProduct( FVector2D* pV1, FVector2D* pV2 )
{
    return ( ( pV1->X * pV2->X ) + ( pV1->Y * pV2->Y ) );
}

FLOAT Vector2DLength( FVector2D* pV )
{
    return pV->Length();
}

FVector2D* Vector2DNormalize( FVector2D* pOut, FVector2D* pV )
{
    FLOAT Len = pV->Length(); 

    *pOut /= Len; 

    return pOut;
}

FVector2D* Vector2DSubtract( FVector2D* pOut, FVector2D* pV1, FVector2D* pV2 )
{
    *pOut = *pV1 - *pV2; 

    return pOut;
}

FVector2D* Vector2DScale( FVector2D* pOut, FVector2D* pV, FLOAT Scale )
{
    pOut->X = pV->X * Scale;
    pOut->Y = pV->Y * Scale;

    return pOut;
}

FVector2D* Vector2DMaximize( FVector2D* pOut, FVector2D* pV1, FVector2D* pV2 )
{
    pOut->X = pV1->X > pV2->X ? pV1->X : pV2->X;
    pOut->Y = pV1->Y > pV2->Y ? pV1->Y : pV2->Y;

    return pOut;
}

FVector2D* Vector2DMinimize( FVector2D* pOut, FVector2D* pV1, FVector2D* pV2 )
{
    pOut->X = pV1->X < pV2->X ? pV1->X : pV2->X;
    pOut->Y = pV1->Y < pV2->Y ? pV1->Y : pV2->Y;

    return pOut;
}

FVector2D* Vector2DAdd( FVector2D* pOut, FVector2D* pV1, FVector2D* pV2 )
{
    *pOut = *pV1 + *pV2;

    return pOut;
}

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

FLOAT VectorLength( FVector* pV )
{
    return pV->Length();
}

FVector* VectorNormalize( FVector* pOut, FVector* pV )
{
    FLOAT Len = pV->Length(); 

    *pOut /= Len; 

    return pOut;
}

FVector* VectorScale( FVector* pOut, FVector* pV, FLOAT Scale )
{
    pOut->X = pV->X * Scale;
    pOut->Y = pV->Y * Scale;
    pOut->Z = pV->Z * Scale;

    return pOut;
}

FVector* VectorSubtract( FVector* pOut, FVector* pV1, FVector* pV2 )
{
    *pOut = *pV1 - *pV2; 

    return pOut;
}

FVector* VectorMaximize( FVector* pOut, FVector* pV1, FVector* pV2 )
{
    pOut->X = pV1->X > pV2->X ? pV1->X : pV2->X;
    pOut->Y = pV1->Y > pV2->Y ? pV1->Y : pV2->Y;
    pOut->Z = pV1->Z > pV2->Z ? pV1->Z : pV2->Z;

    return pOut;
}

FVector* VectorMinimize( FVector* pOut, FVector* pV1, FVector* pV2 )
{
    pOut->X = pV1->X < pV2->X ? pV1->X : pV2->X;
    pOut->Y = pV1->Y < pV2->Y ? pV1->Y : pV2->Y;
    pOut->Z = pV1->Z < pV2->Z ? pV1->Z : pV2->Z;

    return pOut;
}

FVector* VectorAdd( FVector* pOut, FVector* pV1, FVector* pV2 )
{
    *pOut = *pV1 + *pV2;

    return pOut;
}

struct FVector4
{
    FLOAT X, Y, Z, W;

    FVector4() {}

    FVector4( FLOAT X, FLOAT Y, FLOAT Z, FLOAT W )
    {
        this->X = X;
        this->Y = Y;
        this->Z = Z;
        this->W = W;
    }

    FVector4 operator - () { return FVector4( -X, -Y, -Z, -W ); }

    FVector4 operator + ( FVector4 v ) { return FVector4( X + v.X, Y + v.Y, Z + v.Z, W + v.W ); } 
    FVector4 operator - ( FVector4 v ) { return FVector4( X - v.X, Y - v.Y, Z - v.Z, W - v.W ); }
    FVector4 operator * ( FVector4 v ) { return FVector4( X * v.X, Y * v.Y, Z * v.Z, W * v.W ); }
    FVector4 operator / ( FVector4 v ) { return FVector4( X / v.X, Y / v.Y, Z / v.Z, W / v.W ); }

    FVector4 operator = ( FVector4 v )    
    {
        this->X = v.X;
        this->Y = v.Y;
        this->Z = v.Z;
        this->W = v.W;

        return *this;
    }

    FVector4 operator += ( FVector4 v )
    {
        this->X += v.X;
        this->Y += v.Y;
        this->Z += v.Z;
        this->W += v.W;

        return *this;
    }

    FVector4 operator -= ( FVector4 v )
    {
        this->X -= v.X;
        this->Y -= v.Y;
        this->Z -= v.Z;
        this->W -= v.W;

        return *this;
    }

    FVector4 operator /= ( FVector4 v )
    {
        this->X /= v.X;
        this->Y /= v.Y;
        this->Z /= v.Z;
        this->W /= v.W;

        return *this;
    }

    FVector4 operator *= ( FVector4 v )
    {
        this->X *= v.X;
        this->Y *= v.Y;
        this->Z *= v.Z;
        this->W *= v.W;

        return *this;
    }

    FVector4 operator + ( FLOAT f ) { return FVector4( X + f, Y + f, Z + f, W + f ); }
    FVector4 operator - ( FLOAT f ) { return FVector4( X - f, Y - f, Z - f, W - f ); }
    FVector4 operator * ( FLOAT f ) { return FVector4( X * f, Y * f, Z * f, W * f ); }
    FVector4 operator / ( FLOAT f ) { return FVector4( X / f, Y / f, Z / f, W / f ); }

    FVector4 operator = ( FLOAT f )
    {
        this->X = f;
        this->Y = f;
        this->Z = f;
        this->W = f;

        return *this;
    }

    FVector4 operator += ( FLOAT f )
    {
        this->X += f;
        this->Y += f;
        this->Z += f;
        this->W += f;

        return *this;
    }

    FVector4 operator -= ( FLOAT f )
    {
        this->X -= f;
        this->Y -= f;
        this->Z -= f;
        this->W -= f;

        return *this;
    }

    FVector4 operator /= ( FLOAT f )
    {
        this->X /= f;
        this->Y /= f;
        this->Z /= f;
        this->W /= f;

        return *this;
    }

    FVector4 operator *= ( FLOAT f )
    {
        this->X *= f;
        this->Y *= f;
        this->Z *= f;
        this->W *= f;

        return *this;
    }

    BOOL operator == ( FVector4 v ) { return ( ( X == v.X ) && ( Y == v.Y ) && ( Z == v.Z ) && ( W == v.W ) ); }
    BOOL operator != ( FVector4 v ) { return ( ( X != v.X ) || ( Y != v.Y ) || ( Z != v.Z ) || ( W != v.W ) ); }

    FLOAT operator [] ( INT i )
    {
        if( i == 0 )
            return X;
        else if( i == 1 )
            return Y;
        else if( i == 2 )
            return Z;
        else
            return W;
    }

    FLOAT Length() { return sqrtf( X * X + Y * Y + Z * Z + W * W ); }
};

FLOAT Vector4DotProduct( FVector4* pV1, FVector4* pV2 )
{
    return ( ( pV1->X * pV2->X ) + ( pV1->Y * pV2->Y ) + ( pV1->Z * pV2->Z ) + ( pV1->W * pV2->W ) );
}

FLOAT Vector4Length( FVector4* pV )
{
    return pV->Length();
}

FVector4* Vector4Normalize( FVector4* pOut, FVector4* pV )
{
    FLOAT Len = pV->Length(); 

    *pOut /= Len; 

    return pOut;
}

FVector4* Vector4Scale( FVector4* pOut, FVector* pV, FLOAT Scale )
{
    pOut->X = pV->X * Scale;
    pOut->Y = pV->Y * Scale;
    pOut->Z = pV->Z * Scale;

    return pOut;
}

FVector4* Vector4Subtract( FVector4* pOut, FVector4* pV1, FVector4* pV2 )
{
    *pOut = *pV1 - *pV2; 

    return pOut;
}

FVector4* Vector4Maximize( FVector4* pOut, FVector4* pV1, FVector4* pV2 )
{
    pOut->X = pV1->X > pV2->X ? pV1->X : pV2->X;
    pOut->Y = pV1->Y > pV2->Y ? pV1->Y : pV2->Y;
    pOut->Z = pV1->Z > pV2->Z ? pV1->Z : pV2->Z;

    return pOut;
}

FVector4* Vector4MinimiZe( FVector4* pOut, FVector4* pV1, FVector4* pV2 )
{
    pOut->X = pV1->X < pV2->X ? pV1->X : pV2->X;
    pOut->Y = pV1->Y < pV2->Y ? pV1->Y : pV2->Y;
    pOut->Z = pV1->Z < pV2->Z ? pV1->Z : pV2->Z;

    return pOut;
}

FVector4* Vector4Add( FVector4* pOut, FVector4* pV1, FVector4* pV2 )
{
    *pOut = *pV1 + *pV2;

    return pOut;
}

struct FRotator
{
    INT Pitch, Yaw, Roll;

    FRotator() {}

    FRotator( INT Pitch, INT Yaw, INT Roll )
    {
        this->Pitch = Pitch;
        this->Yaw = Yaw;
        this->Roll = Roll;
    }

    FRotator operator - () { return FRotator( -Pitch, -Yaw, -Roll ); }

    FRotator operator + ( FRotator r ) { return FRotator( Pitch + r.Pitch, Yaw + r.Yaw, Roll + r.Roll ); }
    FRotator operator - ( FRotator r ) { return FRotator( Pitch - r.Pitch, Yaw - r.Yaw, Roll - r.Roll ); }
    FRotator operator * ( FRotator r ) { return FRotator( Pitch * r.Pitch, Yaw * r.Yaw, Roll * r.Roll ); }
    FRotator operator / ( FRotator r ) { return FRotator( Pitch/ r.Pitch, Yaw / r.Yaw, Roll / r.Roll ); }

    FRotator operator = ( FRotator r )
    {
        this->Pitch = r.Pitch;
        this->Yaw = r.Yaw;
        this->Roll = r.Roll;

        return *this;
    }

    FRotator operator += ( FRotator r )
    {
        this->Pitch += r.Pitch;
        this->Yaw += r.Yaw;
        this->Roll += r.Roll;

        return *this;
    }

    FRotator operator -= ( FRotator r )
    {
        this->Pitch -= r.Pitch;
        this->Yaw -= r.Yaw;
        this->Roll -= r.Roll;

        return *this;
    }

    FRotator operator /= ( FRotator r )
    {
        this->Pitch /= r.Pitch;
        this->Yaw /= r.Yaw;
        this->Roll /= r.Roll;

        return *this;
    }

    FRotator operator *= ( FRotator r )
    {
        this->Pitch *= r.Pitch;
        this->Yaw *= r.Yaw;
        this->Roll *= r.Roll;

        return *this;
    }

    FRotator operator + ( FLOAT f ) { return FRotator( Pitch + f, Yaw + f, Roll + f ); }
    FRotator operator - ( FLOAT f ) { return FRotator( Pitch - f, Yaw - f, Roll - f ); }
    FRotator operator * ( FLOAT f ) { return FRotator( Pitch * f, Yaw * f, Roll * f ); }
    FRotator operator / ( FLOAT f ) { return FRotator( Pitch / f, Yaw / f, Roll / f ); }

    FRotator operator = ( FLOAT f )
    {
        this->Pitch = f;
        this->Yaw = f;
        this->Roll = f;

        return *this;
    }

    FRotator operator += ( FLOAT f )
    {
        this->Pitch += f;
        this->Yaw += f;
        this->Roll += f;

        return *this;
    }

    FRotator operator -= ( FLOAT f )
    {
        this->Pitch -= f;
        this->Yaw -= f;
        this->Roll -= f;

        return *this;
    }

    FRotator operator /= ( FLOAT f )
    {
        this->Pitch /= f;
        this->Yaw /= f;
        this->Roll /= f;

        return *this;
    }

    FRotator operator *= ( FLOAT f )
    {
        this->Pitch *= f;
        this->Yaw *= f;
        this->Roll *= f;

        return *this;
    }

    BOOL operator == ( FRotator r ) { return ( ( Pitch == r.Pitch ) && ( Yaw == r.Yaw ) && ( Roll == r.Roll ) ); }
    BOOL operator != ( FRotator r ) { return ( ( Pitch != r.Pitch ) || ( Yaw != r.Yaw ) || ( Roll != r.Roll ) ); }

    FLOAT operator [] ( INT i )
    {
        if( i == 0 )
            return Pitch;
        else if( i == 1 )
            return Yaw;
        else 
            return Roll;
    }
};

struct FPlane : FVector
{
	float                                              W;
};

/*struct FGuid
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
*/

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

struct FFloat16
{
	unsigned char                                      encoding[ 2 ];
};

struct FVector2DHalf
{
	struct FFloat16                                    X;
	struct FFloat16                                    Y;
};

struct FStReplicatedArray
{
	int                                                nVersion;
	class UClass*                                      ElementsClass;
	TArray< class UObject* >                           aElements;
};

struct FsAPBCollision
{
	int                                                bits0;
	int                                                bits1;
	int                                                bits2;
	int                                                bits3;
	unsigned char                                      category;
};

struct FEnumeratedName
{
	struct FName                                       MetaType;
	struct FName                                       Value;
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

struct FPointer
{
	int                                                Dummy;
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
	struct FPointer                                    LockOwner;
};

struct FTextureMipBulkData_Mirror : FUntypedBulkData_Mirror
{
	int                                                bShouldFreeOnEmtpy;
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

struct Fdword
{
	int                                                Dummy;
};

struct FtOutOfLineBulkData
{
	int                                                nFileOffset;
	struct FPointer                                    pBulkData;
	class UObject*                                     pObject;
	int                                                nIndex;
};

struct FSpikeRecord
{
	struct Fdword                                      nStatID;
	int                                                nConsecutiveFrames;
	struct Fdword                                      nEventFlags;
	float                                              fTriggerValue;
	float                                              fBaseValue;
};

struct FSpikeWatch
{
	struct Fdword                                      nIgnoreFlags;
	float                                              fDetectionLimit;
	float                                              fDetectionLimitPercent;
	unsigned char                                      eDetectionMethod;
	TArray< float >                                    fStatHistoryBuffer;
	int                                                nHeadOfHistoryBuffer;
	unsigned long                                      bIsHistoryBufferInit : 1;
	int                                                nNumFramesSpiked;
	float                                              fHistoryBufferMean;
	float                                              fHistoryBufferStdDev;
};

struct FRawDistributionFloat : FRawDistribution
{
	void*                                              Distribution;
};

struct FRawDistributionVector : FRawDistribution
{
	void*                                              Distribution;
};

#ifdef _MSC_VER
#pragma pack( pop )
#endif