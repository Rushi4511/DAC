#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(void) : name(""), age(0)
    {
        cout << "Person()" << endl;
    }
    Person(string name, int age) : name(name), age(age)
    {
        cout << "Person(string name, int age)" << endl;
    }

    ~Person(void)
    {
        cout << "~Person()" << endl;
    }

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
    Employee(void) : empId(0), empSal(0)
    {
        cout << "Employee()" << endl;
    }
    Employee(string name, int age, int empId, int empSal) : empId(empId), empSal(empSal)
    {
        cout << "Employee(int empId, int empSal)" << endl;
    }

    ~Employee(void)
    {
        cout << "~Employee()" << endl;
    }

    void showRecord()
    {
        cout << "Employee ID is:" << empId << endl;
        cout << "Employee Salary is:" << empSal << endl;
    }
};
int main()
{
    Employee *ptr = new Employee("Rushi", 25, 10, 25000);
    ptr->displayRecord();
    delete ptr;
    ptr = NULL;

    return 0;
};

int main1()
{
    Person *ptr = new Person("Rushi", 25);
    ptr->displayRecord();

    return 0;
};
