#include <iostream>
using namespace std;

//��ġ�� �� ���� ���� , ��ġ�� ��ġ�� �ڵ�� ������ ���̰� ���� ����
class Complex
{
private:
	int real;
	int imaginary;
public:
	Complex(int real, int imaginary):
	real(real), imaginary(imaginary){}

	//++C�� ��� (��ġ��)
	Complex operator++()
	{
		this->real++;

		return *this;
	}
		
	//c++�� ���(��ġ��)
	Complex operator++(int)
	{
		//���� ���� ���� ����
		Complex prev(this->real,this->imaginary);

		//�Ǽ����� ���� ���Ѵ� 
		this->real++;

		return prev;
	}
	//������
public:
	void SetReal(int real)
	{
		this->real =real;
	}
	void SetImaginary(int imag)
	{
		imaginary = imag;
	}
	int GetReal()const
	{
		return real;
	}
	int GetImaginary()const
	{
		return imaginary;
	}
	
};

void main()
{
	Complex c1(1,1);
	Complex prefix(0,0);
	Complex postfix(0,0);

	cout <<"c1: "<<c1.GetReal() <<"+" << prefix.GetImaginary() <<"i"<<endl;

	prefix = ++c1;
	postfix = c1++;

	cout <<"c1's prefix : "<<prefix.GetReal()<<"+" <<prefix.GetImaginary()<<"i"<<endl;

	cout <<"c1's postfix : "<<postfix.GetReal()<<"+"<<postfix.GetImaginary()<<"i"<<endl;

	cout <<"c1: "<<c1.GetReal()<<"+"<<c1.GetImaginary()<<"i"<< endl;

}