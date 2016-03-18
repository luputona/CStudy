#pragma once
#include "Define.h"

class CPlayer
{
private:
	INFO m_tInfo;
public:
	void SetDamage(int nAttack)
	{
		m_tInfo.nHp -= nAttack;
	}
	INFO GetInfo()const
	{
		return m_tInfo;
	}
	void SetHp(int nHp)
	{
		m_tInfo.nHp = nHp;
	}
public:
	void SelectJop();
	void Render();

public:
	CPlayer(void);
	~CPlayer(void);
};

