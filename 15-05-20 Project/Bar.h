#pragma once
#include "Define.h"

class CBar
{
private:
	BAR tBar;
public:
	void KeyInput();
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
public:
	void gotoxy(int x, int y);
public:
	CBar(void);
	~CBar(void);
};

