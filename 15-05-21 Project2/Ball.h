#pragma once
#include "Define.h"

class CBar;
class CBall
{
private:
	BALL m_tBall;
	bool m_bCheckX;
	bool m_bCheckY;
	CBar *m_pBar;
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
public:
	void gotoxy(int x, int y);
public:
	CBall(void);
	~CBall(void);
};

