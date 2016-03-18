#include "StdAfx.h"
#include "Bar.h"


CBar::CBar(void)
{
}

CBar::~CBar(void)
{
}

void CBar::Initialize()
{
	m_tBar.nX[0] = 12;
	m_tBar.nX[1] = 14;
	m_tBar.nX[2] = 16;
	m_tBar.nY = 16;
}

void CBar::Progress()
{
	int nKey = 0;
	if (_kbhit())
	{
		nKey = _getch();
		switch(nKey)
		{
		case 75:
			m_tBar.nX[0] -= 2;
		//	m_tBar.nX[1] -= 2;
		//	m_tBar.nX[2] -= 2;			
		
			break;
		case 77:
			m_tBar.nX[0] += 2;
		//	m_tBar.nX[1] += 2;
		//	m_tBar.nX[2] += 2;
			
			
			break;
		}
	}




}

void CBar::Render()
{
	system("cls");
	for (int i = 0 ; i<3; i++)
	{
		gotoxy(m_tBar.nX[i],m_tBar.nY);
		cout<<"¢Æ";
	}
	
}

void CBar::Release()
{

}

void CBar::gotoxy( int x,int y )
{
	COORD CursorPosition = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),CursorPosition);

}

void CBar::Setxy( int x[3], int y )
{
	for (int i = 0; i<3; i++)
	{
		 x[i] = m_tBar.nX[i];
	}	
	y = m_tBar.nY ;
}
