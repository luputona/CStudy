#pragma once

typedef struct _BLOCK
{
	int nLife;
	int nX,nY;
	
}BLOCK;


static void gotoxy(int x, int y)
{
	COORD CursorPosition = {x,y};

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),CursorPosition);
}