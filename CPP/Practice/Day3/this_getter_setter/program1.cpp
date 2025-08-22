#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    void acceptData(void)
    {
        cout << "Real:" << endl;
        cin >> real;
        cout << "Imag:" << endl;
        cin >> imag;
    }

    void printData(void)
    {
        cout << "Real:" << real;
        cout << "Imag:" << imag;
    }

    Complex sum(Complex other)
    {
        Complex temp;
        temp.real = this->real + other.real;
        temp.imag = this->imag + other.imag;
        return temp;
    }
};

int main()
{
    Complex c1;
    c1.acceptData();

    Complex c2;
    c2.acceptData();

    Complex c3;
    c3 = c1.sum(c2);

    c3.printData();
    return 0;
}