// 15-05-28 벽돌깨기.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

