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

	cout <<"내부 정적 변수 hap : "<<hap <<endl;
	cout <<"외부 정적 변수 tot : "<<tot <<endl;
}



