#include "StdAfx.h"
#include "ENEMY.h"


CENEMY::CENEMY(void)
{
}


CENEMY::~CENEMY(void)
{
}

void CENEMY::Initialize()
{
	for (int i = 0; i<10; i++)
	{
		Enemy.name[i] = new char;
		Enemy.name[i] = NULL;
	}

	Enemy.name[1] = "고블린";
	Enemy.name[2] = "오크";
	Enemy.name[3] = "트롤";
	Enemy.name[4] = "오거";

	
}

void CENEMY::Render()
{
	cout <<"몬스터 이름 : "	<< Enemy.name[Enemy.m_nSelect]<<endl;
	cout <<"체력 : "<<Enemy.m_nHp << "\t" << "마나 : " <<Enemy.m_nMp<<endl;
	cout <<"공격력 : " <<Enemy.m_nDamage<<endl;
	cout <<"===================================\n";
}

void CENEMY::Progress()
{

}

void CENEMY::Release()
{

}
