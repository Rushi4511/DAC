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
    friend Complex operator++(Complex &other , int value); 
    /*
    //this = c1 
    Complex operator++(int value)
    {
        Complex temp; 
        temp.real = this->real++; 
        temp.imag = this->imag++; 
        return temp; 
    }*/ 
};
Complex operator++(Complex &other , int value)
{
     Complex temp; 
     temp.real = other.real++; 
     temp.imag = other.imag++; 
     return temp; 
}
int main()
{
    Complex c1(10,20);
    //Complex res = c1++; //c1.operator++(0) -- as a member 
      Complex res = c1++; // operator++(c1,0)
    res.printRecord( ); 
    c1.printRecord( ); 
    return 0;
}