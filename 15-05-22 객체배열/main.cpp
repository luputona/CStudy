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
	cout <<"X��ǥ : "<<x <<endl;
	cout <<"Y��ǥ : "<<y <<endl;
}

void main()
{	
	//Position posi[3]; //��ü �迭 posi �� ���� �Ѵ�.
	//
	//posi[0].SetXY(10,20);
	//posi[1].SetXY(20,30);
	//posi[2].SetXY(30,40);

	//for (int i = 0; i<3; i++) //��ü �迭 posi�� �� �迭 ��� ���
	//{
	//	posi[i].showData();
	//}

	

	//Position posi[3] = {Position(10,20),Position(20,30),Position(30,40)};
	//Position *ptr;

	//ptr = posi; //��ü �迭 posi �� ���� �ּҸ� ��ü ������ ptr�� ����

	//for (int i = 0 ; i<3;i++)
	//{
	//	ptr[i].showData();
	//}



	//Position curr1(10,20);
	//Position curr2(curr1);	//positoin Ŭ������ ��ü curr1�� �Ű������� �����ؼ� curr2��ü�� �ʱ�ȭ 

	//curr1.showData();
	//curr2.showData();

	Position curr1(10,20);
	Position posi[3] = {Position(curr1),Position(curr1),Position(curr1)};

	for (int i = 0; i<3; i++) //��ü �迭 posi�� �� �迭 ��� ���
	{
		posi[i].showData();
	}

}



