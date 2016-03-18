#include "StdAfx.h"
#include "MainGame.h"
#include "Block.h"

CMainGame::CMainGame(void) :
pBlock(NULL)
{
}


CMainGame::~CMainGame(void)
{
	Release();
}

void CMainGame::Initialize()
{
	if (pBlock == NULL)
	{
		pBlock = new CBlock;
		pBlock->Initialize();
	}
}

void CMainGame::Progress()
{
	pBlock->Progress();
}

void CMainGame::Render()
{
	system("cls");
	pBlock->Render();
}

void CMainGame::Release()
{
	delete pBlock;
	pBlock = NULL;
}
