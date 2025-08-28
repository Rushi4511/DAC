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
    friend bool operator==(Complex &c1, Complex &c2);
};
// overloading as non-member using friend function
bool operator==(Complex &c1, Complex &c2)
{
    return c1.real == c2.real && c1.imag == c2.imag;
}
int main(int argc, char const *argv[])
{
    Complex c1(10, 20);
    Complex c2(10, 20);
    bool res = c1 == c2; // res = operator==(c1,c2);
    if (res)
        cout << "Equal" << endl;
    else
        cout << "not same" << endl;
    return 0;
}
