#pragma once
#include "Define.h"

class CENEMY;
class CPlayer;
class CMainGame
{
public:
	CENEMY *m_pEnemy;
	CPlayer *m_pPlayer;
public:
	void Field();
public:
	void Initialize();
	void Render();
	void Progress();
	void Release();
public:
	CMainGame(void);
	~CMainGame(void);
};

