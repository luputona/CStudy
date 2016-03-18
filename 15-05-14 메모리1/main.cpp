#include <iostream>
using namespace std;

void func();

void main()
{
	/*int a = 10;

	cout <<"main() 함수에서 a = "<<a<<"\n"<<endl;

	func();*/

/*
	register int a,b,c;
	a = 10;
	b= 20;
	c = 30;
	cout << " a = " << a <<endl;
	cout << " b = " << b << endl;
	cout << " c = " <<c <<endl;
	cout <<"레지스터 변수의 크기 : " <<sizeof(a)<<endl;*/


	func();
	func();
	func();



	



}

void func()
{
	/*int a = 20;
	cout << "func() 함수에서 a = "<<a<<endl;*/

	static int x; //static변수는 자동으로 초기화 된다 
	cout <<"x = "<<x <<endl;
	x++;
}



