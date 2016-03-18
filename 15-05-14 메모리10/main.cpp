#include <iostream>
using namespace std;


void main()
{
	int *pi = new int[5];
	int i;

	for (i = 0 ; i<5; i++)
	{
		pi[i] = i;
	}

	for (i = 0; i<5; i++)
	{
		cout <<"p["<<i<<"] = "<<pi[i]<<endl;
	}
	delete pi;
	pi = NULL;
}