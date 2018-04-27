#define _CRT_SECURE_NO_WARNINGS

#include <windows.h>
#include <stdio.h>
#include <math.h>
#include "detours.h"

#include "CCBase.h"

#define UObject_ProcessEvent 0x00463980

typedef void ( *tProcessEvent ) ( UFunction*, void*, void* );
tProcessEvent pProcessEvent = NULL;

char FunctionName[ 256 ];

UObject* pCallObject = NULL;

/* Dichiarazioni variabili di gioco */
//APlayerController* pPC = NULL;
ACCController *pPC=NULL;
ACCBaseController* PlayerController = NULL;
ACCPawn* CCPawnTarget = NULL;

#define UCONST_Pi 3.1415926
#define URotation180 32768
#define URotationToRadians UCONST_Pi / URotation180 


FColor MakeColor(int R, int G, int B, int A)
{
	FColor ReturnedColor;
	ReturnedColor.R = R;
	ReturnedColor.G = G;
	ReturnedColor.B = B;
	ReturnedColor.A = A;
	return ReturnedColor;
}

FColor Green = MakeColor(0,255,0,255);
FColor Red= MakeColor(255,0,0,255);


void BotName(UCanvas* pCanvas)
{
	if(pCanvas)
	{
		float OldCurX = pCanvas->CurX;
		float OldCurY = pCanvas->CurY;

		pCanvas->CurX = 5;
		pCanvas->CurY = 5;
		pCanvas->DrawColor = Red;
		pCanvas->DrawTextClipped(L"b-rabbit CC Base Hook",false,1.0,1.0);

		pCanvas->CurX = OldCurX;
		pCanvas->CurY = OldCurY;
	}
	//MessageBox(NULL,L"CC Test",L"b-rabbit",MB_OK);
}

void DrawCrossHair(UCanvas* pCanvas)
{
	if(pCanvas)
	{
		pCanvas->Draw2DLine(pCanvas->ClipX/2 -10,pCanvas->ClipY/2, pCanvas->ClipX/2 +10 ,pCanvas->ClipY/2,Green);
		pCanvas->Draw2DLine(pCanvas->ClipX/2 ,pCanvas->ClipY/2 -10, pCanvas->ClipX/2 ,pCanvas->ClipY/2 +10,Green);
	}
}

/* ESP */
float Size(FVector v)
{
	return sqrt(v.X*v.X + v.Y*v.Y + v.Z*v.Z);
}

void Normalize(FVector &v)
{
	float size = Size(v);

	if ( !size )
	{
		v.X = v.Y = v.Z = 1;
	}
	else
	{
		v.X /= size;
		v.Y /= size;
		v.Z /= size;
	}
}

FVector RotationToVector(FRotator R) 
{
	FVector Vec;
	float fYaw = R.Yaw * URotationToRadians;
	float fPitch = R.Pitch * URotationToRadians;
	float CosPitch = cos(fPitch);
	Vec.X = cos(fYaw) * CosPitch;
	Vec.Y = sin(fYaw) * CosPitch;
	Vec.Z = sin(fPitch);

	return Vec;
}

void GetAxes(FRotator R, FVector &X, FVector &Y, FVector &Z) 
{
	X = RotationToVector(R);
	Normalize(X);

	R.Yaw += 16384;
	FRotator R2 = R;
	R2.Pitch = 0.f;
	Y = RotationToVector(R2);
	Normalize(Y);
	Y.Z = 0.f;

	R.Yaw -= 16384;
	R.Pitch += 16384;
	Z = RotationToVector(R);
	Normalize(Z);
}

float CamFOV(ACamera* Cam)
{
	if(Cam != NULL)
	{
		static UFunction* pfnGetFOVAngle = NULL;

        if ( !pfnGetFOVAngle )
            pfnGetFOVAngle = UObject::FindObject< UFunction >( "Function Engine.Camera.GetFOVAngle" );

		ACamera_execGetFOVAngle_Parms Parms;

		pPC->PlayerCamera->ProcessEvent(pfnGetFOVAngle, &Parms);

		return Parms.ReturnValue;
	}
}

