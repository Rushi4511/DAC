#include <iostream>
using namespace std;
// constructor cannot be declared static , const , volatile , virtual

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(void) // parameter-less
    {
        cout << " Complex( void )" << endl;
        this->real = 0;
        this->imag = 0;
    }
    Complex(int real, int imag) // 2 argument -parameterized ctor
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
        cout << endl;
    }
    void printRecord(void)
    {
        cout << "Real : " << real << endl;
        cout << "Imag : " << imag << endl;
        cout << endl;
    }
};
int main(int argc, char const *argv[])
{
    Complex arr[3] = {Complex(10, 20), Complex(30, 40), Complex(50, 60)};
    for (int index = 0; index < 3; index++)
        arr[index].printRecord();
    return 0;
}

int main2(int argc, char const *argv[])
{
    Complex arr[3];
    for (int index = 0; index < 3; index++)
        arr[index].acceptRecord();
    for (int index = 0; index < 3; index++)
        arr[index].printRecord();
    return 0;
}

int main1(int argc, char const *argv[])
{
    Complex arr[3];
    return 0;
}