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
	strcpy(name,"��ö��");
	kor = 100;
	eng = 90;
	math = 95;
}

void Student::showData()const
{
	cout <<"�й� : "<<number<<endl;
	cout <<"�̸� : "<<name<<endl;
	cout <<"���� : "<<kor<<endl;
	cout <<"���� : "<<eng<<endl;
	cout <<"���� : "<<math<<endl;
}

void main ()
{
	const Student kim; //const Ű���带 ����� ��� ��ü�� ���� �ϸ� ������ ������ �߻�

	//kim.number = 1002; 
	//const�� ������ �Ǿ��� ������ ��� ������ ���� �� �� ���� ������ �Ҽ� �ִ�.
	//���� ������ �ؼ� ������ �߻� 
	
	kim.showData();


}





