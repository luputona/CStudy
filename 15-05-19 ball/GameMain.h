#pragma once

class CBallBall; //���漱��

class CGameMain
{
private:
	CBallBall *pBall;
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
public:
	CGameMain(void);
	~CGameMain(void);
};

