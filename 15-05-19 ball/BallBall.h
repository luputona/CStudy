#pragma once
#include "Define.h"

class CBallBall
{
private:
	INFO tInfo;
	int m_nX;
	int m_nY;
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
public:
	void gotoxy(int x, int y);
public:
	CBallBall(void);
	~CBallBall(void);
};

