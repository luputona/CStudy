#pragma once
#include "Define.h"

class CBall
{
private:
	BALL tInfo;

public:
	void keyInput();
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

