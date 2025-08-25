#include <iostream>
using namespace std;

class A
{
private:
    int num1;

public:
    A() : num1(0) {};
    A(int num1) : num1(num1) {};

    void showRecord()
    {
        this->printRecord();
    }

protected:
    void printRecord()
    {
        cout << "Value of A:" << num1 << endl;
    }
};

class B : public A
{
private:
    int num2;

public:
    B() : num2(0) {};
    B(int num1, int num2) : num2(num2), A(num1) {};

    void showRecord()
    {
        A::printRecord();
        this->printRecord();
    }

protected:
    void printRecord()
    {

        cout << "Value of B:" << num2 << endl;
    }
};

class C : public A
{
private:
    int num3;

public:
    C() : num3(0) {};
    C(int num1, int num3) : num3(num3), A(num1) {};

    void showRecord()
    {
        A::printRecord();
        this->printRecord();
    }

protected:
    void printRecord()
    {

        cout << "Value of C:" << num3 << endl;
    }
};

class D : public B, public C
{
private:
    int num4;

public:
    D() : num4(0) {};

    D(int num1, int num2, int num3, int num4) : num4(num4), B(num1, num2), C(num1, num3) {};

    void showRecord()
    {
        B::printRecord();

        C::printRecord();
        this->printRecord();
    }

protected:
    void printRecord()
    {

        cout << "Value of D:" << num4 << endl;
    }
};
int main()
{

    D b(1, 2, 3, 4);
    b.showRecord();

    return 0;
};