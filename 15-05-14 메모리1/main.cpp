#include <iostream>
using namespace std;

void func();

void main()
{
	/*int a = 10;

	cout <<"main() �Լ����� a = "<<a<<"\n"<<endl;

	func();*/

/*
	register int a,b,c;
	a = 10;
	b= 20;
	c = 30;
	cout << " a = " << a <<endl;
	cout << " b = " << b << endl;
	cout << " c = " <<c <<endl;
	cout <<"�������� ������ ũ�� : " <<sizeof(a)<<endl;*/


	func();
	func();
	func();



	



}

void func()
{
	/*int a = 20;
	cout << "func() �Լ����� a = "<<a<<endl;*/

	static int x; //static������ �ڵ����� �ʱ�ȭ �ȴ� 
	cout <<"x = "<<x <<endl;
	x++;
}



