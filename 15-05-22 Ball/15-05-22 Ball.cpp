// 15-05-22 Ball.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "MainGame.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CMainGame Game;

	Game.Initialize();

	int Curr = GetTickCount();

	while(true)
	{
		if (Curr + 10 < GetTickCount())
		{
			Curr = GetTickCount();
			Game.Progress();
			Game.Render();
		}	

	}

	Game.Release();



	return 0;
}

