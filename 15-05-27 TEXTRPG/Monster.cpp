#include "StdAfx.h"
#include "Monster.h"


CMonster::CMonster(void)
{
	memset(&m_tMonster,0,sizeof(INFO));
}


CMonster::~CMonster(void)
{
}

void CMonster::Render()
{
	cout <<"================================="<<endl;
	cout <<"직업 이름 : "<<m_tMonster.strName <<endl;
	cout <<"체력 : "<<m_tMonster.nHp <<"\t공격력 : "<<m_tMonster.nAttack <<endl;
}
