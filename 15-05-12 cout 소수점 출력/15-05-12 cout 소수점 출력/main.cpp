#include <iostream>
#include <iomanip>
using namespace std;

//typedef struct  
//{
//	char szName[20];
//	char szGrade[4];
//	int nKor;
//	int nEng;
//	int nMath;
//	int nTotal;
//	float fAvg;
//}INFO;


void main()
{
	
	char szName[20];
	char szGrade[4];
	int nKor;
	int nEng;
	int nMath;
	int nTotal;
	float fAvg;

	cout << "�л� �̸� �Է� : ";
	cin >> szName;
	cout <<"���� ���� �Է� : ";
	cin >>nKor;
	cout << "���� ���� �Է� : ";
	cin >> nEng;
	cout << "���� ���� �Է� : ";
	cin >> nMath;
	
	nTotal = nKor + nEng + nMath;
	fAvg = (float)nTotal/3;


	cout.precision(2);
	cout <<fixed;
	cout <<"\n			<��ü ���� ����>				\n";
	cout <<"    �̸�    ����    ����    ����       ���\n";
	cout <<setw(7)<<szName;
	cout <<setw(8)<<nKor;
	cout <<setw(8)<<nEng;
	cout <<setw(8)<<nMath;
	cout <<setw(12)<<fAvg;

	cout <<endl;



	system("pause");
}