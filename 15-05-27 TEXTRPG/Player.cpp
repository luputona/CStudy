#include "StdAfx.h"
#include "Player.h"


CPlayer::CPlayer(void)
{
	memset(&m_tInfo,0,sizeof(INFO));
}


CPlayer::~CPlayer(void)
{
}

void CPlayer::SelectJop()
{
	int nInput = 0;
	cout <<"������ �����ϼ��� (1.��� 2.������ 3.����) : ";
	cin >> nInput;

	switch(nInput)
	{
	case 1:
		m_tInfo.strName = "���";
		m_tInfo.nAttack = 10;
		m_tInfo.nHp = 100;
		break;
	case 2:
		m_tInfo.strName = "������";
		m_tInfo.nAttack = 15;
		m_tInfo.nHp = 80;
		break;
	case 3:
		m_tInfo.strName = "����";
		m_tInfo.nAttack = 8;
		m_tInfo.nHp = 120;
		break;
	}

}

void CPlayer::Render()
{
	cout <<"================================="<<endl;
	cout <<"���� �̸� : "<<m_tInfo.strName <<endl;
	cout <<"ü�� : "<<m_tInfo.nHp <<"\t���ݷ� : "<<m_tInfo.nAttack <<endl;

}
