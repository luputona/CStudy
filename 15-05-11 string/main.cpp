#include <iostream>
#include <string>
using namespace std;


void main()
{
	char *pch = "C++ Language";
	char ach[8] ="Program";
	string strName = "sbs아카데미";
	string strName2 = "게임프로그래밍반";

	

	cout <<"pch = "<<pch<<endl;
	cout <<"ach = "<<ach<<endl;
	cout <<"strName = "<<strName<<endl;

	strName =strName + strName2;

	cout <<"strName = "<<strName<<endl;

	if (strName == strName2)
	{
		cout <<"같음"<<endl;
	}
	else
		cout <<"안같음"<<endl;
	




	system("pause");
}