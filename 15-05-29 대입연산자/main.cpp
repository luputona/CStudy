#include <iostream>
using namespace std;

class Student
{
private:
	int number;
	char *name;
	int kor;
	int eng;
	int mat;
public:
	Student();
	Student(int num,char *n,int k, int e,int m);
	~Student();
	Student &operator = (Student &person); //대입 연산자 다중 정의
	void showData();

};

Student::Student()
{
	
	name = new char[20];
	strcpy(name," ");
	kor = 0;
	eng = 0;
	mat = 0;
}

Student::Student( int num,char *n,int k, int e,int m )
{
	number = num;
	name = new char[20];
	strcpy(name,n);

	kor = k;
	eng = e;
	mat = m;

}

Student::~Student()
{
	delete []name;
}

Student & Student::operator=( Student &person )
{
	this->number = person.number;
	this->kor = person.kor;
	this->eng = person.eng;
	this->mat = person.mat;

	strcpy(this->name , person.name);

	return *this;

}

void Student::showData()
{
	cout<<"학번 : "<<number<<endl;
	cout <<"이름 : "<<name <<endl;
	cout <<"국어 : "<<kor<<endl;
	cout <<"영어 : "<<eng <<endl;
	cout <<"수학 : "<<mat<<endl;
}


void main()
{
	Student kim = Student(1001,"건곤",100,90,100);

	Student park;

	park = kim ; //대입연산자 호출 

	park.showData();
}