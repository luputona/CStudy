#include "StdAfx.h"
#include "Field.h"
#include "Player.h"
#include "Monster.h"

CField::CField(void) :
m_pMonster(NULL),
m_pPlayer(NULL)
{
}


CField::~CField(void)
{
}

void CField::Progress()
{
	int nInput = 0;

	while(true)
	{
		system("cls");
		m_pPlayer->Render();
		DrawMap();
		cin>>nInput;

		if (nInput == 4)
		{
			break;
		}
		if (nInput <= 3)
		{
			CreateMonster(nInput);
			Fight();
		}

	}
}

void CField::DrawMap() const
{
	cout <<"1.ÃÊº¸¸Ê "<<endl;
	cout <<"2.Áß¼ö¸Ê "<<endl;
	cout <<"3.°í¼ö¸Ê "<<endl;
	cout <<"4.Àü´Ü°è "<<endl;
	cout <<"==================="<<endl;
	cout <<"¸ÊÀ» ¼±ÅÃÇÏ¼¼¿ä : ";
	
}

void CField::CreateMonster( int nInput )
{
	switch(nInput)
	{
	case 1:
		m_pMonster = Create("ÃÊº¸¸÷",30,3);
		break;
	case 2:
		m_pMonster = Create("Áß¼ö¸÷",60,6);
		break;
	case 3:
		m_pMonster = Create("°í¼ö¸÷",90,9);
		break;
	}

}

CMonster * CField::Create( string _strName, int _nHp, int _nAttack )
{
	CMonster *pMonster = new CMonster;

	INFO tMonster = {""};

	tMonster.strName = _strName;
	tMonster.nHp = _nHp;
	tMonster.nAttack = _nAttack;

	pMonster->SetMonster(tMonster);
	//ÇÒ´çµÈ °´Ã¼°¡ ¾È¿¡¼­ µ¹´Ù°¡ »ç¶óÁü
	
	return pMonster;
}

void CField::Fight()
{
	int nInput = 0;

	while(true)
	{
		system("cls");

		m_pPlayer->Render();
		m_pMonster->Render();

		cout <<"1.°ø°Ý 2.µµ¸Á :";
		cin >> nInput;

		if (nInput == 1)
		{
			m_pPlayer->SetDamage(m_pMonster->GetMonster().nAttack);
			m_pMonster->SetDamage(m_pPlayer->GetInfo().nAttack);

			if (m_pPlayer->GetInfo().nHp <= 0)
			{
				m_pPlayer->SetHp(100);
				break;
			}
			
		}
		if (nInput == 2||m_pMonster->GetMonster().nHp <= 0)
		{
			delete m_pMonster;
			m_pMonster = NULL;
			break;
		}

	}

}
