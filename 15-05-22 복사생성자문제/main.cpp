#include <iostream>
using namespace std;

class Position
{
private:
	char *name;
	int x;
	int y;
public:
	Position(char *n, int a , int b);
	Position(const Position &curr1);
	~Position();
	void showData();
};

Position::Position( char *n, int a , int b )
{
	int len;

	len = strlen(n);

	name = new char[len+1];
	strcpy(name,n);
	x = a;
	y = b;
}

Position::Position( const Position &curr1 )
{
	int len;
	len = strlen(curr1.name);

	name = new char[len +1];
	strcpy(name,curr1.name);

	x = curr1.x;
	y = curr1.y;
}

Position::~Position()
{
	delete []name;
}

void Position::showData()
{
	cout <<"ÁÂÇ¥ÀÌ¸§ : "<<name<<endl;
	cout <<"XÁÂÇ¥ : "<<x<<endl;
	cout <<"YÁÂÇ¥ : "<<y<<endl;

}

void main()
{
	Position *curr1 = new Position("Ã¹ ¹øÂ° ÁÂÇ¥ ",10,20);
	Position *curr2 = new Position(*curr1);

	curr1->showData(); 
	delete curr1;

	curr2->showData();

}






