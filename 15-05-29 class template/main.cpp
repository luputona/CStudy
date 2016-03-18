#include <iostream>
using namespace std;

template<typename T>
class MyClass
{
private:
	T data;
public:
	MyClass( T data) : data(data)
	{

	}
	void ShowInfo()
	{
		cout <<data<<endl;
	}

};


void main()
{
	MyClass<char> data1('A');
	data1.ShowInfo();

	MyClass<int> data2(50);
	data2.ShowInfo();

	MyClass<double> data3(3.141592);
	data3.ShowInfo();
	
}