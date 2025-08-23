#include <iostream>
using namespace std;

class Volume
{

private:
    int length;
    int breadth;
    int height;

    double volume;

public:
    Volume()
    {
        this->length = 0;
        this->breadth = 0;
        this->height = 0;
    }

    Volume(int value)
    {
        length = breadth = height = value;
    }

    Volume(int length, int breadth, int height)
    {
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }

    void inputData()
    {

        cout << "Length:" << endl;
        cin >> this->length;

        cout << "Breadth:" << endl;
        cin >> this->breadth;

        cout << "Height:" << endl;
        cin >> this->height;
    }

    void outputData()
    {

        cout << "Length:" << this->length << endl;

        cout << "Breadth:" << this->breadth << endl;

        cout << "Height:" << this->height << endl;

        cout << "Volume is :" << this->volume;
    }

    void calVolume()
    {
        this->volume = this->length * this->breadth * this->height;
    }
};

int menuList()
{
    int choice;
    cout << endl;
    cout << "1. Calculate Volume with default values\n2.Calculate Volume with length,breadth and height with same value\n3.Calculate Volume with different length,breadth and height values." << endl;
    cin >> choice;
    return choice;
}

int main()
{
    int choice;
    Volume v1;
    while ((choice = menuList()) != 0)
    {
        switch (choice)
        {
        case 1:
        {
            v1.calVolume();
            v1.outputData();
            break;
        }

        case 2:
        {

            int value;
            cout << "Value:" << endl;
            cin >> value;

            Volume v2(value);
            v2.calVolume();
            v2.outputData();
            break;
        }

        case 3:
        {

            int length;
            cout << "Length:" << endl;
            cin >> length;

            int breadth;
            cout << "Breadth:" << endl;
            cin >> breadth;

            int height;
            cout << "Height:" << endl;
            cin >> height;

            Volume v3(length, breadth, height);
            v3.calVolume();
            v3.outputData();

            break;
        }
        }
    }

    return 0;
}