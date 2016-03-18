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
		cout <<"부모 생성자 호출"<<endl;
	}
	~CObj()
	{
		cout <<"부모 소멸자 호출"<<endl;
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
		cout <<"자식 생성자 호출"<<endl;
	}
	~CPlayer()
	{
		cout <<"자식 소멸자 호출"<<endl;
	}

};


void main()
{	/*
	CObj Obj(100);

	Obj.Render();*/

	CPlayer Player(10);
	Player.Render2();



}




