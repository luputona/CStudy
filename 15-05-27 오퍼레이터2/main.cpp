#include <iostream>
using namespace std;


class Myclass
{
private:
	int num1;
	int num2;
public:
	Myclass(int num1,int num2) : 
	num1(num1),
	num2(num2)
	{

	}
	void ShowNum()
	{
		cout <<"num1 : "<<num1<<", num2: "<<num2<<endl;
	}
	Myclass operator+(int num)
	{
		return Myclass(num1+num, num2+num);
	}
	friend Myclass operator+(int num,Myclass ref)
	{
		ref.num1 += num;
		ref.num2 += num;

		return ref;
		/*프렌드 함수를 이용한다.
		프렌드 키워드가 붙었다는건 멤버함수가 아니라는 거다. 프렌드 함수를 이용하는게 일반적 
		이렇게 하면 왼쪽에 피연산자 오른쪽에 객체가 와도 가능*/
	}
};

void main()
{
	Myclass mc1(10,20);
	//Myclass result = mc1 + 30;
	Myclass result =  30 + mc1 + 10;
	//패연산자가 왼쪽이고 객체가 오른쪽이면 오류가 난다.

	mc1.ShowNum();
	result.ShowNum();



}