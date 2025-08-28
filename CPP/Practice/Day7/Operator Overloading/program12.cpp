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
    friend void operator>>(istream &in, Complex &other);
    friend void operator<<(ostream &out, Complex &other);
};
void operator>>(istream &in, Complex &other)
{
    cout << "Real : ";
    in >> other.real;
    cout << "Imag : ";
    in >> other.imag;
}
void operator<<(ostream &out, Complex &other)
{
    out << other.real << endl;
    out << other.imag << endl;
}
int main()
{
    Complex c1;
    cin >> c1;  // operator>>(cin , c1);
    cout << c1; // operator<<(cout , c1);
    return 0;
}