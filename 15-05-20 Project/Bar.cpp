#include "StdAfx.h"
#include "Bar.h"


CBar::CBar(void)
{
}
CBar::~CBar(void)
{
}

void CBar::KeyInput()
{
	char nKey;

	if (_kbhit())
	{
		nKey = _getch();
		switch(nKey)
		{
			case  
		}
	}
}

void CBar::Initialize()
{
	tBar.m_nDirect = 0;
	tBar.m_nSpeed = 1;
	tBar.m_nX = 44;
	tBar.m_nY = 20;
}

void CBar::Progress()
{

}

void CBar::Render()
{
	//system("cls");
	gotoxy(tBar.m_nX,tBar.m_nY);
	cout <<"¡à¡à¡à";
}

void CBar::Release()
{

}

void CBar::gotoxy( int x, int y )
{
	COORD CursorPosition = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),CursorPosition);
}
