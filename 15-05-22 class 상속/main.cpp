#include <iostream>
using namespace std;

/*상속을 통한 생성자에서 초기화 리스트를 사용해 상위 클래스에서 받아서 초기화
상속의 특징중 메소드 오버라이딩 상속받은 함수의 이름이 같다.*/
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
		cout<<"취침"<<endl;
	}
	void getup()
	{
		cout <<"기상"<<endl;
	}
	void eat()
	{
		cout <<"식사\n";
	}
	void showInfo()
	{
		cout <<"이름 : "<<name<<endl;
		cout <<"나이 : "<<age <<endl;
		cout <<"취미 : "<<hobby<<endl;
	}
};

class Student : public Person
{
private:
	char school[30];
public:
	//초기화 리스트를 이용해 부모 클래스의 생성자부터 초기화 
	Student(char *_name, int age,char *_hobby, char *_school) :
	Person(_name,age,_hobby)
	{
		strcpy(school,_school);
	}
	//부모클래스의 메소드와 이름이 같다.
	void showInfo()
	{
		Person::showInfo();
		cout <<"학교 : "<<school<<endl;
	}
	
};


void main()
{
	Student st("hknil",17,"프로그래밍","객체지향고등학교");

	st.showInfo();
	st.getup();
	st.eat();
	st.sleep();

}