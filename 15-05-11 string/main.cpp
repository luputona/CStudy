#include <iostream>
#include <string>
using namespace std;


void main()
{
	char *pch = "C++ Language";
	char ach[8] ="Program";
	string strName = "sbs��ī����";
	string strName2 = "�������α׷��ֹ�";

	

	cout <<"pch = "<<pch<<endl;
	cout <<"ach = "<<ach<<endl;
	cout <<"strName = "<<strName<<endl;

	strName =strName + strName2;

	cout <<"strName = "<<strName<<endl;

	if (strName == strName2)
	{
		cout <<"����"<<endl;
	}
	else
		cout <<"�Ȱ���"<<endl;
	




	system("pause");
}