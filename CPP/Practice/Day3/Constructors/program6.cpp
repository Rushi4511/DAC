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
        cout << "Inside Parameter Less Constructor" << endl;
        this->real = 0;
        this->imag = 0;
    }

    Complex(int value)
    {
        cout << "Inside 1-Parameter Constructor" << endl;
        this->real = value;
        this->imag = value;
    }

    Complex(int real, int imag)
    {
        cout << "Inside 2-Parameter Constructor" << endl;
        this->real = real;
        this->imag = imag;
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
        cout << "Real:" << this->real << " Imag:" << this->imag;
    }

    static void init()
    {
        Complex c1;
    }
};

int main()
{

    // Complex c1;
    // Complex c2(10);
    // Complex c3(10, 20);

    // Complex *ptr; //Constructor Not Called

    // Complex f1(); //Function Declaration

    // Complex f2 = 10; //Single Parameter Constructor

    // Complex f1= 10,20; // Not Allowed

    // Complex(10,20);//Annonymous Object

    // Complex(10);//Annonymous Object

    // Complex f1 = {10, 20};// 2-Parameter Const

    Complex f1 = (10, 20); // 20 1-Para Const
    f1.outputData();

    return 0;
}