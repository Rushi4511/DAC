#include <iostream>
using namespace std;

class Test
{
private:
    const int num1;

public:
    Test() : num1(0) {}

    void showData()
    {

        cout << "Num1:" << num1 << endl;
    }

    void printData() const
    {

        cout << "Num1:" << num1 << endl;
    }
};

int main()
{
    const Test obj1;
    // obj1.showData();  // Constant object can only call constant Member Functions
    obj1.printData();

    return 0;
}