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
	
	Player.m_class[1] = "����";
	Player.m_class[2] = "�ü�";
	Player.m_class[3] = "������";

	Player.m_nDamage = 0;
	Player.m_nHp = 0;
	Player.m_nMp = 0;

	cout <<"������ ���� �� �ּ��� \n";
	cout <<"1.���� \t 2.�ü� \t 3.������ \n";
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
	
	cout <<"���� : "<< Player.m_class[Player.m_nClass]<<endl;
	cout <<"ü�� : "<<Player.m_nHp<<"\t"<<"���� : "<<Player.m_nMp<<endl;
	cout <<"���ݷ� : "<<Player.m_nDamage<<endl;
	cout <<"=================================================\n";

}


void CPlayer::Release()
{

}
