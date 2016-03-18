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
	extern int i; //어디서 선언을 하던 사용 가능 
	i += 50;
}


