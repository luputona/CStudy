// 15-05-28 FSM.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
		cout <<"\n ���ΰ� ���� �Է� (0: ����, 1: ���)\n";
		cin >>ps;
		cout <<"�Ÿ� (0: �ܰŸ�, 1: �߰Ÿ� , 2: ��Ÿ�) \n";
		cin >>ds;

		g_PlayerState = (PALYER_STATE)ps;
		g_DistanceState = (DISTANCE_STATE)ds;
		g_MobState = g_StateTrans[g_PlayerState][g_DistanceState];

		switch(g_MobState)
		{
		case M_ATTACK:
			cout <<"\n �� ���� ���� \n";
			break;
		case M_DEFENCE:
			cout <<"\n �� ��� ���� \n";
			break;
		case M_IDLE:
			cout <<"\n �� ���ִ� ���� \n";
			break;
		}

	}



	return 0;
}

