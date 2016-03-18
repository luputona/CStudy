#include <iostream>
using namespace std;

class student
{
private:
	char *name;
	int age;
public:
	void ShowInfo();
	void SetInfo(char *_name, int _age);
};

void student::ShowInfo()
{
	cout << "이름 : "<<name <<", " <<"나이 : "<<age<<endl;

}
void student::SetInfo(char *_name, int _age)
{
	name = _name;
	age = _age;
}

void main()
{
	student instance;

	instance.SetInfo("조광",21);
	instance.ShowInfo(); 


}