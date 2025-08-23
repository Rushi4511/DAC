#include <iostream>
using namespace std;

class Car
{

private:
    int totalCars;
    /// int nonPayingCars;
    double totalCash;

public:
    Car()
    {
        this->totalCars = 0;
        this->totalCash = 0;
    }

    void payingCars()

    {

        totalCars++;
        totalCash = totalCash + 0.50;
    }

    void noCarPay()
    {
        totalCars++;
    }

    void printOnConsole()
    {
        cout << "Total Cars:" << totalCars << endl;
        cout << "Total Cash:" << totalCash << endl;
    }
};

int main()
{
    Car c1;

    for (int i = 0; i < 3; i++)
    {
        c1.noCarPay();
    }
    for (int i = 0; i < 7; i++)
    {
        c1.payingCars();
    }

    c1.printOnConsole();
}