#include <iostream>
using namespace std;

class Parent
{
public:
	//���� ���� �Լ� , �θ� ȣ���ϸ� ������ �ڽ����� ���� 
	virtual void Func() = 0;	
	
	/*virtual void Func()
	{
		cout <<"�θ� Ŭ���� func �޼ҵ� ȣ�� !!"<<endl;
	}*/
};

class Child : public Parent
{
public:
	virtual void Func()
	{
		cout <<"�ڽ� Ŭ���� func �޼ҵ� ȣ�� !!"<<endl;
	}
};
/*������ ���� pP�� �� Ŭ���� ��ü�� ��Ƽ� func�޼ҵ带 ȣ���ϸ� ���θ� Ŭ������ ȣ���� �ȴ� .�� ����� �ذ��ϱ� ���ؼ� �����Լ��� �ʿ��ϴ� .

�����Լ��� ����Ǹ� �θ� Ÿ������ ����� �����Ϳ� �ڽ��ڷ������� ��Ƽ� ȣ���ϸ� �������Լ��� ���ؼ� �ڽ� �޼ҵ带 ȣ���Ҽ� �ִ�. ����� �θ��Լ��� ȣ��*/
void main()
{

	//Parent P,*pP;
	//Child C;

	//pP = &P;

	//pP->Func();
	//pP = &C;

	//pP->Func();
	//--------------------

	Parent *P;

	P = new Child;
	P->Func();


}


