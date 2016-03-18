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
		cout <<"생성자 호출"<<endl;
		strcpy(this->name,name);
	}
	void GetStudent() const
	{
		cout <<"이름 : "<<name<<endl;
		cout <<"나이 : "<<age<<endl;
	}
	~Student()
	{
		cout <<"소멸자 호출"<<endl;
	}

};
/*포인터 객체를 배열로 만들었다고 생각 하면 된다 
*st0 *st1 *st2 */
void main()
{
	Student *st[3];
	st[0] = new Student("조광희",21);
	st[1] = new Student("윤영목",20);
	st[2] = new Student("이웅성",21);

	for (int i = 0; i< 3;i++)
	{
		st[i]->GetStudent();
	}
	for (int i = 0; i<3; i++)
	{
		delete st[i];
	}

}



