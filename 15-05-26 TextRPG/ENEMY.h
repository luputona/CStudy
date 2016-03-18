#pragma once
#include "Define.h"

class CENEMY
{
private:
	ENEMYINFO Enemy;
public:
	void Initialize();
	void Render();
	void Progress();
	void Release();
public:
	CENEMY(void);
	~CENEMY(void);
};

