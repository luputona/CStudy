#include "StdAfx.h"
#include "GameMain.h"
#include "BallBall.h"

CGameMain::CGameMain(void) :
pBall(NULL)
{

}

CGameMain::~CGameMain(void)
{
}

void CGameMain::Initialize()
{
	if (pBall == NULL)
	{
		pBall = new CBallBall;
		pBall->Initialize();
	}
}

void CGameMain::Progress()
{
	pBall->Progress();
}

void CGameMain::Render()
{
	pBall->Render();
}

void CGameMain::Release()
{
	pBall->Release();
}
