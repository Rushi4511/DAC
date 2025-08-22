#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    void initData()
    {
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
    c1.initData();
    c1.outputData();
    c1.inputData();
    c1.outputData();
    c1.initData();
    c1.outputData();
    return 0;
}