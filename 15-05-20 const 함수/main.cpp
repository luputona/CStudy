#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	//����Լ�
	void Print()const;

	//������
	Point();
	Point(int x,int y);
	Point(const Point& pt);

	//������
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
//��ü��  ���ڸ� �ѱ涧 const Point&ó�� const Ÿ���� ���۷����� �ѱ�� ���� �Ϲ����� ���
void Area( const Point &pt )
{
	int area = pt.GetX() * pt.GetY();

	cout <<"(0,0)�� �� ���� �̷�� �簢���� ���� "<<area<<endl;
}


