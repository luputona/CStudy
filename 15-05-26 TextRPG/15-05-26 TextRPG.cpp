// 15-05-26 TextRPG.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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

