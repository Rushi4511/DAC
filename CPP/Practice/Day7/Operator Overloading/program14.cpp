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
    friend void operator<<(ostream &out, Complex &other);
    // this = &c2
    // other = c1
    void operator=(const Complex &other)
    {
        cout << "void operator=(const Complex &other)" << endl;
        this->real = other.real;
        this->imag = other.imag;
    }
};
void operator<<(ostream &out, Complex &other)
{
    out << other.real << endl;
    out << other.imag << endl;
}
int main()
{
    Complex c1(10, 20);
    Complex c2;
    c2 = c1;    // c2.operator=(c1);
    cout << c2; // operator<<(cout , c2)
    return 0;
}