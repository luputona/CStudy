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
	cout << "»ý¼ºÀÚ È£Ãâ"<<endl;
}

Position::~Position()
{
	cout <<"¼Ò¸êÀÚ È£Ãâ"<<endl;
}

void Position::showData()
{
	cout <<"x ÁÂÇ¥ : "<<x<<endl;
	cout <<"y ÁÂÇ¥ : "<<y<<endl;
}
void main ()
{
	Position curr(10,20);

	curr.showData();
}