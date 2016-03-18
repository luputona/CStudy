#include <iostream>
using namespace std;


class CObj
{
public:
	virtual void Init()
	{
		cout <<"Obj"<<endl;
	}

};

class CPlayer : public CObj
{
public:
	virtual void Init()
	{
		cout <<"Player"<<endl;
	}

};

class CWizard : public CPlayer
{
public:
	void Init()
	{
		cout <<"Wizard"<<endl;
	}
};

void main()
{/*
	CPlayer *pPlayer = new CWizard;
	pPlayer->Init();

	CObj *pObj = pPlayer;
	pObj->Init();*/
/*
	CObj Obj;
	Obj.Init();

	CPlayer Player;
	Player.Init();

	CWizard Wizard;
	Wizard.Init();*/

	//CWizard *pWizard = new CWizard;
	//CPlayer *pPlayer = new CPlayer;
	//CObj *pObj = new CObj;

	//pWizard->Init();
	//pPlayer->Init();
	//pObj->Init();

	
	/*CObj *pObj = new CObj;
	CObj *pObj2 = new CPlayer;
	CObj *pObj3 = new CWizard;

	pObj->Init();
	pObj2->Init();
	pObj3->Init();*/




	



}