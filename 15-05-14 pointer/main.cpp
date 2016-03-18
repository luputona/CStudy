#include <iostream>
using namespace std;



void main()
{
	/*int a = 23;
	int *pa;
	pa = &a;
	cout <<"&a = "<<&a<<", a = "<<a<<endl;
	cout <<"pa = "<<pa<<", pa = "<<*pa<<endl;*/


	////포인터는 항상 4바이트 주소공간만 받을 수 있다 
	//char ch, *pch;
	//int i, *pi;
	//double d, *pd;

	//ch = 'A';
	//i = 10;
	//d = 12.324;
	//pch = &ch;
	//pi = &i;
	//pd = &d;
	//cout <<"*pch = "<<*pch <<" , pch 의 길이 = "<<sizeof(pch)<<endl;
	//cout <<"*pi = "<<*pi <<" , pi 의 길이 = "<<sizeof(pi)<<endl;
	//cout <<"*pd = "<<*pd <<" , pd 의 길이 = "<<sizeof(pd)<<endl;

	
	//int x[5] = {1,2,3,4,5};
	//int *ptr, i;
	//ptr = x;
	//for (i= 0; i<5; i++)
	//{
	//	cout <<x[i]<<", "<<*(ptr+i)<<endl;
	//}
	//for (i = 0; i<5; i++)
	//{
	//	cout << &x[i] <<", "<<ptr+i<<endl;
	//}


	/*int a[] = {10,20,30};
	int *pa;
	pa = a;
	cout <<"*pa + 1	: "<<*pa+1<<endl;
	cout <<"*(pa+1)	: "<<*(pa+1)<<endl;
	cout <<"*(pa++)	: " <<*pa++<<endl;
	cout <<"(*pa)++	: "<<(*pa)++<<endl;
	cout <<"*(++pa)	: "<<*++pa<<endl;
	cout <<"++(*pa)	: " << ++*pa<<endl;
*/

	int a[5] = {15,21,36,48,52};
	int *pa, i, sum =0;

	pa = a;

	for ( i = 0; i<5; i++)
	{
		sum += *pa++;
	}
	cout <<"배열 요소의 합 : "<<sum<<endl;

}