#include <iostream>
using namespace std;

class Base
{
private:
    int num1;
    int num2;

public:
    Base() : num1(0), num2(0) {};

    Base(int num1, int num2) : num1(num1), num2(num2) {}

    void printRecord()
    {
        cout << "Value of Num1 :" << num1 << endl;
        cout << "Value of Num2 :" << num2 << endl;
    }

    void showRecord()
    {
        cout << "Value of Num1 :" << num1 << endl;
        cout << "Value of Num2 :" << num2 << endl;
    }
};

class Derived : public Base
{
private:
    int num3;

public:
    Derived() : num3(0) {};

    Derived(int num1, int num2, int num3) : num3(num3), Base(num1, num2) {}

    void printRecord()
    {
        Base::printRecord();
        cout << "Value of Num3 :" << num3 << endl;
    }

    void showRecord()
    {
        Base::showRecord();
        cout << "Value of Num3 :" << num3 << endl;
    }
};
int main(){
    Base *ptrBase = new Base(10,20); 

    Derived *ptrDerived = (Derived*)ptrBase; 
    ptrDerived->printRecord( ); 
    return 0;
}
int main9()
{
    Base *ptrBase = new Derived(10, 20, 30); // upcasting
    //ptrBase->printRecord();                  // 10 20
    Derived *ptrDerived = (Derived*)ptrBase; // downcasting
    ptrDerived->printRecord( );
    return 0;
}
int main8()
{
    Derived *ptrDerived = new Derived(10, 20, 30);
    // ptrDerived->printRecord();

    Base *ptrBase = (Base *)ptrDerived; // upcasting
    // Base *ptrBase = ptrDerived;// upcasting
    // ptrBase->printRecord();

    ptrDerived = (Derived *)ptrBase; // downcasting
    ptrDerived->printRecord();       // 10 20 30
    return 0;
}
int main7()
{
    Derived d1(10, 20, 30);
    Base b1;
    b1 = d1;
    b1.printRecord();
    d1.printRecord();
    return 0;
}
int main6()
{
    Base b1(10, 20);
    Base b2;
    b2 = b1;
    b2.printRecord();
    return 0;
}

int main5()
{

    Derived d1(10, 20, 30);
    Derived d2;
    d2 = d1; // d2.operator=(d1);
    d2.printRecord();
    return 0;
}
int main4()
{
    Derived *ptrDerived = new Derived(10, 20, 30);
    // ptrDerived->printRecord(); // ptrDerived->Derived::displayRecord();
    // ptrDerived->showRecord(); // ptrDerived->Derived::printRecord( );
    // ptrDerived->Base::printRecord( ); // OK
    // ptrDerived->Base::showRecord( ); // OK
    delete ptrDerived;
    ptrDerived = NULL;
    return 0;

    return 0;
}

int main3(int argc, char const *argv[])
{
    Base *ptrBase = new Base(10, 20);
    // ptrBase->printRecord();

    // ptrBase->showRecord(); // ptrBase->Base::showRecord( );
    // ptrBase->Derived::displayRecord( ); // NOT OK
    //  ptrBase->Derived::printRecord( ); // NOT OK
    delete ptrBase;
    ptrBase = NULL;
    return 0;
}
int main2()
{
    Derived derived(10, 20, 30);
    derived.printRecord(); // Derived::printRecord( );
    // derived.displayRecord( ); // Derived::displayRecord( );
    // derived.Base::printRecord( ); // OK -- Base::printRecord();
    // derived.Base::showRecord(); // OK -- Base::showRecord( );
    return 0;
};

int main1()
{
    Base b(10, 20);
    b.printRecord();
    b.showRecord();
    // b.Derived::printRecord();
    return 0;
};