#include <iostream>
using namespace std;

/*protected ��ӹ޴� Ŭ�������� �������� ���� 
	public�� ���������� protected�� ���� �������� ��ŷ���� */
class Parent
{
private:
	int num1;
protected:
	int num2;
public:
	int num3;
};

class Child : public Parent
{
public:
	void show()
	{
	//	cout << num1 << endl; //error
		cout <<num2<<endl;
		cout <<num3<<endl;
	}
};

void main()
{
	Child c;

	c.show();


}
