#include <iostream>
using namespace std;

class MyClass
{
public:
	const int count;
	int &ref;
	int sample;
	MyClass();
	
};
MyClass::MyClass() :
count(100),
ref(sample)
{
	sample = 200;
}
/*Const 키워드로 상수화된 변수나ref 타입은 선언과 동시에 초기화 해야 한다.
클래스에서 초기화 리스트를 이용하지 않았을때 에러*/


void main()
{
	MyClass c;

	cout <<"c.count = " << c.count <<endl;
	cout <<"c.ref = "<<c.ref <<endl;

	//생성하자마자 바로 초기화
	//c.count = 100;
	//c.ref = c.sample;
}
