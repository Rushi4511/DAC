#include <iostream>
using namespace std;

class A
{
public:
    int a1;
    int a2;
    int a3;

    A() : a1(0), a2(0), a3(0) {}
};
void inputData(A &obj)
{
    cout << "Enter Values:" << endl;
    cin >> obj.a1 >> obj.a2 >> obj.a3;
}

void displayData(A &obj)
{
    cout << obj.a1 << " " << obj.a2 << " " << obj.a3 << " " << endl;
}

class Test
{
private:
    char &ref;

public:
    Test(char &ch) : ref(ch) {}

    void inc()
    {
        ref++;
    }

    void display()
    {
        cout << ref << endl;
    }
};

int main(int argc, char const *argv[])
{
    // A obj1;
    // obj1.inputData(obj1);
    // obj1.displayData(obj1);

    // char ch = 'A';
    // char &ch1 = ch;

    // cout << sizeof(ch) << endl;
    // cout << sizeof(ch1) << endl;

    // cout << sizeof() << endl;

    char ch1 = 'A', ch2 = 'B', ch3 = 'C';

    Test arr[3] = {ch1, ch2, ch3};

    for (int i = 0; i < 3; i++)
    {
        arr[i].inc();
    }

    for (int i = 0; i < 3; i++)
    {
        arr[i].display();
    }

    return 0;
}