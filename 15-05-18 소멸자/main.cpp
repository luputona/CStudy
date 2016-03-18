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
	cout <<"�� ���� ������ �Է� �Ͻ� �ǰ���? ";
	cin >>size;

	//�ʿ��� ��ŭ�� �޸� �Ҵ�
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
	//���� �޸𸮸� �������� �ʿ䰡 ����

}
/*�����ڿ� �ݴ�� �Ҹ��ڰ� �ִ�. �Ҹ��ڴ� ��ü �Ҹ�� �ڵ����� �Ҹ�Ǳ� ������ �Ҵ�� �޸𸮸� ��ȯ�ϴ� �뵵�� ���� ���δ�
�Ҹ��ڵ� ������ ó�� �������� �ʴ´ٸ� �����Ϸ��� ����Ʈ �Ҹ��ڸ� �̿��ؼ� �ڵ����� ���� */