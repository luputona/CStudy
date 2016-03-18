#include "StdAfx.h"

class CPlayer;
class CENEMY;

CMainGame::CMainGame(void) :
m_pEnemy(NULL),
m_pPlayer(NULL)
{
}


CMainGame::~CMainGame(void)
{
	Release();
}

void CMainGame::Initialize()
{
	if (m_pPlayer == NULL)
	{
		m_pPlayer = new CPlayer;
		m_pPlayer->Initialize();
	}
}

void CMainGame::Render()
{
	m_pPlayer->Render();
}

void CMainGame::Progress()
{
	m_pPlayer->Progress();
}

void CMainGame::Release()
{

}

void CMainGame::Field()
{

}
