#include <iostream>

using namespace std;


template <typename T>
T max(T& a, T& b)
{
	return (a >b ? a:b);
}
/* �Լ� ���� ���� �⺻���� �ڷ����� �־ �� �ڷ����� �°� ������. ���ø��� ���ٸ� ���� �������� �Լ��� ���� */

void main()
{
	int num1 = 5;
	int num2 = 3;
	int big = max(num1,num2);

	cout <<"num1 = "<<num1 <<", num2 = "<< num2 << endl;
	cout <<"�� ū���� "<<big <<"�Դϴ�." <<endl;

	double d1= 3.14, d2 = 4.17;
	double d_big = max(d1,d2);

	cout <<"num1 = "<<d1<<", num2 = "<<d2<<endl;
	cout <<"�� ū ���� "<<d_big <<"�Դϴ�."<<endl;

	cout <<"======================="<<endl;

	



}











