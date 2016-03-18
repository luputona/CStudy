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
	cout <<"1.�ʺ��� "<<endl;
	cout <<"2.�߼��� "<<endl;
	cout <<"3.����� "<<endl;
	cout <<"4.���ܰ� "<<endl;
	cout <<"==================="<<endl;
	cout <<"���� �����ϼ��� : ";
	
}

void CField::CreateMonster( int nInput )
{
	switch(nInput)
	{
	case 1:
		m_pMonster = Create("�ʺ���",30,3);
		break;
	case 2:
		m_pMonster = Create("�߼���",60,6);
		break;
	case 3:
		m_pMonster = Create("�����",90,9);
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
	//�Ҵ�� ��ü�� �ȿ��� ���ٰ� �����
	
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

		cout <<"1.���� 2.���� :";
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