FVector CalculateScreenCoordinate(UCanvas* pCanvas, FVector Location)
{
	FVector Return;

	FVector AxisX, AxisY, AxisZ, Delta, Transformed;
	FRotator MYCam = pPC->PlayerCamera->Rotation;
	
	GetAxes( MYCam , AxisX, AxisY, AxisZ );
	
	Delta = Location - pPC->PlayerCamera->Location;
	Transformed.X = VectorDotProduct(&Delta, &AxisY);
	Transformed.Y = VectorDotProduct(&Delta, &AxisZ);
	Transformed.Z = VectorDotProduct(&Delta, &AxisX);

	if( Transformed.Z < 1.00f )
		Transformed.Z = 1.00f;

	float FOVAngle = CamFOV(pPC->PlayerCamera);

	Return.X = ( pCanvas->ClipX / 2.0f ) + Transformed.X * ( ( pCanvas->ClipX / 2.0f ) / tan( FOVAngle * UCONST_Pi / 360.0f ) ) / Transformed.Z;
	Return.Y = ( pCanvas->ClipY / 2.0f ) + -Transformed.Y * ( ( pCanvas->ClipX / 2.0f ) / tan( FOVAngle * UCONST_Pi / 360.0f ) ) / Transformed.Z;
    Return.Z = 0;

	return Return;
}

void Boxes(UCanvas* pCanvas, APawn* Target, FColor Color)
{
	{
		FVector		Min,Max,vVec1,vVec2,vVec3,vVec4,vVec5,vVec6,vVec7,vVec8;

		FBox Returned;
		Target->GetComponentsBoundingBox(&Returned);

		if(Returned.IsValid)
		{
			Max = Returned.Max;
			Min = Returned.Min;
			{
				vVec3 = Min;
				vVec3.X = Max.X;
				vVec4 = Min;
				vVec4.Y = Max.Y;
				vVec5 = Min;
				vVec5.Z = Max.Z;
				vVec6 = Max;
				vVec6.X = Min.X;
				vVec7 = Max;
				vVec7.Y = Min.Y;
				vVec8 = Max;
				vVec8.Z = Min.Z;
				vVec1 = CalculateScreenCoordinate(pCanvas, Min);
				vVec2 = CalculateScreenCoordinate(pCanvas, Max);
				vVec3 = CalculateScreenCoordinate(pCanvas, vVec3);
				vVec4 = CalculateScreenCoordinate(pCanvas, vVec4);
				vVec5 = CalculateScreenCoordinate(pCanvas, vVec5);
				vVec6 = CalculateScreenCoordinate(pCanvas, vVec6);
				vVec7 = CalculateScreenCoordinate(pCanvas, vVec7);
				vVec8 = CalculateScreenCoordinate(pCanvas, vVec8);
				
				pCanvas->Draw2DLine(vVec1.X, vVec1.Y, vVec5.X, vVec5.Y, Color);
				pCanvas->Draw2DLine(vVec2.X, vVec2.Y, vVec8.X, vVec8.Y, Color);
				pCanvas->Draw2DLine(vVec3.X, vVec3.Y, vVec7.X, vVec7.Y, Color);
				pCanvas->Draw2DLine(vVec4.X, vVec4.Y, vVec6.X, vVec6.Y, Color);
				pCanvas->Draw2DLine(vVec1.X, vVec1.Y, vVec3.X, vVec3.Y, Color);
				pCanvas->Draw2DLine(vVec1.X, vVec1.Y, vVec4.X, vVec4.Y, Color);
				pCanvas->Draw2DLine(vVec8.X, vVec8.Y, vVec3.X, vVec3.Y, Color);
				pCanvas->Draw2DLine(vVec8.X, vVec8.Y, vVec4.X, vVec4.Y, Color);
				pCanvas->Draw2DLine(vVec2.X, vVec2.Y, vVec6.X, vVec6.Y, Color);
				pCanvas->Draw2DLine(vVec2.X, vVec2.Y, vVec7.X, vVec7.Y, Color);
				pCanvas->Draw2DLine(vVec5.X, vVec5.Y, vVec6.X, vVec6.Y, Color);
				pCanvas->Draw2DLine(vVec5.X, vVec5.Y, vVec7.X, vVec7.Y, Color);
			}
		}
	}
}

