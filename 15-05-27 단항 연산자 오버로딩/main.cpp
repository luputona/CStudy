#include <iostream>
using namespace std;

//전치가 더 빠른 이유 , 전치와 후치는 코드와 로직이 차이가 조금 난다
class Complex
{
private:
	int real;
	int imaginary;
public:
	Complex(int real, int imaginary):
	real(real), imaginary(imaginary){}

	//++C의 경우 (전치형)
	Complex operator++()
	{
		this->real++;

		return *this;
	}
		
	//c++의 경우(후치형)
	Complex operator++(int)
	{
		//현재 값을 먼저 보관
		Complex prev(this->real,this->imaginary);

		//실수부의 값을 더한다 
		this->real++;

		return prev;
	}
	//접근자
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