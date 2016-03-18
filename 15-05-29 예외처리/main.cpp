#include <iostream>
using namespace std;


void main()
{
	int a, b;

	cout <<"두개의 정수 입력:";
	cin >> a >>b;
	/*if (b ==0)
	{
		cout <<" 제수는 0이 될 수 없습니다.\n";
	}
	else
		cout <<"a/b의 몫은 "<<a/b <<"입니다."<<endl;*/


	try
	{
		if (b == 0) 
		{
			throw b;
		}
		cout <<a <<"를 "<<b<<"로 나눈 몫은 "<<a/b<<"입니다"<<endl;
	}
	catch (int exception)
	{
		cout <<"예외 발생, 나누는 수는 " <<b<<"가 될수 없습니다."<<endl;
	}
}