#include <iostream>
using namespace std;

void sub();

int i = 100;


void main()
{
	i += 10;
	cout <<"i = "<< i << endl;

	sub();
	cout <<"i = "<< i <<endl;



}

void sub()
{
	extern int i; //��� ������ �ϴ� ��� ���� 
	i += 50;
}


