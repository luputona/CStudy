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

	Enemy.name[1] = "���";
	Enemy.name[2] = "��ũ";
	Enemy.name[3] = "Ʈ��";
	Enemy.name[4] = "����";

	
}

void CENEMY::Render()
{
	cout <<"���� �̸� : "	<< Enemy.name[Enemy.m_nSelect]<<endl;
	cout <<"ü�� : "<<Enemy.m_nHp << "\t" << "���� : " <<Enemy.m_nMp<<endl;
	cout <<"���ݷ� : " <<Enemy.m_nDamage<<endl;
	cout <<"===================================\n";
}

void CENEMY::Progress()
{

}

void CENEMY::Release()
{

}
