#include "StdAfx.h"
#include "GameMain.h"
#include "Ball.h"
#include "Bar.h"

CGameMain::CGameMain(void) : 
pBall(NULL),
pBar(NULL)
{
}


CGameMain::~CGameMain(void)
{
}

void CGameMain::Initialize()
{
	if (pBall == NULL)
	{
		pBall = new CBall;
		pBall->Initialize();
	}
	if (pBar == NULL)
	{
		pBar = new CBar;
		pBar->Initialize();
	}
}

void CGameMain::Progress()
{
	pBall->Progress();
	pBar->Progress();
}

void CGameMain::Render()
{
	pBall->Render();
	pBar->Render();
}

void CGameMain::Release()
{
	delete pBall;
	delete pBar;
}
