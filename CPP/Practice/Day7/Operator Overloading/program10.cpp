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
    friend void operator<<(ostream &out, Complex c1);
};
// ostream &out because if we create the copy , copy ctor of ostream class is  called
// but copy ctor of ostream class is protected so we need to pass it as a reference
// overloading insertion operator
void operator<<(ostream &out, Complex c1)
{
    out << c1.real << endl;
    out << c1.imag << endl;
}
int main(int argc, char const *argv[])
{
    Complex c1(10, 20);
    cout << c1; // operator<<(cout , c1)
    return 0;
}