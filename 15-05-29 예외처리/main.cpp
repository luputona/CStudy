#include <iostream>
using namespace std;


void main()
{
	int a, b;

	cout <<"�ΰ��� ���� �Է�:";
	cin >> a >>b;
	/*if (b ==0)
	{
		cout <<" ������ 0�� �� �� �����ϴ�.\n";
	}
	else
		cout <<"a/b�� ���� "<<a/b <<"�Դϴ�."<<endl;*/


	try
	{
		if (b == 0) 
		{
			throw b;
		}
		cout <<a <<"�� "<<b<<"�� ���� ���� "<<a/b<<"�Դϴ�"<<endl;
	}
	catch (int exception)
	{
		cout <<"���� �߻�, ������ ���� " <<b<<"�� �ɼ� �����ϴ�."<<endl;
	}
}