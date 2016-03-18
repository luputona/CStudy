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
		/*������ �Լ��� �̿��Ѵ�.
		������ Ű���尡 �پ��ٴ°� ����Լ��� �ƴ϶�� �Ŵ�. ������ �Լ��� �̿��ϴ°� �Ϲ��� 
		�̷��� �ϸ� ���ʿ� �ǿ����� �����ʿ� ��ü�� �͵� ����*/
	}
};

void main()
{
	Myclass mc1(10,20);
	//Myclass result = mc1 + 30;
	Myclass result =  30 + mc1 + 10;
	//�п����ڰ� �����̰� ��ü�� �������̸� ������ ����.

	mc1.ShowNum();
	result.ShowNum();



}