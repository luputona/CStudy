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
	cout <<"직업을 선택하세요 (1.기사 2.마법사 3.도둑) : ";
	cin >> nInput;

	switch(nInput)
	{
	case 1:
		m_tInfo.strName = "기사";
		m_tInfo.nAttack = 10;
		m_tInfo.nHp = 100;
		break;
	case 2:
		m_tInfo.strName = "마법사";
		m_tInfo.nAttack = 15;
		m_tInfo.nHp = 80;
		break;
	case 3:
		m_tInfo.strName = "도둑";
		m_tInfo.nAttack = 8;
		m_tInfo.nHp = 120;
		break;
	}

}

void CPlayer::Render()
{
	cout <<"================================="<<endl;
	cout <<"직업 이름 : "<<m_tInfo.strName <<endl;
	cout <<"체력 : "<<m_tInfo.nHp <<"\t공격력 : "<<m_tInfo.nAttack <<endl;

}
