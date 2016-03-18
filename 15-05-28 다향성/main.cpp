#include <iostream>
using namespace std;


class CObj
{
private:
	int m_nA;
	int m_nB;
public:
	virtual void Render1()
	{
		cout <<"Render1\n";
	}
	virtual void Render2()
	{
		cout <<"Render2\n";
	}
};

class CPlayer : public CObj
{
private:
	int m_nC;
	int m_nD;
public:
	virtual void Render1()
	{
		cout <<"오버라이딩Render1 \n";
	}
	void Render3()
	{
		cout <<"Render3\n";
	}
};


void main()
{
	CObj *pObj = new CPlayer;

	
	//Render3이 버츄얼이 없기때문에 불가능 
	// Render3을 호출하기 위해 다운캐스팅한다 
	((CPlayer*)pObj)->Render3(); 

	delete pObj;
}


