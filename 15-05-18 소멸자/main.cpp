#include <iostream>
using namespace std;

class DynamicArray
{
public:
	int *arr;

	DynamicArray(int arraySize);
	~DynamicArray();

};

DynamicArray::DynamicArray(int arraySize)
{
	arr = new int[arraySize];
}

DynamicArray::~DynamicArray()
{
	delete []arr;
	arr = NULL;
}

void main()
{
	int size;
	cout <<"몇 개의 정수를 입력 하실 건가요? ";
	cin >>size;

	//필요한 만큼의 메모리 할당
	DynamicArray da(size);

	for (int i = 0; i<size; i++)
	{
		cin >> da.arr[i];
	}
	for (int i = size-1; i>=0; i--)
	{
		cout << da.arr[i] <<" ";
	}

	cout <<endl;
	//따로 메모리를 해제해줄 필요가 없다

}
/*생성자와 반대로 소멸자가 있다. 소멸자는 객체 소멸시 자동으로 소멸되기 때문에 할당된 메모리를 반환하는 용도로 많이 쓰인다
소멸자도 생성자 처럼 정의하지 않는다면 컴파일러가 디폴트 소멸자를 이용해서 자동으로 해제 */