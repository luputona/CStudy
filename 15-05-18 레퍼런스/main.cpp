#include <iostream>
using namespace std;

void main()
{
	int target = 20;

	//선언과 동시에 반드시 초기화 
	int &ref = target;

	//레퍼런스와 함께 정보 확인
	cout <<"ref = " <<ref <<endl;
	cout <<"target = " <<target <<endl;
	cout <<"&ref = "<<&ref << endl;
	cout <<"&target = "<<&target <<"\n\n";

	//레퍼런스를 통해 값 변경
	ref = 100;

	cout <<"ref = "<<ref<<endl;
	cout <<"target = "<<target<<"\n\n";

	//새로운 변수를 참조하도록 설정]
	int target2 = 200;
	ref = target2;

	cout <<"ref = "<<ref << "\n\n";

	//다시 레퍼런스를 통해 값 변경
	ref = 0;

	cout <<"ref = " <<ref <<endl;
	cout <<"target = " <<target <<endl;
	cout <<"target2 = "<<target2 <<endl;
	



}