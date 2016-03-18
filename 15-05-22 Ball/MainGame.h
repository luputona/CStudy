#pragma once

class CBar;
class CBall;

class CMainGame
{
private:
	CBar *m_pBar;
	CBall *m_pBall;
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
public:
	CMainGame(void);
	~CMainGame(void);
};

