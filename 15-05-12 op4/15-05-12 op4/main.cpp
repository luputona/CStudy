#include <iostream>
using namespace std;


void main()
{
	int inputSec, hour, min ,sec;

	cout << "�ʸ� �Է� �ϼ��� : ";
	cin >> inputSec;

	hour = inputSec / 3600;
	min = (inputSec % 3600 ) /60 ;
	sec =(inputSec % 3600)  % 60;

	cout << hour<<"�ð�"<<min <<"��"<<sec <<"��\n";



	system("pause");
}
