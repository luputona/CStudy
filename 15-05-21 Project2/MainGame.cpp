#include "StdAfx.h"
#include "MainGame.h"
#include "Bar.h"
#include "Ball.h"


CMainGame::CMainGame(void) :
m_pBar(NULL),
m_pBall(NULL)
{
}


CMainGame::~CMainGame(void)
{
	Release();
}

void CMainGame::Initialize()
{
	if (m_pBar == NULL)
	{
		m_pBar = new CBar;
		m_pBar->Initialize();
	}
	if (m_pBall == NULL)
	{
		m_pBall = new CBall;
		m_pBall->Initialize();
	}
}

void CMainGame::Progress()
{
	m_pBar->Progress();
	m_pBall->Progress();
}

void CMainGame::Render()
{
	m_pBar->Render();
	m_pBall->Render();
}

void CMainGame::Release()
{

}
