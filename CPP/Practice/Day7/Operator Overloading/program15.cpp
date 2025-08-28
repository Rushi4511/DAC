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
    Complex(const Complex &other)
    {
        cout << "Complex(const Complex &other)" << endl;
        this->real = other.real;
        this->imag = other.imag;
    }
    // this = &c2
    // other = c1
    Complex &operator=(const Complex &other)
    {
        cout << "void operator=(const Complex &other)" << endl;
        this->real = other.real;
        this->imag = other.imag;
        return *this;
    }
};
int main(int argc, char const *argv[])
{
    Complex c1(10, 20);
    Complex c2;
    Complex c3;
    c3 = c2 = c1; // c3.operator=(c2.operator=(c1));
    return 0;
}