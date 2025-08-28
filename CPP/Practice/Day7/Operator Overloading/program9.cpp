#include<iostream>
using namespace std;

class Complex
{
private:
	int real;
	int imag;
public:
	Complex( void )
	{
		this->real = 0;
		this->imag = 0;
	}
	Complex( int real, int imag )
	{
		this->real = real;
		this->imag = imag;
	}
	//Complex *const this = &c1
	//Complex &other = c2
	Complex operator+( Complex &other )
	{
		Complex temp;
		temp.real = this->real + other.real;
		temp.imag = this->imag + other.imag;
		return temp;
	}
	//Complex *const this = &c1
	//int value = 5
	Complex operator+( int value )
	{
		Complex temp;
		temp.real = this->real + value;
		temp.imag = this->imag + value;
		return temp;
	}
	//Complex *const this = &c1;
	//Complex & other = c2;
	bool operator==( Complex &other )
	{
		return this->real == other.real && this->imag == other.imag;
	}
	//Complex *const this = &c1;
	//Complex & other = c2;
	bool operator!=( Complex &other )
	{
		return this->real != other.real && this->imag != other.imag;
	}
	//Complex *const this = &c1;
	//Complex & other = c2;
	Complex operator+=( Complex &other )
	{
		this->real += other.real;
		this->imag += other.imag;
		return *this;
	}
	//Complex *const this = &c1;
	Complex operator++( void )//Pre-Increment
	{
		Complex temp;
		temp.real = ++ this->real;
		temp.imag = ++ this->imag;
		return temp;
	}
	//Complex *const this = &c1;
	Complex operator++( int )//Post-Increment
	{
		Complex temp;
		temp.real = this->real ++;
		temp.imag = this->imag ++;
		return temp;
	}
	void printRecord( void )const
	{
		cout<<"Real Number	:	"<<this->real<<endl;
		cout<<"Imag Number	:	"<<this->imag<<endl;
	}
};
int main( void )
{
	Complex c1(10,20);
	//Complex c2 = ++ c1;	//Complex c2 = c1.operator++( );
	Complex c2 = c1++;	//Complex c2 = c1.operator++( 0 );
	c1.printRecord();
	c2.printRecord();
	return 0;
}