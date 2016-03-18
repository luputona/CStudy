#include <iostream>
using namespace std;

struct lol
{
	int no;
	char *id;
	int level;

	void changeInfo()
	{
		no = 2;
		id = "hknil2";
	}

};

void main()
{
	lol a = {1,"hknil",30};

	a.changeInfo();
	cout << "계정 번호 : " <<a.no<<endl;
	cout <<"닉네임 : "<<a.id<<endl;
	cout <<"레벨 : " <<a.level<<endl;


}

