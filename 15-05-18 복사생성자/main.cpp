#include <iostream>
using namespace std;

class MyClass
{
private:
	int num1;
	int num2;
public:
	MyClass(int a, int b)
	{
		num1 = a;
		num2 = b;
	}
	void showData()
	{
		cout <<"num1 : "<<num1 <<", num2 : "<< num2<<endl;
	}
};
void main()
{
	MyClass c1(10,20);
	MyClass c2 = c1;

	c2.showData();


}
/* 복사 생성자 : 자신과 같은 자료형의 객체를 인수로 전달 하는 생성자 */