#include <iostream>
using namespace std;

void func(int num1, int num2 = 30);

void main()
{
	int a = 10;

	func(a,20);
	func(a);
}

void func(int num1, int num2)
{
	cout << "num1 = "<<num1 <<endl;
	cout << "num2 = " <<num2 <<endl;
}