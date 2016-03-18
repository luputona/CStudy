#include <iostream>
using namespace std;

class CObj
{
private:
	int m_nA;
public:
	void Render();

public:
	int GetA()
	{
		return m_nA;
	}
	void SetA(int _a)
	{
		m_nA = _a;
	}
public:
	CObj();
	~CObj();
};

CObj::CObj()
{
	cout <<"������ ȣ�� \n";
	m_nA = 10;
}

CObj::~CObj()
{
	cout<<"�Ҹ��� ȣ��\n";
}

void CObj::Render()
{
	cout <<(++m_nA)<<endl;
}

void main()
{
	CObj Obj;

	int nSum = Obj.GetA();
	cout << nSum << endl;

	Obj.SetA(100);

	int nTmp = Obj.GetA();

	cout << nTmp <<endl;

	Obj.Render();
	Obj.Render();
	Obj.Render();

	

}