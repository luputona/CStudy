#pragma once

#define LEFT 75
#define RIGHT 77

typedef struct _BAR
{
	int nX[3];
	int nY;
}BAR;

typedef struct _BALL
{
	int nReady;
	int nHp;
	int nDirect;
	int nX;
	int nY;

}BALL;

static void gotoxy(int x,int y)
{
	COORD CursorPosition = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_INPUT_HANDLE),CursorPosition);
}


