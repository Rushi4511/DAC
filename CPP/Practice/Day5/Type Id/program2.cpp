#include <iostream>
#include <typeinfo>
using namespace std;
class Base
{
public:
    virtual ~Base()
    {
    }
};
class Derived : public Base
{
};
int main4(int argc, char const *argv[])
{
    Base *ptrBase = NULL;
    cout << typeid(ptrBase).name() << endl;
    cout << typeid(*ptrBase).name() << endl; // throws bad_typeid
    return 0;
}

int main(int argc, char const *argv[])
{
    Base *ptrBase = new Derived();
    cout << typeid(ptrBase).name() << endl;
    cout << typeid(*ptrBase).name() << endl;
    return 0;
}

int main2(int argc, char const *argv[])
{
    Derived *ptrDerived = new Derived();
    cout << typeid(ptrDerived).name() << endl;
    cout << typeid(*ptrDerived).name() << endl;
    return 0;
}

int main1(int argc, char const *argv[])
{
    Base *ptrBase = new Base();
    cout << typeid(ptrBase).name() << endl;
    cout << typeid(*ptrBase).name() << endl;
    return 0;
}