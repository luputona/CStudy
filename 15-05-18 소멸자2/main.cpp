#include <iostream>
using namespace std;

class Position
{
private:
	int x;
	int y;
public:
	Position(int a, int b);
	~Position();
	void showData();

};

Position::Position( int a, int b )
{
	x = a;
	y = b;
	cout << "������ ȣ��"<<endl;
}

Position::~Position()
{
	cout <<"�Ҹ��� ȣ��"<<endl;
}

void Position::showData()
{
	cout <<"x ��ǥ : "<<x<<endl;
	cout <<"y ��ǥ : "<<y<<endl;
}
void main ()
{
	Position curr(10,20);

	curr.showData();
}