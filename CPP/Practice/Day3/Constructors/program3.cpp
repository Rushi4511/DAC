#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

    Complex()
    {
        cout << "Inside Constructor";
        this->real = 0;
        this->imag = 0;
    }

public:
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

    static void init()
    {
        Complex c1;
    }
};

int main()
{

    // Complex c1;
    // If Constructor is Private then object cannot be created outside the Class
    // If we want to create it we need to create a static function inside class

    Complex::init();

    return 0;
}