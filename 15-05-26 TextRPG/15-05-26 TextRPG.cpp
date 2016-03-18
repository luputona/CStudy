// 15-05-26 TextRPG.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	CMainGame Game;
	

	Game.Initialize();
	int Curr = GetTickCount();
	

	while(true)
	{
		if (Curr + 100 < GetTickCount())
		{
			Curr = GetTickCount();
			system("cls");
			Game.Progress();
			Game.Render();
		}
		

	}

	Game.Render();

	return 0;
}

