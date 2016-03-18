#pragma once
#include "Define.h"
class CBar
{
private:
	BAR m_tBar;
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
public:
	void gotoxy(int x,int y);
	void Setxy(int x[3], int y);
public:
	CBar(void);
	~CBar(void);
};

