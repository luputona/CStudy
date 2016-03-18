#include <iostream>
using namespace std;

class Parent
{
public:
	//순수 가상 함수 , 부모꺼 호출하면 무조건 자식으로 간다 
	virtual void Func() = 0;	
	
	/*virtual void Func()
	{
		cout <<"부모 클래스 func 메소드 호출 !!"<<endl;
	}*/
};

class Child : public Parent
{
public:
	virtual void Func()
	{
		cout <<"자식 클래스 func 메소드 호출 !!"<<endl;
	}
};
/*포인터 변수 pP에 각 클래스 객체를 담아서 func메소드를 호출하며 ㄴ부모 클래스만 호출이 된다 .이 방법을 해결하기 위해서 가상함수가 필요하다 .

가상함수로 선언되면 부모 타입으로 선언되 포인터에 자식자료형으로 담아서 호출하며 ㄴ가상함수를 통해서 자식 메소드를 호출할수 있다. 현재는 부모함수만 호출*/
void main()
{

	//Parent P,*pP;
	//Child C;

	//pP = &P;

	//pP->Func();
	//pP = &C;

	//pP->Func();
	//--------------------

	Parent *P;

	P = new Child;
	P->Func();


}


