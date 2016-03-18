#include <iostream>

using namespace std;


template <typename T>
T max(T& a, T& b)
{
	return (a >b ? a:b);
}
/* 함수 인자 값에 기본적인 자료형을 넣어도 그 자료형에 맞게 들어가진다. 템플릿이 없다면 직접 여러개의 함수를 정의 */

void main()
{
	int num1 = 5;
	int num2 = 3;
	int big = max(num1,num2);

	cout <<"num1 = "<<num1 <<", num2 = "<< num2 << endl;
	cout <<"더 큰수는 "<<big <<"입니다." <<endl;

	double d1= 3.14, d2 = 4.17;
	double d_big = max(d1,d2);

	cout <<"num1 = "<<d1<<", num2 = "<<d2<<endl;
	cout <<"더 큰 수는 "<<d_big <<"입니다."<<endl;

	cout <<"======================="<<endl;

	



}











