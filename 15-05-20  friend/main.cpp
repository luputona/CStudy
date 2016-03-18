#include <iostream>
using namespace std;

class B; //BŬ������ ���縦 �˸�

	
/* ���漱�� BŬ������ �ؿ� ���� ��� �ؿ� �ִٰ� �˷��ִ� C���� �Լ� ����κа� ���� ���� */
class A
{
private:
	int adata;
public:
	A(int data)
	{
		adata = data;
	}
	void ShowData(B& b);
	friend class B;

};

//������ Ŭ���������� private�� ���� ����

class B
{
private:
	int bdata;
public:
	B(int data)
	{
		bdata = data;
	}
	void ShowData(A& a)
	{
		cout <<"a.data : "<<a.adata <<endl;
	}
	friend class A;
};

void A::ShowData(B& b)
{
	cout <<"b.data : "<<b.bdata<<endl;
}

void main()
{
	A a(10);
	B b(20);

	a.ShowData(b);
	b.ShowData(a);
}
/*Frined �� ���� �������� ���� ������ �ʴ´� 
�ܺο��� private����� ������ �� �ְ� �Ǹ� ��ü���� �Ӽ��� �ϳ��� ���������� ������ �����̴�.*/