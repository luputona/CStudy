// 15-05-19 ball.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "GameMain.h"



int _tmain(int argc, _TCHAR* argv[])
{
	CGameMain Game;

	//  1/1000
	int Current = GetTickCount();

	Game.Initialize();

	while (true)
	{
		if (Current+100 < GetTickCount())
		{
			Current = GetTickCount();

			Game.Progress();
			Game.Render();
		}
		
	}
	Game.Release();




	return 0;
}

