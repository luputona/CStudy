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
	cout << "���� ��ȣ : " <<a.no<<endl;
	cout <<"�г��� : "<<a.id<<endl;
	cout <<"���� : " <<a.level<<endl;


}

