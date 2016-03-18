#include <iostream>
using namespace std;

class Position
{
private:
	int x;
	int y;
public:
	Position();
	Position(int a, int b);
	void SetXY(int a,int b);
	void showData();

};

Position::Position()
{
	x = 0;
	y = 0;
}

Position::Position( int a, int b )
{
	x = a;
	y = b;
}

void Position::SetXY( int a,int b )
{
	x = a;
	y = b;
}

void Position::showData()
{
	cout <<"X좌표 : "<<x <<endl;
	cout <<"Y좌표 : "<<y <<endl;
}

void main()
{	
	//Position posi[3]; //객체 배열 posi 를 선언 한다.
	//
	//posi[0].SetXY(10,20);
	//posi[1].SetXY(20,30);
	//posi[2].SetXY(30,40);

	//for (int i = 0; i<3; i++) //객체 배열 posi의 각 배열 요소 출력
	//{
	//	posi[i].showData();
	//}

	

	//Position posi[3] = {Position(10,20),Position(20,30),Position(30,40)};
	//Position *ptr;

	//ptr = posi; //객체 배열 posi 의 시작 주소를 객체 포인터 ptr에 대입

	//for (int i = 0 ; i<3;i++)
	//{
	//	ptr[i].showData();
	//}



	//Position curr1(10,20);
	//Position curr2(curr1);	//positoin 클래스형 객체 curr1을 매개변수로 전달해서 curr2객체를 초기화 

	//curr1.showData();
	//curr2.showData();

	Position curr1(10,20);
	Position posi[3] = {Position(curr1),Position(curr1),Position(curr1)};

	for (int i = 0; i<3; i++) //객체 배열 posi의 각 배열 요소 출력
	{
		posi[i].showData();
	}

}



