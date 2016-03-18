#pragma once

typedef struct _BALL
{
	int nX;
	int nY;
	int nReady;
	int nDirect;
}BALL;

static int g_WallCollision[4][6] = 
{
	{3,2,-1,-1,-1,4},
	{-1,-1,-1,-1,2,1},
	{-1,5,4,-1,-1,-1},
	{-1,-1,1,0,5,-1}
};
static void gotoxy(int x,int y)
{
	COORD CursorPosition;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),CursorPosition);
}
