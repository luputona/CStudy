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
	cout <<"���� �̸� : "<<m_tMonster.strName <<endl;
	cout <<"ü�� : "<<m_tMonster.nHp <<"\t���ݷ� : "<<m_tMonster.nAttack <<endl;
}
