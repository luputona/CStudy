#pragma once

typedef struct S_PLAYERINFO
{
	char *m_class[4];
	int m_nDamage;
	int m_nHp;
	int m_nMp;
	int m_nClass;
}PLAYERINFO;

typedef struct S_ENEMYINFO
{
	char *name[10];
	int m_nDamage;
	int m_nHp;
	int m_nMp;
	int m_nSelect;
}ENEMYINFO;