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
		cout <<"�������̵�Render1 \n";
	}
	void Render3()
	{
		cout <<"Render3\n";
	}
};


void main()
{
	CObj *pObj = new CPlayer;

	
	//Render3�� ������� ���⶧���� �Ұ��� 
	// Render3�� ȣ���ϱ� ���� �ٿ�ĳ�����Ѵ� 
	((CPlayer*)pObj)->Render3(); 

	delete pObj;
}


