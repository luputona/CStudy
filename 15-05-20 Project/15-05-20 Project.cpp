// 15-05-20 Project.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "GameMain.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CGameMain Game;

	int Current = GetTickCount();

	Game.Initialize();

	while(true)
	{
		if (Current + 100 < GetTickCount())
		{
			Current = GetTickCount();

			Game.Progress();
			Game.Render();

		}
		
	}

	Game.Release();

	return 0;
}

