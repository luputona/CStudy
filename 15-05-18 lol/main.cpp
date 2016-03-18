#include <iostream>
using namespace std;

struct lol 
{
public:
	void SetInfo(char *, char *, char *);
	void ShowInfo();
private:
	char *id;
	char *password;
	char *name;
	int level;
};

void lol::SetInfo(char *_id, char *_password, char *_name)
{
	id = _id;
	password = _password;
	name = _name;
	level = 1;
}

void lol::ShowInfo()
{
	cout <<"아이디 : "<<id<<endl;
	cout <<"비밀번호 : "<<password <<endl;
	cout <<"소환사명 : "<<name <<endl;
	cout <<"레벨 : "<<level <<endl;
}

void main()
{
	lol a;

	a.SetInfo("hknil","security","jihun");
	a.ShowInfo();
}
