#include <iostream>
using namespace std;

void main()
{
	int stdNum;
	int *stdScore;

	cout<<"학생의 수 입력 : ";
	cin >> stdNum;

	stdScore = new int[stdNum];

	int nTotal = 0;
	for (int i = 0; i<stdNum; i++)
	{
		cout << i+1 <<"번 학생의 점수 : ";
		cin >> stdScore[i];
		nTotal += stdScore[i];
	}

	printf("전체 학새의 점수 평균은 %.1f입니다 \n",(float)nTotal/stdNum);

	delete []stdScore;
	stdScore = NULL;


}