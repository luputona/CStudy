#pragma once
class CBall;
class CBar;
class CGameMain
{
private:
	CBall *pBall;
	CBar *pBar;
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
public:
	CGameMain(void);
	~CGameMain(void);
};

