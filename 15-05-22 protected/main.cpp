#include <iostream>
using namespace std;

/*protected 상속받는 클래스에서 접근제어 가능 
	public도 가능하지만 protected를 권장 정보은닉 해킹방지 */
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
