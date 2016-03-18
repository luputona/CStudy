#include "StdAfx.h"
#include "MainGame.h"
#include "Player.h"
#include "Field.h"

CMainGame::CMainGame(void) :
m_pPlayer(NULL),
m_pField(NULL)
{
}


CMainGame::~CMainGame(void)
{
	delete m_pPlayer;
	m_pPlayer =NULL;
}

void CMainGame::Initialize()
{
	if (m_pPlayer == NULL)
	{
		m_pPlayer = new CPlayer;
		m_pPlayer->SelectJop();
	}
}

void CMainGame::Progress()
{
	int nInput = 0;

	while(true)
	{
		system("cls");
		m_pPlayer->Render();
		cout <<"1.사냥터 2.종료 :";
		cin >>nInput;

		if (nInput == 2)
		{
			break;
		}
		if (nInput == 1)
		{
			if (m_pField == NULL)
			{
				m_pField = new CField;
				m_pField->SetPlayer(m_pPlayer);
			}
			m_pField->Progress();
		}

	}
}
