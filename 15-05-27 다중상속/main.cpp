#include <iostream>
using namespace std;

class ParentOne
{
public:
	void funcOne()
	{
		cout <<"ParentOne �޼ҵ� ȣ��"<<endl;
	}
};

class ParentTwo
{
public:
	void funcTwo()
	{
		cout <<"ParentTwo �޼ҵ� ȣ�� "<<endl;
	}

};
/*���� �θ� Ŭ������ ����ϴ� ���� ���߻���� ���� ������ �ʴ´�.
�޼ҵ� �Ϲ��� ��ĥ�� � �޼ҵ带 �ҷ��� ���� ��ȣ�� �̶���� �ڵ尡 ���������� �� �������� �������� ���� �� �ֵ�.*/

class Child : public ParentOne, public ParentTwo
{
public:
	void func()
	{
		funcOne();
		funcTwo();
	}
};

void main()
{
	Child C;
	C.func();
}