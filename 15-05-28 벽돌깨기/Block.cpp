#include "StdAfx.h"
#include "Block.h"


CBlock::CBlock(void)
{
	memset(tBlock,0,sizeof(tBlock));
}


CBlock::~CBlock(void)
{
	Release();
}

void CBlock::Initialize()
{
	SetBlock(10);
}

void CBlock::Progress()
{
	
}

void CBlock::Render()
{
	for (int i = 0; i<10; i++)
	{
		gotoxy(tBlock[i].nX,tBlock[i].nY);
		cout <<"■";
	}
}

void CBlock::Release()
{

}
//Search 함수는 주어진좌표가 현재 설정된 블록 배열 중에 중복된 것이 있는지를 
//검색해주는 함수 
//현재 최대 블록 50개 설정 가능 
//매번 50개의 블록을 전부 검색할 필요없이 스테이지마다 할당된 블록
//안에서만 검색
//Search함수는 첫번째 인자의 nEnd변수는 블록의 범위가 된다.
//이 함수는 SetBlock함수에서 호출된다.

int CBlock::Search( int nEnd,int nX,int nY )
{
	for (int i =0; i<nEnd; i++)
	{
		if (tBlock[i].nY == nY)
		{
			if (tBlock[i].nX == nX || (tBlock[i].nX + 1) == nX)
			{
				return 1; // 같은것이 있으면 1
			}
		}
	}
	//같은것이 없다.
	return 0;
}

void CBlock::SetBlock( int nBlockCount )
{
	int nX;
	int nY;
	srand((unsigned(time(NULL))));

	for (int i = 0 ; i < nBlockCount; i++)
	{
		tBlock[i].nLife = 1;

		while(1) //중복찾기 
		{
			nX = rand() % 57 + 2; // 2~58범위 안에서 
			nY = rand() % 14 + 2; //2~15까지 범위

			if (Search(i,nX,nY) == 0)
			{
				tBlock[i].nX = nX;
				tBlock[i].nY = nY;
				break;
			}
		}
	}
}
