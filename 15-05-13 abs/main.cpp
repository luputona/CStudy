#include <iostream>
using namespace std;

int abs(int x);

void main()
{
	int a ,b;

	cout <<"������ �Է� �ϤĿ� : ";
	cin >> a;

	b = abs(a);

	cout << a << "�� ���밪 : "<<b<<endl;





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

