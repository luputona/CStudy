#include "StdAfx.h"
#include "MainGame.h"
#include "Ball.h"
#include "Bar.h"

CMainGame::CMainGame(void) : 
m_pBall(NULL),
m_pBar(NULL)
{
}

CMainGame::~CMainGame(void)
{
	Release();
}

void CMainGame::Initialize()
{
	
	if (m_pBall == NULL)
	{
		m_pBall = new CBall;
		m_pBall->Initialize();
	}
	if (m_pBar == NULL)
	{
		m_pBar = new CBar;
		m_pBar->Initialize();
	}
}

void CMainGame::Progress()
{
	m_pBall->Progress();
	m_pBar->Progress(m_pBall);
}

void CMainGame::Render()
{
	m_pBall->Render();
	m_pBar->Render();
}

void CMainGame::Release()
{
	delete m_pBar;
	m_pBar = NULL;

	delete m_pBall;
	m_pBall = NULL;
}
