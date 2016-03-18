#include <iostream>
using namespace std;

/*정적멤버static 키워드를 이용
C에서는 어떤함수에서든 사용가능한 변수 
c++클래스 안에서 사용하면 클래스 객체의 정적멤버가 된다.
정적멤버변수는 클래스 밖에서 초기화 한다.*/


class Student
{
public:
	string name; //c++의 문자열 자료형
	int sNo;

	//생성자 ,소멸자
	Student(const string &name, int sNo);
	~Student();
public:
	//정적멤버
	static int studentCount;
	static void PrintStdCount();
};

//정적 멤버 변수
int Student::studentCount = 0;

void Student::PrintStdCount()
{
	cout <<"Student 객체 수 : "<<studentCount <<endl;
}
Student::Student(const string &name, int sNo)
{
	studentCount++;

	this->name = name;
	this->sNo = sNo;
}

Student::~Student()
{
	studentCount--;
}

void Func()
{
	Student s1 ("전지",123);
	Student s2("옥유",234);

	Student::studentCount++;
	Student::PrintStdCount();
}
//다른 함수나 메인등 다른곳에서 사용할때 클래스명 ::정적변수 
void main()
{
	//객체 생성없이 호출 가능 
	Student::PrintStdCount();

	Student s("윤영",345);
	Student::PrintStdCount();

	Func();
	Student::PrintStdCount();

}