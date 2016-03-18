#pragma once
#include "Define.h"
class CBall
{
private:
	BALL m_tBall;
public:
	BALL GetBall()
	{
		return m_tBall;
	}
	void SetX(int x)
	{
		m_tBall.nX += x;
	}
	void SetY(int y)
	{
		m_tBall.nY += y;
	}
	void SetBall(BALL tBall)
	{
		m_tBall = tBall;
	}
	void SetReady(int Ready)
	{
		m_tBall.nReady = Ready;
	}
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
public:
	CBall(void);
	~CBall(void);
};

