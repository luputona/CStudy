#include <iostream>
using namespace std;

/*�������static Ű���带 �̿�
C������ ��Լ������� ��밡���� ���� 
c++Ŭ���� �ȿ��� ����ϸ� Ŭ���� ��ü�� ��������� �ȴ�.
������������� Ŭ���� �ۿ��� �ʱ�ȭ �Ѵ�.*/


class Student
{
public:
	string name; //c++�� ���ڿ� �ڷ���
	int sNo;

	//������ ,�Ҹ���
	Student(const string &name, int sNo);
	~Student();
public:
	//�������
	static int studentCount;
	static void PrintStdCount();
};

//���� ��� ����
int Student::studentCount = 0;

void Student::PrintStdCount()
{
	cout <<"Student ��ü �� : "<<studentCount <<endl;
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
	Student s1 ("����",123);
	Student s2("����",234);

	Student::studentCount++;
	Student::PrintStdCount();
}
//�ٸ� �Լ��� ���ε� �ٸ������� ����Ҷ� Ŭ������ ::�������� 
void main()
{
	//��ü �������� ȣ�� ���� 
	Student::PrintStdCount();

	Student s("����",345);
	Student::PrintStdCount();

	Func();
	Student::PrintStdCount();

}