#include <iostream>
using namespace std;

void main()
{
	int stdNum;
	int *stdScore;

	cout<<"�л��� �� �Է� : ";
	cin >> stdNum;

	stdScore = new int[stdNum];

	int nTotal = 0;
	for (int i = 0; i<stdNum; i++)
	{
		cout << i+1 <<"�� �л��� ���� : ";
		cin >> stdScore[i];
		nTotal += stdScore[i];
	}

	printf("��ü �л��� ���� ����� %.1f�Դϴ� \n",(float)nTotal/stdNum);

	delete []stdScore;
	stdScore = NULL;


}