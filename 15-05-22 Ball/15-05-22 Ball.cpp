// 15-05-22 Ball.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

