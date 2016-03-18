#pragma once
#include "Define.h"

class CBall;
class CBar
{
private:
	BAR m_tBar;
	int m_nCatch;
public:
	void Initialize();
	void Progress(CBall *pBall);
	void Render();
	void Release();
public:
	CBar(void);
	~CBar(void);
};

