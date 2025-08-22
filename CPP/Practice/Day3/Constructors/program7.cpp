#include <iostream>

using namespace std;
class Complex
{
private:
    int real;
    int imag;

public:
    Complex(void)
    {
        cout << " Complex( void )" << endl;
        this->real = 0;
        this->imag = 0;
    }
    Complex(int real, int imag) : Complex()
    {
        cout << " Complex( int real , int imag )" << endl;
    }
    void printRecord(void)
    {
        cout << "real : " << real << endl;
        cout << "imag : " << imag << endl;
    }
};
int main(int argc, char const *argv[])
{
    Complex c1(10, 20);
    c1.printRecord();
    return 0;
}
/*
class Complex
{
    private:
    int real;
    int imag;
    public:
    Complex( void ) : Complex(10,20) //ctor delegation (C++ 11)
    {
        cout<<" Complex( void )"<<endl;
    }
    Complex( int real , int imag )
    {
        cout<<" Complex( void )"<<endl;
        this->real = real;
        this->imag = imag;
    }
    void printRecord( void )
    {
        cout<<"real : "<<real<<endl;
        cout<<"imag : "<<imag<<endl;
    }
};
int main(int argc, char const *argv[])
{
    Complex c1;
    c1.printRecord( );
    return 0;
}
*/