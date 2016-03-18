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
		cout <<"이름 : "<<name <<endl;
		cout <<"나이 : "<<age <<endl;
	}
	~Student()
	{
		cout <<"소멸자 호출"<<endl;
	}

};

void main()
{
	Student st[3] = {Student("조광희",21),Student("윤영목",20),Student("이우성", 21)};
}
/*객체를 배열로 만들수 있다, 
여기서 초기화 리스트를 이용해서 나이부분을 매개변수로 받자마자 클래스 변수에 바로 초기화해주는 부분도 봐주시기 바랍니다.*/



