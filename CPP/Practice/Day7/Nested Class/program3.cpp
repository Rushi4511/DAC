#include <iostream>

using namespace std;

class Outer
{
private:
    int num1;
    class Inner
    {
    private:
        int num2;

    public:
        Inner(void) : num2(0)
        {
        }
        void print(void)
        {
            Outer out;
            cout << "num1 : " << out.num1;
            cout << "num2 : " << num2;
        }
    };

public:
    friend int main();
    Outer(void) : num1(0)
    {
    }
};
int main()
{
    Outer::Inner in;
    in.print();
    return 0;
}