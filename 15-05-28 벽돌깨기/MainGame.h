#pragma once

class CBlock;
class CMainGame
{
private:
	CBlock *pBlock;
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
public:
	CMainGame(void);
	~CMainGame(void);
};

