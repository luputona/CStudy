#include <iostream>
using namespace std;

int abs(int x);

void main()
{
	int a ,b;

	cout <<"정수를 입력 하ㅔ요 : ";
	cin >> a;

	b = abs(a);

	cout << a << "의 절대값 : "<<b<<endl;





	system("pause");
}
int abs(int x)
{
	int y;

	if (x > 0)
	{
		y = x;
	}
	else
		y = -x;

	return y;
}

