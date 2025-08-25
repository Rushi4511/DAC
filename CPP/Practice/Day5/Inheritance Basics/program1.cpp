#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(void) : name(""), age(0) {}
    Person(string name, int age) : name(name), age(age) {}

    void displayRecord()
    {
        cout << "Employee Name is:" << name << endl;
        cout << "Employee Age is:" << age << endl;
    }
};
class Employee : public Person
{
private:
    int empId;
    int empSal;

public:
    Employee(void) : empId(0), empSal(0) {}
    Employee(int empId, int empSal) : empId(empId), empSal(empSal) {}

    void showRecord()
    {
        cout << "Employee ID is:" << empId << endl;
        cout << "Employee Salary is:" << empSal << endl;
    }
};

int main()
{

    Person p("Rushi", 1);
    p.displayRecord();

    Employee e(10, 20);
    e.displayRecord();
    // e.showRecord();

    return 0;
};

int main1()
{

    Person p("Rushi", 1);
    p.displayRecord();
    Employee e(10, 20);
    e.showRecord();

    return 0;
};