#include "StdAfx.h"
#include "Ball.h"


CBall::CBall(void)
{

}


CBall::~CBall(void)
{
}

void CBall::Initialize()
{
	m_tBall.nReady = 1;
	m_tBall.nDirect = 0;
	m_tBall.nX= 20;
	m_tBall.nY = 1;

}

void CBall::Progress()
{
	if (m_tBall.nReady == 0)
	{
		m_tBall.nY++;
		if (m_tBall.nY<1 || m_tBall.nX > 79 || m_tBall.nY > 24 || m_tBall.nX < 1)
		{
			m_tBall.nReady = 1;
			m_tBall.nX = 20;
			m_tBall.nY = 1;
		}
	}

}

void CBall::Render()
{
	system("cls");
	gotoxy(m_tBall.nX,m_tBall.nY);
	cout <<"¡Ü";
}

void CBall::Release()
{

}
