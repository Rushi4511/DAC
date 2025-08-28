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
    // this = &c1
    //  value = 5;
    Complex operator+(int value)
    {
        Complex temp;
        temp.real = this->real + value;
        temp.imag = this->imag + value;
        return temp;
    }
};
int main(int argc, char const *argv[])
{
    Complex c1(10, 20);
    Complex c2;
    c2 = c1 + 5; // c1.operator+(5);
    c2.printRecord();
    return 0;
}