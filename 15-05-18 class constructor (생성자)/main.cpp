#include <iostream>
using namespace std;

class student
{
private:
	char *name;
	int age;
public:
	student(char *,int);
	void ShowInfo();
	void SetInfo(char *,int);
};

student::student(char *name,int age)
{
	this->name = name;
	this->age = age;

}

void student::ShowInfo()
{
	cout <<"�̸� : "<<name<<", "<<"���� : "<<age <<endl;
}
void student::SetInfo(char *name,int age)
{
	this->name = name;
	this->age = age;		 
}

void main()
{
	student instance("����",21);
	instance.ShowInfo();

	instance.SetInfo("����",20);
	instance.ShowInfo();
}
/*��ü ���� ���ÿ� �ʱ�ȭ 
This Ű���� Ŭ���� �ڽ��� ����Ű�� ������ Ű���� ������ ���� �̸����� ����� ����
�����ڸ� ������ ������ ����Ʈ �����ڰ� �ڵ����� ������� �����ڵ� �����ε� ���� �Լ��� */