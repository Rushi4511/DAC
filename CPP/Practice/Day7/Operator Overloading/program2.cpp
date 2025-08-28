#include<iostream> 
using namespace std; 
class Complex 
{
    int real; 
    int imag; 
    public: 
    Complex( void ) : real(0) , imag(0)
    { }
    Complex(int real , int imag)
    {
        this->real = real; 
        this->imag = imag; 
    }
    void printRecord( )
    {
        cout <<"Real : "<<real<<endl; 
        cout <<"Imag : "<<imag<<endl; 
    }
    //this = &c1 
    //other = c2 
    Complex operator+(Complex &other)
    {
        Complex temp; 
        temp.real = this->real + other.real; 
        temp.imag = this->imag + other.imag; 
        return temp; 
    }
    Complex operator-(Complex &other)
    {
        Complex temp; 
        temp.real = this->real - other.real; 
        temp.imag = this->imag - other.imag; 
        return temp; 
    }
}; 

int main(int argc, char const *argv[])
{
    Complex c1 (10,20); 
    Complex c2 (30,40); 
    //Complex c3 = c1 + c2; //c1.operator+(c2); 
    //c3.printRecord( ); 
    Complex c4 = c1 - c2; //c1.operator-(c2); 
    c4.printRecord( ); 
    return 0;
}