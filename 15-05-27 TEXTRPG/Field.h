#pragma once

class CPlayer;
class CMonster;

class CField
{
private:
	CPlayer *m_pPlayer;
	CMonster *m_pMonster;
public:
	void Progress();
	void DrawMap()const;
	void CreateMonster(int nInput);
	CMonster *Create(string _strName, int _nHp, int _nAttack);
	void Fight();

public:
	void SetPlayer(CPlayer *pPlayer)
	{
		m_pPlayer = pPlayer;
	}

public:
	CField(void);
	~CField(void);
};

