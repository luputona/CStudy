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
	cout <<"���̵� : "<<id<<endl;
	cout <<"��й�ȣ : "<<password <<endl;
	cout <<"��ȯ��� : "<<name <<endl;
	cout <<"���� : "<<level <<endl;
}

void main()
{
	lol a;

	a.SetInfo("hknil","security","jihun");
	a.ShowInfo();
}
