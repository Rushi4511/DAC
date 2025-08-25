#include <iostream>
using namespace std;

class Test
{
public:
    int num1;
    int num2;

    void swap(int &num4, int &num5)
    {
        int temp = num4;
        num4 = num5;
        num5 = temp;
    }
};

int main()
{
    int num1 = 10;

    int &num2 = num1;

    int &num3 = num2;

    ++num1;
    ++num2;
    ++num3;

    cout << "Num1:" << &num1 << endl;
    cout << "Num2:" << &num2 << endl;
    cout << "Num3:" << &num3 << endl;

    cout << "Num1:" << num1 << endl;
    cout << "Num2:" << num2 << endl;
    cout << "Num3:" << num3 << endl;

    int num4 = 10;
    int num5 = 20;

    Test obj1;
    obj1.swap(num4, num5);

    cout << "Num4:" << num4 << endl;
    cout << "Num5:" << num5 << endl;

    return 0;
}