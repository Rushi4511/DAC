#include <iostream>
using namespace std;

class Test
{
private:
    const int num1;

public:
    Test() : num1(0) {}

    void printData()
    {
        cout << "Num1:" << num1 << endl;
    }
};

int main()
{
    Test obj1;
    obj1.printData();

    return 0;
}