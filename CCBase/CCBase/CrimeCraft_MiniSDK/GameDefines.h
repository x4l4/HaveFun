/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: GameDefines.h
// Date: 06/16/2011 @ 01:19:42.928
// Completed generation in 7.2770 seconds
/////////////////////////////////////////////////////////////////////////////

#define ProcessEvent_Offset 0xF0
#define NativeFlag 0x00000400
#define RenderClass UGameViewportClient

DWORD GObjects = 0x02657A0C;
DWORD GNames = 0x02657920;
//DWORD ProcessEvent = 0x00463980;

template < class T > struct TArray
{
public:
	T* Data;
	int Count;
	int Max;

public:
	TArray ()
	{
		Data = NULL;
		Count = Max = 0;
	};

public:
	int Num ()
	{
		return this->Count;
	};

	T& operator() ( int i )
	{
		return this->Data[ i ];
	};

	const T& operator() ( int i ) const
	{
		return this->Data[ i ];
	};

	void Add ( T InputData )
	{
		Data = ( T* )realloc( Data, sizeof( T ) * ( Count + 1 ) );
		Data[ Count++ ] = InputData;
		Max = Count;
	};

	void Clear ()
	{
		free( Data );
		Count = Max = 0;
	};
};

struct FNameEntry
{
	unsigned char unknown_data00[ 16 ];
	char Name[ 16 ];
};

struct FName
{
	int Index;
	unsigned char unknown_data00[ 4 ];

	FName () : Index( 0 )
	{
	};

	FName ( int i ) : Index( i )
	{
	};

	~FName ()
	{
	};

	FName ( char* FindName )
	{
		static TArray< int > NameCache;

		for ( int i = 0; i < NameCache.Count; ++i )
		{
			if ( !strcmp( FName::Names()->Data[ NameCache( i ) ]->Name, FindName ) )
			{
				Index = NameCache( i );
				return;
			}
		}
		for ( int i = 0; i < FName::Names()->Count; ++i )
		{
			if ( FName::Names()->Data[ i ] )
			{
				if ( !strcmp( FName::Names()->Data[ i ]->Name, FindName ) )
				{
					NameCache.Add( i );
					Index = i;
				}
			}
		}
	};

	static TArray< FNameEntry* >* Names ()
	{
		return ( TArray< FNameEntry* >* )GNames;
	};

	char* GetName ()
	{
		return this->Names()->Data[ Index ]->Name;
	};

	bool operator==( const FName&A ) const
	{
		return ( Index == A.Index );
	};
};

struct FString : public TArray< wchar_t >
{
	FString ()
	{
	};

	FString ( wchar_t* Other )
	{
		this->Max = this->Count = *Other ? ( wcslen( Other ) + 1 ) : 0;
		if ( this->Count )
			this->Data = Other;
	};

	~FString ()
	{
	};

	FString operator= ( wchar_t* Other )
	{
		if ( this->Data != Other )
		{
			this->Max = this->Count = *Other ? ( wcslen( Other ) + 1 ) : 0;

			if ( this->Count )
				this->Data = Other;
		}

		return *this;
	};

};

struct FScriptDelegate
{
	unsigned char unknowndata00[ 10 ];
};

