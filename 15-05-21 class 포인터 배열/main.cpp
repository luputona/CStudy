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
	}
	void GetStudent() const
	{
		cout <<"�̸� : "<<name<<endl;
		cout <<"���� : "<<age<<endl;
	}
	~Student()
	{
		cout <<"�Ҹ��� ȣ��"<<endl;
	}

};
/*������ ��ü�� �迭�� ������ٰ� ���� �ϸ� �ȴ� 
*st0 *st1 *st2 */
void main()
{
	Student *st[3];
	st[0] = new Student("������",21);
	st[1] = new Student("������",20);
	st[2] = new Student("�̿���",21);

	for (int i = 0; i< 3;i++)
	{
		st[i]->GetStudent();
	}
	for (int i = 0; i<3; i++)
	{
		delete st[i];
	}

}



