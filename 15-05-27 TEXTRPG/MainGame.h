#pragma once

class CPlayer;
class CField;

class CMainGame
{
private:
	CPlayer *m_pPlayer;
	CField *m_pField;
public:
	void Initialize();
	void Progress();
public:
	CMainGame(void);
	~CMainGame(void);
};

