#include <iostream>
using namespace std;

class ParentOne
{
public:
	void funcOne()
	{
		cout <<"ParentOne 메소드 호출"<<endl;
	}
};

class ParentTwo
{
public:
	void funcTwo()
	{
		cout <<"ParentTwo 메소드 호출 "<<endl;
	}

};
/*여러 부모 클래스를 상속하는 형태 다중상속은 많이 쓰이지 않는다.
메소드 일므이 겹칠때 어떤 메소드를 불러야 할지 모호성 이라던가 코드가 복잡해지는 등 여러가지 문제점이 생길 수 있따.*/

class Child : public ParentOne, public ParentTwo
{
public:
	void func()
	{
		funcOne();
		funcTwo();
	}
};

void main()
{
	Child C;
	C.func();
}