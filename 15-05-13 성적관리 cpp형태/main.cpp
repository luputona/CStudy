#include <iostream>
using namespace std;

typedef struct STUDENT
{
	char szName[20];
	char chGrade[3];
	int nKor;
	int nEng;
	int nMath;
	int nTotal;
	float fAvg;
}INFO;



void Input(INFO *szName,int nMax , INFO nKor,INFO nEng,INFO nMath);
void Output();

void main()
{	
	int nMax = 0;
	char szName[20] = {0,};
	int nKor = 0;
	int nEng = 0;
	int nMath = 0;


	cout << "�л��� �Է� : ";
	cin >> nMax;

	INFO *tInfo = new INFO[nMax];
	for (int i = 0; i<nMax; i++)
	{
		cout << " �̸� �Է� : ";
		cin >> tInfo[i].szName;
		cout << "���� ���� : ";
		cin >> tInfo[i].nKor;
		cout << "���� ���� : ";
		cin >> tInfo[i].nEng;
		cout <<"���� ���� : ";
		cin >> tInfo[i].nMath;		
		//Input();
	}
	Output(nMax);

}

void Input(INFO *szName,int nMax , INFO nKor,INFO nEng,INFO nMath)
{
	INFO *tInfo = new INFO[nMax];

	for (int i = 0 ; i<nMax; i++)
	{		
		//cout << " �̸� �Է� : ";
		cin >> tInfo[i].szName;
		//cout << "���� ���� : ";
		cin >> tInfo[i].nKor;
		//cout << "���� ���� : ";
		cin >> tInfo[i].nEng;
		//cout <<"���� ���� : ";
		cin >> tInfo[i].nMath;
		
		tInfo[i].nTotal = tInfo[i].nKor + tInfo[i].nEng + tInfo[i].nMath;
		tInfo[i].fAvg = (float)tInfo[i].nTotal/nMax;
	}
	

}
void Output(int nMax)
{
	INFO *tInfo = new INFO[nMax];

	cout <<"�̸�	����	����	����	����	���	��� \n";
	for (int i = 0; i< nMax; i++)
	{
		cout << tInfo[i].szName <<"	"<< tInfo[i].nKor<<"	"<<tInfo[i].nEng<<"	"<<tInfo[i].nMath<<"	"<<tInfo[i].nTotal<<"	"<<tInfo[i].fAvg<<tInfo[i].chGrade<<endl;
	}

}





