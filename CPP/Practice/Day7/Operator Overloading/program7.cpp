#include <iostream>

using namespace std;
class Complex
{
    int real;
    int imag;

public:
    Complex(void) : real(0), imag(0)
    {
    }
    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }
    void printRecord()
    {
        cout << "Real : " << real << endl;
        cout << "Imag : " << imag << endl;
    }
    friend Complex operator++(Complex &other);
    /*
    //As a member function
    Complex operator++( void )
    {
        Complex temp;
        temp.real = ++this->real;
        temp.imag = ++this->imag;
        return temp;
    }*/
};
Complex operator++(Complex &other)
{
    Complex temp;
    temp.real = ++other.real;
    temp.imag = ++other.imag;
    return temp;
}
int main(int argc, char const *argv[])
{
    Complex c1(10, 20);
    // Complex res = ++c1; //c1.operator++( );
    Complex res = ++c1; // operator++(c1);
    res.printRecord();
    c1.printRecord();
    return 0;
}