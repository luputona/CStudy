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

inline int add(int a,int b) // inline �� ���� ������ .
{
	return a+b;
}

void main()
{
	/*int num;
	num = input();
	cout <<"num : "<<num << endl;*/


	/*int a, b, c;
	cout << "�ΰ��� ������ �Է� �ϼ��� : ";
	cin >>a >> b;
	c = max(a,b);
	cout << "�ִ밪 : " << c ;*/


	//float x, y, z;
	//cout << " �ΰ��� �Ǽ��� �Է� �ϼ��� : ";
	//cin >> x >> y ;
	//z = add(x,y);
	//cout << x <<" + "<< y <<" = " << z;


	/*int n ;
	cout <<"���ڸ� �Է� �ϼ��� : ";
	cin >> n;*/

	/*
	char ch;
	int n;
	cout << "���ڿ� ������ �Է� �ϼ��� : ";
	cin >>ch>>n;
	chPrint(ch,n);*/

	/*int a= 5, b= 10;
	cout <<"���� �Լ� ȣ���� �� a = "<<a<<" , b= " <<b<<endl;
	swap(a,b);
	cout <<"���� �Լ� ȣ�� �� ���� a = "<<a<<",b = "<<b<<endl;*/

	/*
	int x,y,z, max1;

	cout << " 3���� ������ �Է� �ϼ��� : " ;
	cin >> x>>y>>z;
	maxFunc(x,y,z,&max1);
	cout <<"�ִ밪 : "<<max1<<endl;*/

	/*
	int a = 5;
	cout <<"a�� �� : "<< a <<endl;
	cout <<"a�� �ּ� : "<< &a <<endl;
	reff(a);*/

	//int x, n;
	//long pwr;
	//cout << "x�� n�� �Է� �ϼ��� :";
	//cin >> x >> n;
	//pwr = power(x,n);
	//cout <<x <<"�� "<<n<<"�� : "<<pwr<<endl;

	/*
	int hap;
	hap = powerSum();
	cout << " 1���� 10���� ������ �� : "<< hap<<endl;*/

	/*int day;
	day =snail();
	cout <<"�����̰� 50m �����µ� �ɸ� ��¥ : "<<day<<endl;*/

	/*int n ;
	long result;
	cout <<"������ �Է� �ϼ��� : ";
	cin >> n;
	result = fact(n);
	cout << n << " = "<<result<<endl;*/

	/*int n, hap;
	cout <<"������ �Է� �ϼ��� : ";
	cin >> n;
	hap = sum(n);
	cout << "1 + 2 +........"<<n<< " = "<<hap <<endl;*/


	//int sum1;
	//sum1 = add(10,20);
	//cout << "�հ� : "<<sum1 <<endl;

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
	cout << "x�� �� :"<<x <<endl;
	cout <<"x�� �ּ� : "<<&x <<endl;
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

	cout << " ���ڸ� �Է� �ϼ��� : ";
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
//	cout <<"m �� n �� �Է��ϼ��� : ";
//	cin >> m >> n;
//
//	hap = sum(m,n);
//
//	cout << m <<"���� "<<n <<"������ �� : "<< hap<<endl;
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