#include <iostream>
using namespace std;

class Student
{
public:
	int number;
	char name[20];
	int kor;
	int eng;
	int math;
	
	Student();
	void showData()const;
};

Student::Student()
{
	number = 1001;
	strcpy(name,"김철수");
	kor = 100;
	eng = 90;
	math = 95;
}

void Student::showData()const
{
	cout <<"학번 : "<<number<<endl;
	cout <<"이름 : "<<name<<endl;
	cout <<"국어 : "<<kor<<endl;
	cout <<"여어 : "<<eng<<endl;
	cout <<"수학 : "<<math<<endl;
}

void main ()
{
	const Student kim; //const 키워드를 사용해 상수 객체를 선언 하면 컴파일 에러가 발생

	//kim.number = 1002; 
	//const로 선언이 되었기 때문에 멤버 변수를 수정 할 수 없고 참조만 할수 있다.
	//값을 넣을려 해서 에러가 발생 
	
	kim.showData();


}





