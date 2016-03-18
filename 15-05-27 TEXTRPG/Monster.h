#pragma once
#include "Define.h"

class CMonster
{
private:
	INFO m_tMonster;
public:
	void Render();
	void SetDamage(int nAttack)
	{
		m_tMonster.nHp -= nAttack;
	}
	void SetMonster(INFO tMonster)
	{
		m_tMonster = tMonster;
	}
	INFO GetMonster()const
	{
		return m_tMonster;
	}
public:
	CMonster(void);
	~CMonster(void);
};

