#include <iostream>
using namespace std;

void sum(int i);

static int tot = 10;

void main()
{
	for (int i = 0 ; i<5; i++)
	{
		sum(i);
	}

}
void sum(int i)
{
	static int hap = 0;

	hap += i;
	tot +=i;

	cout <<"���� ���� ���� hap : "<<hap <<endl;
	cout <<"�ܺ� ���� ���� tot : "<<tot <<endl;
}



