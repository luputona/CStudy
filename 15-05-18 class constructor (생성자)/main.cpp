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
	cout <<"이름 : "<<name<<", "<<"나이 : "<<age <<endl;
}
void student::SetInfo(char *name,int age)
{
	this->name = name;
	this->age = age;		 
}

void main()
{
	student instance("전지",21);
	instance.ShowInfo();

	instance.SetInfo("윤영",20);
	instance.ShowInfo();
}
/*객체 생성 동시에 초기화 
This 키워드 클래스 자신을 가르키는 포인터 키워드 변수의 같은 이름으로 사용이 가능
생성자를 만들지 않으면 디폴트 생성자가 자동으로 만들어짐 생성자도 오버로딩 가능 함수라서 */