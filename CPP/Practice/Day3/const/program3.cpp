#include <iostream>
using namespace std;

class Test
{
private:
    mutable int num1;

public:
    Test() : num1(10) {}

    void showData()
    {

        cout << "Num1:" << num1 << endl;
    }

    void printData() const
    {

        this->num1++;

        cout << "Num1:" << num1 << endl;
    }

    int getNum()
    {
        return this->num1;
    }
};

int main()
{
    Test obj1;
    // obj1.showData();  // Constant object can only call constant Member Functions
    obj1.printData();
    int result = obj1.getNum();
    cout << "Result:" << result << endl;

    return 0;
}