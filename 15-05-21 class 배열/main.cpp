#include <iostream>
using namespace std;

class Student
{
private:
	char name[20];
	int age;
public:
	Student(char *name, int _age) :
	age(_age)
	{
		cout <<"������ ȣ��"<<endl;
		strcpy(this->name,name);
		cout <<"�̸� : "<<name <<endl;
		cout <<"���� : "<<age <<endl;
	}
	~Student()
	{
		cout <<"�Ҹ��� ȣ��"<<endl;
	}

};

void main()
{
	Student st[3] = {Student("������",21),Student("������",20),Student("�̿켺", 21)};
}
/*��ü�� �迭�� ����� �ִ�, 
���⼭ �ʱ�ȭ ����Ʈ�� �̿��ؼ� ���̺κ��� �Ű������� ���ڸ��� Ŭ���� ������ �ٷ� �ʱ�ȭ���ִ� �κе� ���ֽñ� �ٶ��ϴ�.*/



