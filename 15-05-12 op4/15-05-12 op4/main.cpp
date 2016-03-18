#include <iostream>
using namespace std;


void main()
{
	int inputSec, hour, min ,sec;

	cout << "초를 입력 하세요 : ";
	cin >> inputSec;

	hour = inputSec / 3600;
	min = (inputSec % 3600 ) /60 ;
	sec =(inputSec % 3600)  % 60;

	cout << hour<<"시간"<<min <<"분"<<sec <<"초\n";



	system("pause");
}
