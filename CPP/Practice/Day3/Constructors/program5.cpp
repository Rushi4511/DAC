#include <iostream>
using namespace std;
/*
 If we dont write any ctor inside the class then compiler generate
one ctor by default it is called default ctor (compiler defined ctor)
Complex( )
{
    ptr = NULL
}
it is empty for the programmer , it is used to init data-member
added by compiler eg : ptr ( if pointer added)
ctor will not generate default parametrized ctor
// you must write the parameterized ctor
*/

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int real, int imag) // parameterized ctor
    {
        cout << "Complex( int real , int imag )" << endl;
        this->real = real;
        this->imag = imag;
    }
    void acceptRecord(void)
    {
        cout << "Real : ";
        cin >> real;
        cout << "Imag : ";
        cin >> imag;
    }
    void printRecord(void)
    {
        cout << "Real : " << real << endl;
        cout << "Imag : " << imag << endl;
    }
};
int main(int argc, char const *argv[])
{
    // Complex c1; // parameter-less ctor on c1 object

    return 0;
}