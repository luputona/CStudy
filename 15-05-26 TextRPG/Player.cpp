#include "StdAfx.h"
#include "Player.h"


CPlayer::CPlayer(void)
{
}

CPlayer::~CPlayer(void)
{
}

void CPlayer::Initialize()
{
	for (int i = 0; i<3; i++)
	{
		Player.m_class[i] = new char;
		Player.m_class[i] = NULL;
	}
	
	Player.m_class[1] = "전사";
	Player.m_class[2] = "궁수";
	Player.m_class[3] = "마법사";

	Player.m_nDamage = 0;
	Player.m_nHp = 0;
	Player.m_nMp = 0;

	cout <<"직업을 선택 해 주세요 \n";
	cout <<"1.전사 \t 2.궁수 \t 3.마법사 \n";
	cin >> Player.m_nClass;
	cout <<"================================\n";

	switch(Player.m_nClass)
	{
	case 1:
		Player.m_nDamage = 20;
		Player.m_nHp = 200;
		Player.m_nMp = 50;
		break;
	case 2:
		Player.m_nDamage = 15;
		Player.m_nHp = 170;
		Player.m_nMp = 70;
		break;
	case 3:
		Player.m_nDamage = 25;
		Player.m_nHp = 130;
		Player.m_nMp = 200;
		break;
	}
	
}
void CPlayer::Progress()
{



}

void CPlayer::Render()
{
	
	cout <<"직업 : "<< Player.m_class[Player.m_nClass]<<endl;
	cout <<"체력 : "<<Player.m_nHp<<"\t"<<"마나 : "<<Player.m_nMp<<endl;
	cout <<"공격력 : "<<Player.m_nDamage<<endl;
	cout <<"=================================================\n";

}


void CPlayer::Release()
{

}
