#include <iostream>
using namespace std;


class CObj
{
private:
	int a;
	int b;
public:
	void SetA(int _a)
	{
		a = _a;
	}
	void SetB(int _b)
	{
		b = _b;
	}
	CObj* GetThis()
	{
		return this;
	}
	int *GetA()
	{
		return &a;
	}
	void Render()
	{
		cout << a << "\t"<<b<<endl;
	}
public:
	CObj()
	{
		cout <<"������ ȣ��"<<endl;
		a = 10;
		b = 20;
	}
	CObj(int _a, int _b)
	{
		cout <<"���� �ִ� ������ ȣ�� \n";
		this->a = _a;
		this->b = _b;
	}
	~CObj()
	{
		cout <<"�Ҹ��� ȣ�� \n";
	}
};

void main()
{
	//CObj Obj2(30,40);
	//Obj2.Render();
	//Obj2.GetThis()->Render();
	/*cout <<&Obj2 <<endl;
	cout <<Obj2.GetThis() <<endl;*/

	/*CObj Obj3(100,200);
	cout <<Obj3.GetThis()<<endl;*/

	/*CObj Obj(10,20);

	int *pA = Obj.GetA();
	cout << *(Obj.GetA())<<endl;
	*pA = 39;

	cout << *(Obj.GetA())<<endl;
*/

	CObj *pObj3[3];

	for (int i = 0; i<3; i++)
	{
		pObj3[i] = new CObj;
		pObj3[i]->Render();
		delete pObj3[i];
	}

}