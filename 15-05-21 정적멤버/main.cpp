//#include <iostream>
//using namespace std;
//
//
////클래스 자기 자신의 pointer this 
//class Student
//{
//private:
//	int number;
//	char name[20];
//	int kor;
//	int eng;
//	int mat;
//	//static int stdCnt;
//public:
//	//Student();
//	~Student();
//	Student(int num, char n[20],int k,int e,int m);
//	void showData();
//	//static void showStdCnt();//정적멤버가 private 일때는 정적 함수를 통해서 호출 
//
//};
//
//Student::~Student()
//{
//	cout << "소멸자가 호출되었습니다\n";
//}

//
//int Student::stdCnt = 0; //정적멤버 초기화 
//
//Student::Student( int num, char n[20],int k,int e,int m )
//{
//	number = num;
//	strcpy(name,n);
//	kor = k;
//	eng = e;
//	mat = m;
//
//	stdCnt++;
//
//}
//
//Student::Student()
//{
//	number = 1001;
//	strcpy(name,"김철수");
//	kor = 100;
//	eng = 90;
//	mat = 95;
//
//}
//
//
//Student::Student( int num, char n[20],int k,int e,int m )
//{
//	number = num;
//	strcpy(name,n);
//	kor = k;
//	eng = e;
//	mat = m;
//}
//
//
//void Student::showData()
//{
//	cout <<"학번 : "<<this->number<<endl;
//	cout <<"이름 : "<<this->name<<endl;
//	cout <<"국어 : "<<this->kor<<endl;
//	cout <<"영어 : "<<this->eng<<endl;
//	cout <<"수학 : "<<this->mat<<endl;
//
//
//}
//void main()
//{
//	Student *kim;
//	kim = new Student(1001,"김철수",100,89,60);
//
//	kim->showData();
//	
//	delete kim;
//
//}


//
//void Student::showStdCnt()
//{
//	cout <<"객체의 개수 : "<<stdCnt<<endl;
//}
//
//
//void main()
//{
//	Student kim(1001,"김병호",90,70,60);
//	kim.showData();
//	kim.showStdCnt();
//
//	Student park(1002,"박명환",100,90,95);
//	park.showData();
//	park.showStdCnt();
//
//	Student choi(1003,"최대표",90,95,80);
//	choi.showData();
//	choi.showStdCnt();
//}
//
//

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
	Position &xyModify();	// position 클래스의 참조형 (레퍼런스)
							//반환하는 함수 Position&
	void showData();


};

Position::Position()
{
	x = 0;
}

Position::Position( int a, int b )
{
	x = a;
	y = b;
}

Position & Position::xyModify()
{
	x += 10;
	y += 10;

	return *this;
}


void Position::showData()
{
	cout << "x좌표 : " <<x<<endl;
	cout <<"y좌표 : "<<y<<endl;
}

void main()
{
	Position curr(10,20);
	Position temp;

	curr.showData();
	temp = curr.xyModify();

	temp.showData();

}



