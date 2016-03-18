#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	//멤버함수
	void Print()const;

	//생성자
	Point();
	Point(int x,int y);
	Point(const Point& pt);

	//접근자
	void setX(int x);
	void SetY(int y);
	int GetX()const 
	{
		return x;
	};
	int GetY()const
	{
		return y;
	};
};
inline void Point::setX(int x)
{
	if (x<0)
	{
		this->x = 0;
	}
	else if (x>100)
	{
		this->x = 100;
	}
	else 
		this->x = x;
}
inline void Point::SetY(int y)
{
	if (x<0)
	{
		this->y = 0;
	}
	else if (x>100)
	{
		this->y = 100;
	}
	else 
		this->y = y;
}

Point::Point(const Point &pt)
{
	x = pt.x;
	y = pt.y;
}

Point::Point(int x,int y)
{
	setX(x);
	SetY(y);
}
Point::Point()
{
	x = y = 0;
}

void Point::Print()const
{
	cout <<"("<<x<<", "<<y<<")\n";
}

void Area(const Point &pt);

void main()
{
	Point pt(50,50);

	Area(pt);

}
//객체를  인자를 넘길때 const Point&처럼 const 타입의 레퍼런스를 넘기는 것이 일반적인 방법
void Area( const Point &pt )
{
	int area = pt.GetX() * pt.GetY();

	cout <<"(0,0)과 이 점이 이루는 사각형의 면적 "<<area<<endl;
}


