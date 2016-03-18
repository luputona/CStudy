#include <iostream>
using namespace std;


void main ()
{

	int a;
	int b; 
	a= 10;
	b =++a;
	
	cout <<"++a : "<<a <<"b: "<<b<<endl;

	a = 10;
	b = a++;

	cout <<"a++ : "<<a <<"b: "<<b<<endl;
	
	a= 10;
	b = --a;

	cout <<"--a : "<<a <<"b: "<<b<<endl;

	a = 10;
	b = a--;

	cout <<"a-- : "<<a <<"b: "<<b<<endl;

}