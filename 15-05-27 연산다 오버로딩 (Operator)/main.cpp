#include <iostream>
using namespace std;

class Complex
{
private:
	int real;
	int imaginary;
public:
	Complex(int real,int imaginary) :
	real(real),imaginary(imaginary)
	{
	}
	Complex operator+(const Complex &right) //operator+ �� �̿��� ��ü����  +������ �����ϰ� �Ѵ�.
	{
		int real = this->real + right.real;
		int imag = this->imaginary + right.imaginary;

		//����� ������ ���Ҽ� ��ü�� ��ȯ�Ѵ�
		return Complex(real,imag);
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
/*������ �����ε�
Ŭ�������� ������ */

void main()
{
	Complex c1(1,1);
	Complex c2(2,2);
	Complex c3(0,0);
	
	c3 = c1 + c2;

	//c1+c2 = c1.operator+(c2);
	

	cout <<"c1: "<<c1.GetReal()<<"+"<<c1.GetImaginary()<<"i"<<endl;
	cout <<"c2: "<<c2.GetReal()<<"+"<<c2.GetImaginary()<<"i"<<endl;
	cout <<"c3: "<<c3.GetReal()<<"+"<<c3.GetImaginary()<<"i"<<endl;


}