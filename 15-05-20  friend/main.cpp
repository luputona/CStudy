#include <iostream>
using namespace std;

class B; //B클래스의 존재를 알림

	
/* 전방선언 B클래스가 밑에 있을 경우 밑에 있다고 알려주는 C에서 함수 선언부분과 같은 내용 */
class A
{
private:
	int adata;
public:
	A(int data)
	{
		adata = data;
	}
	void ShowData(B& b);
	friend class B;

};

//프렌드 클래스끼리는 private도 접근 가능

class B
{
private:
	int bdata;
public:
	B(int data)
	{
		bdata = data;
	}
	void ShowData(A& a)
	{
		cout <<"a.data : "<<a.adata <<endl;
	}
	friend class A;
};

void A::ShowData(B& b)
{
	cout <<"b.data : "<<b.bdata<<endl;
}

void main()
{
	A a(10);
	B b(20);

	a.ShowData(b);
	b.ShowData(a);
}
/*Frined 는 좋아 보이지만 많이 쓰이지 않는다 
외부에서 private멤버에 접근할 수 있게 되면 객체지향 속성중 하나인 정보은닉이 깨지지 때문이다.*/