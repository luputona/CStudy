#pragma once
#include "Define.h"

class CPlayer
{
private:
	PLAYERINFO Player;
public:
	void Initialize();
	void Render();
	void Progress();
	void Release();
public:
	CPlayer(void);
	~CPlayer(void);
};

