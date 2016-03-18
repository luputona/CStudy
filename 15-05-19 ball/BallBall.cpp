#include "StdAfx.h"
#include "BallBall.h"


CBallBall::CBallBall(void) :
m_nX(80),
m_nY(25)
{
}

CBallBall::~CBallBall(void)
{
}

void CBallBall::Initialize()
{
	tInfo.m_nX = 0;
	tInfo.m_nY = 0;
}

void CBallBall::Progress()
{
	if (tInfo.m_nY <= m_nY && tInfo.m_nX <= m_nX )
	{
		tInfo.m_nX += 1;
		tInfo.m_nY += 1;		
	}	
	if (tInfo.m_nY >= m_nY  )
	{			
		tInfo.m_nY -= 2;
		m_nY--;		
	}
	if (m_nY == 0)
	{
		m_nX = 80;
		m_nY = 25;
	}
	if ( tInfo.m_nX >= m_nX)
	{
		tInfo.m_nX -= 2;
		m_nX--;
	}
	
	

}

void CBallBall::Render()
{
	system("cls");
	gotoxy(tInfo.m_nX,tInfo.m_nY);
	cout <<"●";
}

void CBallBall::Release()
{

}

void CBallBall::gotoxy( int x, int y )
{
	COORD CursorPosition = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),CursorPosition); //내가 원하는 좌표에 옮길수 있다.
}
