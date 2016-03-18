// 15-05-28 FSM.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
typedef enum _MOB_STATE
{
	M_ATTACK,
	M_DEFENCE,
	M_IDLE
}MOB_STATE;

typedef enum _PLAYER_STATE
{
	P_ATTACK,
	P_DEFFENCE,
}PALYER_STATE;

typedef enum _DISTANCE_STATE
{
	SHORT,
	MEDIUM,
	LONG
}DISTANCE_STATE;

MOB_STATE g_MobState;
PALYER_STATE g_PlayerState;
DISTANCE_STATE g_DistanceState;

MOB_STATE g_StateTrans[2][3] = {{M_ATTACK,M_DEFENCE,M_IDLE},{M_ATTACK,M_IDLE,M_IDLE}};


int _tmain(int argc, _TCHAR* argv[])
{
	int ps;
	int ds;

	while(1)
	{
		cout <<"\n 주인공 상태 입력 (0: 공격, 1: 방어)\n";
		cin >>ps;
		cout <<"거리 (0: 단거리, 1: 중거리 , 2: 장거리) \n";
		cin >>ds;

		g_PlayerState = (PALYER_STATE)ps;
		g_DistanceState = (DISTANCE_STATE)ds;
		g_MobState = g_StateTrans[g_PlayerState][g_DistanceState];

		switch(g_MobState)
		{
		case M_ATTACK:
			cout <<"\n 몹 공격 상태 \n";
			break;
		case M_DEFENCE:
			cout <<"\n 몹 방어 상태 \n";
			break;
		case M_IDLE:
			cout <<"\n 몹 서있는 상태 \n";
			break;
		}

	}



	return 0;
}

