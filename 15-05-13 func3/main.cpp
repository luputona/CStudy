#include <iostream>
using namespace std;


int input();
int max(int x, int y);
float add(float a, float b);
void print(int num);
void chPrint(char ch,int n);
//void swap(int x, int y);
void swap(int *x, int *y);
void swap(int &x, int &y);
void maxFunc(int x, int y, int z, int *max1);
void reff(int &x);
long power(int x, int n);
int powerSum();
int snail();
long fact(int n);

int sum(int n);

inline int add(int a,int b) // inline 를 쓰면 빠르다 .
{
	return a+b;
}

void main()
{
	/*int num;
	num = input();
	cout <<"num : "<<num << endl;*/


	/*int a, b, c;
	cout << "두개의 정수를 입력 하세요 : ";
	cin >>a >> b;
	c = max(a,b);
	cout << "최대값 : " << c ;*/


	//float x, y, z;
	//cout << " 두개의 실수를 입력 하세요 : ";
	//cin >> x >> y ;
	//z = add(x,y);
	//cout << x <<" + "<< y <<" = " << z;


	/*int n ;
	cout <<"숫자를 입력 하세요 : ";
	cin >> n;*/

	/*
	char ch;
	int n;
	cout << "문자와 정수를 입력 하세요 : ";
	cin >>ch>>n;
	chPrint(ch,n);*/

	/*int a= 5, b= 10;
	cout <<"스왚 함수 호출전 값 a = "<<a<<" , b= " <<b<<endl;
	swap(a,b);
	cout <<"스왚 함수 호출 뒤 값은 a = "<<a<<",b = "<<b<<endl;*/

	/*
	int x,y,z, max1;

	cout << " 3개의 정수를 입력 하세요 : " ;
	cin >> x>>y>>z;
	maxFunc(x,y,z,&max1);
	cout <<"최대값 : "<<max1<<endl;*/

	/*
	int a = 5;
	cout <<"a의 값 : "<< a <<endl;
	cout <<"a의 주소 : "<< &a <<endl;
	reff(a);*/

	//int x, n;
	//long pwr;
	//cout << "x와 n을 입력 하세요 :";
	//cin >> x >> n;
	//pwr = power(x,n);
	//cout <<x <<"의 "<<n<<"승 : "<<pwr<<endl;

	/*
	int hap;
	hap = powerSum();
	cout << " 1부터 10까지 제곱의 합 : "<< hap<<endl;*/

	/*int day;
	day =snail();
	cout <<"달팽이가 50m 오르는데 걸린 날짜 : "<<day<<endl;*/

	/*int n ;
	long result;
	cout <<"정수를 입력 하세요 : ";
	cin >> n;
	result = fact(n);
	cout << n << " = "<<result<<endl;*/

	/*int n, hap;
	cout <<"정수를 입력 하세요 : ";
	cin >> n;
	hap = sum(n);
	cout << "1 + 2 +........"<<n<< " = "<<hap <<endl;*/


	//int sum1;
	//sum1 = add(10,20);
	//cout << "합계 : "<<sum1 <<endl;

}
int sum(int n)
{
	if (n ==1)
	{
		return  1;
	}
	else
		return (n + sum(n-1));

	/*int sum1 = 0;
	for (int i = n; i==n; i--)
	{
	sum1 += i;
	}*/
	
}
long fact(int n)
{
	if (n<=1)
	{
		return 1;
	}
	else
		return (n*fact(n-1));
}

int snail()
{
	int climb = 0, day = 0;

	while(1)
	{
		day++;
		climb += 5;

		if (climb >= 50)
		{
			break;
		}
		else
			climb -= 3;
	}
	return day;
}

int powerSum()
{
	int sum=0;

	for (int i = 1; i<=10; i++)
	{
		sum+=(i * i);
	}
	
	return sum;
}
long power(int x, int n)
{
	int i = 0;
	long pwr = 1;
	for (i = 1; i<=n; i++)
	{
		pwr *= x;
	}

	return pwr;
}


void reff(int &x)
{
	cout << "x의 값 :"<<x <<endl;
	cout <<"x의 주소 : "<<&x <<endl;
}
void maxFunc(int x, int y, int z, int *max1)
{
	*max1 = (x > y)? x:y;
	*max1 = (*max1 > z)? *max1 : z;

}

void swap(int &x, int &y)
{
	int temp;

	temp = x;
	x= y;
	y = temp;
}
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
//void swap(int x, int y)
//{
//	int temp;
//
//	temp = x;
//	x= y;
//	y = temp;
//}
void chPrint(char ch,int n)
{
	int i = 0;
	for (i = 1; i<=n; i++)
	{
		cout << ch <<" ";
	}
}


void print(int num)
{
	cout << num <<endl;
}
float add(float a, float b)
{
	return a+b;
}


int max(int x, int y)
{
	return ((x>y)? x:y);
}
int input()
{
	int n ;

	cout << " 숫자를 입력 하세요 : ";
	cin >> n ;

	return n;
}








//
//int sum(int m, int n);
//
//void main()
//{
//	int m,n,hap;
//
//	cout <<"m 과 n 을 입력하세요 : ";
//	cin >> m >> n;
//
//	hap = sum(m,n);
//
//	cout << m <<"부터 "<<n <<"까지의 합 : "<< hap<<endl;
//
//
//
//
//}
//
//int sum(int m, int n)
//{
//	int i, hap=0;
//
//	for (i = m; i<=n; i++)
//	{
//		hap += i;
//	}
//
//	return hap;
//}