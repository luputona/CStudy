#include <iostream>
using namespace std;

class MyClass
{
public:
	const int count;
	int &ref;
	int sample;
	MyClass();
	
};
MyClass::MyClass() :
count(100),
ref(sample)
{
	sample = 200;
}
/*Const Ű����� ���ȭ�� ������ref Ÿ���� ����� ���ÿ� �ʱ�ȭ �ؾ� �Ѵ�.
Ŭ�������� �ʱ�ȭ ����Ʈ�� �̿����� �ʾ����� ����*/


void main()
{
	MyClass c;

	cout <<"c.count = " << c.count <<endl;
	cout <<"c.ref = "<<c.ref <<endl;

	//�������ڸ��� �ٷ� �ʱ�ȭ
	//c.count = 100;
	//c.ref = c.sample;
}
