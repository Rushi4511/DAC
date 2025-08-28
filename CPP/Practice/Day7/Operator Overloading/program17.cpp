#include <iostream>

using namespace std;

class ArrayIndexOutOfBound
{
private:
    string message;

public:
    ArrayIndexOutOfBound(string message)
    {
        this->message = message;
    }
    string getMessage(void)
    {
        return this->message;
    }
};

#define size 3

class Array
{
private:
    int arr[size];

public:
    Array(void)
    {
        arr[0] = 10;
        arr[1] = 20;
        arr[2] = 30;
    }
    int operator[](int index)
    {
        if (index >= 0 && index < size)
            return arr[index];
        else
            throw ArrayIndexOutOfBound("Invalid index");
    }
};
int main(int argc, char const *argv[])
{
    Array a1;
    int element = a1[0]; // a1.operator[](0);
    cout << element << endl;
    return 0;
}