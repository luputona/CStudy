#include <iostream>
using namespace std;

class MyClass
{
private:
	int num1;
	int num2;
public:
	MyClass(int a, int b)
	{
		num1 = a;
		num2 = b;
	}
	void showData()
	{
		cout <<"num1 : "<<num1 <<", num2 : "<< num2<<endl;
	}
};
void main()
{
	MyClass c1(10,20);
	MyClass c2 = c1;

	c2.showData();


}
/* ���� ������ : �ڽŰ� ���� �ڷ����� ��ü�� �μ��� ���� �ϴ� ������ */