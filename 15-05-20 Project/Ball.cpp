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
	tInfo.m_nReady = 1;
	tInfo.m_nDirect = 0;
	tInfo.m_nX = 30;
	tInfo.m_nY = 10;
	tInfo.m_nSpeed = 1;
}

void CBall::Progress()
{
	keyInput();
	if (tInfo.m_nReady == 0)
	{
		switch(tInfo.m_nDirect)
		{
		case 0:
			tInfo.m_nY -= tInfo.m_nSpeed;
			break;
		case 1:
			tInfo.m_nX += tInfo.m_nSpeed;
			tInfo.m_nY -= tInfo.m_nSpeed;
			break;
		case 2:
			tInfo.m_nX += tInfo.m_nSpeed;
			tInfo.m_nY += tInfo.m_nSpeed;
			break;
		case 3:
			tInfo.m_nY += tInfo.m_nSpeed;
			break;
		case 4:
			tInfo.m_nX -= tInfo.m_nSpeed;
			tInfo.m_nY += tInfo.m_nSpeed;
			break;
		case 5:
			tInfo.m_nX -= tInfo.m_nSpeed;
			tInfo.m_nY -= tInfo.m_nSpeed;
			break;
		}
		if (tInfo.m_nY < 1 || tInfo.m_nX > 79 || tInfo.m_nY > 23 || tInfo.m_nX < 1)
		{
			tInfo.m_nReady = 1;
			tInfo.m_nX = 30;
			tInfo.m_nY = 10;
			tInfo.m_nDirect = 0;

		}
	}
}

void CBall::Render()
{
	system("cls");
	gotoxy(tInfo.m_nX,tInfo.m_nY);
	cout <<"¡Ü";

	

}

void CBall::Release()
{

}

void CBall::keyInput()
{
	int nKey;

	if (_kbhit())
	{
		nKey = _getch();
		switch(nKey)
		{
		case '0':
			tInfo.m_nDirect = 0;
			tInfo.m_nX = 30;
			tInfo.m_nY = 10;
			break;
		case '1':
			tInfo.m_nDirect = 1;
			tInfo.m_nX = 30;
			tInfo.m_nY = 10;
			break;
		case '2':
			tInfo.m_nDirect = 2;
			tInfo.m_nX = 30;
			tInfo.m_nY = 10;
			break;
		case '3':
			tInfo.m_nDirect = 3;
			tInfo.m_nX = 30;
			tInfo.m_nY = 10;
			break;
		case '4':
			tInfo.m_nDirect = 4;
			tInfo.m_nX = 30;
			tInfo.m_nY = 10;
			break;
		case '5':
			tInfo.m_nDirect = 5;
			tInfo.m_nX = 30;
			tInfo.m_nY = 10;
			break;
		case 'f':
			tInfo.m_nReady = 0;			
			break;

		}
	}

}

void CBall::gotoxy( int x, int y )
{
	COORD CursorPosition = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),CursorPosition);
}