float CalculateDistance(APawn* APBPawn, APawn* PawnTarget)
{
	return ( Size( PawnTarget->Location - APBPawn->Location )/100 );
}

FVector CalculateSTextPosition(UCanvas *pCanvas, APawn* APBPawn , APawn* Target, FVector Pos)
{
	FVector EnemyLocation = Target->Location, TxtPos, STxtPos;
	TxtPos.X = EnemyLocation.X;
    TxtPos.Y = EnemyLocation.Y;
    TxtPos.Z = Pos.Z + 10 + CalculateDistance(APBPawn, Target);
    STxtPos = CalculateScreenCoordinate(pCanvas, TxtPos);
	return STxtPos;
}

void DrawPlayer(UCanvas* pCanvas)
{
	
	
	if (pPC == NULL || pPC->Pawn == NULL || pPC->WorldInfo == NULL )
		return;

	APawn* Target = pPC->Pawn->WorldInfo->PawnList;
	APawn* TargetPawn = NULL;
	ACCPawn* CCPawn = reinterpret_cast<ACCPawn*>(pPC->Pawn);
	//ACCBaseController* PlayerControllerTarget = NULL;
	FVector STxtPos;

	while ( Target != NULL )
	{
		if ( !Target->bDeleteMe && Target != pPC->Pawn  ) 
		{
			CCPawnTarget = reinterpret_cast<ACCPawn*>(Target); // Ottiene il singolo target

			/*if(CCPawnTarget->IsAliveAndWell())
			{*/
			MessageBox(NULL,L"CC Test",L"b-rabbit",MB_OK);
				Boxes(pCanvas, Target, Green); // Va a scrivere il Max e il Min
			   // STxtPos = CalculateSTextPosition(pCanvas, pPC->Pawn, Target, Max);
			//}
		}
		Target = Target->NextPawn;
	}


}
/* Fine ESP */

void PostRender ( UCanvas* pCanvas )
{
	if(pCanvas)
	{
		BotName(pCanvas);
		DrawCrossHair(pCanvas);
		DrawPlayer(pCanvas);
	}
}

void hkProcessEvent ( UFunction* pFunction, void* pParms, void* pResult )
{
	_asm pushad; // Salva i registri nello stack

	_asm mov pCallObject, ecx; // Salva in pCallObject il valore del registro ecx

	if ( pFunction )
	{
		strcpy( FunctionName, pFunction->GetFullName() );
		if ( !strcmp( FunctionName, "Function Engine.GameViewportClient.PostRender" ))
		{			
			PostRender(((UGameViewportClient_eventPostRender_Parms*)pParms)->Canvas);
		} 
		else if(!strcmp( FunctionName, "Function Engine.PlayerController.PlayerTick" ))
		{
			pPC = (ACCController*)pCallObject;
			PlayerController = (ACCBaseController*)pCallObject;			
		}
		else if( !strcmp( FunctionName, "Function CrimeCraft.CCInstanceController.Destroyed" ) ) //if the playersocontroller gets destroyed, make sure it poins to null
		{
			if(PlayerController == pCallObject)
			{
				PlayerController = NULL;
			}
		}
	}

	_asm popad; // Ripristina i registri dallo stack

	pProcessEvent( pFunction, pParms, pResult ); 
}

void OnAttach () // Prima funzione che viene chiamata quando viene iniettata la dll nel processo (viene chiamata dal main della dll)
{
	pProcessEvent = ( tProcessEvent )DetourFunction( ( PBYTE )UObject_ProcessEvent, ( PBYTE )hkProcessEvent );
}

BOOL WINAPI DllMain ( HMODULE hModule, DWORD dwReason, LPVOID lpReserved )
{
	if ( dwReason == DLL_PROCESS_ATTACH )	
		OnAttach ();	
	
	return TRUE;
}