#include <iostream>
using namespace std;

/*����� ���� �����ڿ��� �ʱ�ȭ ����Ʈ�� ����� ���� Ŭ�������� �޾Ƽ� �ʱ�ȭ
����� Ư¡�� �޼ҵ� �������̵� ��ӹ��� �Լ��� �̸��� ����.*/
class Person
{
private:
	char name[20];
	int age;
	char hobby[30];
public:
	Person (char *_name, int _age, char *_hobby) : 
	age(_age)
	{
		strcpy(name,_name);
		strcpy(hobby,_hobby);
	}
	void sleep()
	{
		cout<<"��ħ"<<endl;
	}
	void getup()
	{
		cout <<"���"<<endl;
	}
	void eat()
	{
		cout <<"�Ļ�\n";
	}
	void showInfo()
	{
		cout <<"�̸� : "<<name<<endl;
		cout <<"���� : "<<age <<endl;
		cout <<"��� : "<<hobby<<endl;
	}
};

class Student : public Person
{
private:
	char school[30];
public:
	//�ʱ�ȭ ����Ʈ�� �̿��� �θ� Ŭ������ �����ں��� �ʱ�ȭ 
	Student(char *_name, int age,char *_hobby, char *_school) :
	Person(_name,age,_hobby)
	{
		strcpy(school,_school);
	}
	//�θ�Ŭ������ �޼ҵ�� �̸��� ����.
	void showInfo()
	{
		Person::showInfo();
		cout <<"�б� : "<<school<<endl;
	}
	
};


void main()
{
	Student st("hknil",17,"���α׷���","��ü�������б�");

	st.showInfo();
	st.getup();
	st.eat();
	st.sleep();

}