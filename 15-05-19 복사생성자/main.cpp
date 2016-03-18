#include <iostream>
using namespace std;

class StringArray
{
public:
	StringArray(const char *cStr)
	{
		str = new char[strlen(cStr)+1];
		strcpy(str,cStr);
	}
	StringArray(const StringArray &ref)  /*���� ����� ���� �ذ�, ��������� ��ü�� ���� ���� �Ҵ�� ��Ȯ�� ���ڿ��� �־��ش� */
	{
		str = new char[strlen(ref.str)+1];
		strcpy(str,ref.str);
	}
	~StringArray()
	{
		delete []str;
		cout <<"�Ҹ��� ~StringArray() ȣ��! \n" ;
	}
	void Showdata()
	{
		cout<<"str : " << str <<endl;
	}
private:
	char *str;
};


void main()
{
	StringArray sa1("StringClass");
	StringArray sa2 = sa1;

	sa1.Showdata();
	sa2.Showdata();
}

/*sa1�� ��ü �Ҹ��ڰ� ȣ��Ǹ� �ּҸ� ������ sa2 �Ҹ��ڿ��� ���� 
���� ����Ʈ ��������� ���� 
���� sa2.str = sa1.str;
���� ���� ���� �߻� */