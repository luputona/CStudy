// 15-05-21 Project2.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
		if (Curr + 15 < GetTickCount())
		{
			Curr = GetTickCount();
			Game.Progress();
			Game.Render();
		}

	}
	Game.Release();


	return 0;
}

