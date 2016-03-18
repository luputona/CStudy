#pragma once
#include "Define.h"

class CBlock
{
private:
	BLOCK tBlock[50];
public:
	int Search(int nEnd,int nX,int nY);
	void SetBlock(int nBlockCount);
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
public:
	CBlock(void);
	~CBlock(void);
};

