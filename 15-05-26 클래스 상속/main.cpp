#include <iostream>
using namespace std;

class CObj
{
protected:
	int m_nOA;
public:
	void Render()
	{
		cout << m_nOA<<endl;
	}
	int GetOA()
	{
		return m_nOA;
	}
public:
	CObj(int _a = 0):m_nOA(_a)
	{
		cout <<"�θ� ������ ȣ��"<<endl;
	}
	~CObj()
	{
		cout <<"�θ� �Ҹ��� ȣ��"<<endl;
	}

};

class CPlayer : public CObj
{
private:
	int m_nPA;
public:
	void Render2()
	{	
		cout <<GetOA() <<endl;
		cout <<m_nPA <<endl;
	}
public:
	CPlayer(int _a = 0) : CObj(_a),m_nPA(_a)
	{
		cout <<"�ڽ� ������ ȣ��"<<endl;
	}
	~CPlayer()
	{
		cout <<"�ڽ� �Ҹ��� ȣ��"<<endl;
	}

};


void main()
{	/*
	CObj Obj(100);

	Obj.Render();*/

	CPlayer Player(10);
	Player.Render2();



}




