// 15-05-28 ��������.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "MainGame.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CMainGame MainGame;


	DWORD dwTime = GetTickCount();
	MainGame.Initialize();
	
	while(true)
	{
		if (dwTime + 10 < GetTickCount())
		{
			dwTime = GetTickCount();
			MainGame.Progress();
			MainGame.Render();
		}
	}
	MainGame.Release();
	

	return 0;
}

