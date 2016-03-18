#include <iostream>
using namespace std;

void swap(int &, int &);

void main()
{
	int a = 3, b = 5;

	cout <<"[swap 함수 호출 전]"<<endl;
	cout <<"a= "<<a<<", b= "<<b<<endl;

	swap(a,b);

	cout <<"[swap 함수 호출 후]"<<endl;
	cout <<"a= "<<a<<", b= "<<b<<endl;

}

void swap(int &refA, int &refB)
{
	int temp = refA;
	refA = refB;
	refB = temp;

}