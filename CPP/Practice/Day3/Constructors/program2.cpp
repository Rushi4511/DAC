#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex()
    {
        cout << "Inside Constructor";
        this->real = 0;
        this->imag = 0;
    }

    void inputData()
    {
        cout << "Real:";
        cin >> this->real;
        cout << "Imag:";
        cin >> this->imag;
    }

    void outputData()
    {
        cout << "Real:" << real << " Imag:" << imag;
    }
};

int main()
{

    Complex c1;
    c1.outputData();
    // c1.inputData();
    // c1.outputData();
    // c1.outputData();

    //Complex &c2 = c1; // Constructor is not called by reference
    // c2.Complex(); //Not Ok

    //Complex c1;
    Complex c2;
    Complex c3;

    return 0;
}