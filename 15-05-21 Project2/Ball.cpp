#include "StdAfx.h"
#include "Ball.h"
#include "Bar.h"

CBall::CBall(void) :
m_bCheckX(false),
m_bCheckY(false),
m_pBar(NULL)
{
}

CBall::~CBall(void)
{
}

void CBall::Initialize()
{
	if (m_pBar == NULL)
	{
		m_pBar = new CBar;
		m_pBar->Initialize();
	}
	

	m_tBall.m_nX = 30;
	m_tBall.m_nY = 10;
}

void CBall::Progress()
{
	if (m_tBall.m_nY >= 24)
	{
		m_bCheckY = true;
	}
	else if (m_tBall.m_nY <= 0)
	{
		m_bCheckY = false;
	}
	if (m_tBall.m_nX >=77)
	{
		m_bCheckX = true;
	}
	else if (m_tBall.m_nX <= 0)
	{
		m_bCheckX = false;
	}
	
	if (m_bCheckY)
	{
		m_tBall.m_nY--;
	}
	else
		m_tBall.m_nY++;

	if (m_bCheckX)
	{
		m_tBall.m_nX--;
	}
	else
		m_tBall.m_nX++;


	

}

void CBall::Render()
{
	//system("cls");
	gotoxy(m_tBall.m_nX,m_tBall.m_nY);
	cout <<"¡Û";
}

void CBall::Release()
{

}

void CBall::gotoxy( int x, int y )
{
	COORD CursorPosition = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),CursorPosition);
}
