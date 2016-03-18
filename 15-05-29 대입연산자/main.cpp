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
	Student &operator = (Student &person); //���� ������ ���� ����
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
	cout<<"�й� : "<<number<<endl;
	cout <<"�̸� : "<<name <<endl;
	cout <<"���� : "<<kor<<endl;
	cout <<"���� : "<<eng <<endl;
	cout <<"���� : "<<mat<<endl;
}


void main()
{
	Student kim = Student(1001,"�ǰ�",100,90,100);

	Student park;

	park = kim ; //���Կ����� ȣ�� 

	park.showData();
}