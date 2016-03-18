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

	cout << "학생 이름 입력 : ";
	cin >> szName;
	cout <<"국어 점수 입력 : ";
	cin >>nKor;
	cout << "영어 점수 입력 : ";
	cin >> nEng;
	cout << "수학 점수 입력 : ";
	cin >> nMath;
	
	nTotal = nKor + nEng + nMath;
	fAvg = (float)nTotal/3;


	cout.precision(2);
	cout <<fixed;
	cout <<"\n			<전체 성적 보기>				\n";
	cout <<"    이름    국어    영어    수학       평균\n";
	cout <<setw(7)<<szName;
	cout <<setw(8)<<nKor;
	cout <<setw(8)<<nEng;
	cout <<setw(8)<<nMath;
	cout <<setw(12)<<fAvg;

	cout <<endl;



	system("pause");
}