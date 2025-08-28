#include <iostream>
using namespace std;

class Shape
{
protected:
    float area;

public:
    virtual void calArea() = 0;

    void printRecord()
    {
        cout << "Area :" << this->area;
    }

    ~Shape()
    {

        cout << endl;
        cout << "~Shape()" << endl;
    }
};

class Rectangle : public Shape
{
private:
    double length;
    double breadth;

public:
    void setLength(double length)
    {
        this->length = length;
    }

    void setBreadth(double breadth)
    {
        this->breadth = breadth;
    }

    void calArea()
    {
        this->area = this->length * this->breadth;
    }
};

class Math
{

public:
    const static float PI;

    static int pow(float base, float index)
    {

        float result = 1.0;

        for (int i = 0; i < index; i++)
        {
            result = result * i;
        }

        return result;
    }
};

const float Math::PI = 3.141;

class Circle : public Shape
{
private:
    double radius;

public:
    void setRadius(double radius)
    {
        this->radius = radius;
    }

    void calArea()
    {
        this->area = Math::PI * Math::pow(this->radius, 2);
    }
};

void acceptRecord(Shape *shape)
{

    if (typeid(*shape) == typeid(Rectangle))
    {

        Rectangle *rect = (Rectangle *)shape;
        float length, breadth;

        cout << "Enter Length:" << endl;
        cin >> length;
        rect->setLength(length);

        cout << "Enter Breadth:" << endl;
        cin >> breadth;
        rect->setBreadth(breadth);
    }
    else if (typeid(shape) == typeid(Circle))
    {
        Circle *circle = (Circle *)shape;
        float radius;

        cout << "Enter Radius:" << endl;
        cin >> radius;
        circle->setRadius(radius);
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
}

void printRecord(Shape *shape)
{

    shape->printRecord();
}

int menuList()
{
    int choice;
    cout << "0.Exit" << endl;
    cout << "1.Rectangle" << endl;
    cout << "2.Circle" << endl;

    cin >> choice;
    return choice;
}

int main()
{
    int choice;

    while ((choice = ::menuList()) != 0)
    {
        Shape *shape = NULL;

        switch (choice)
        {
        case 1:
        {
            shape = new Rectangle();
            break;
        }
        case 2:
        {
            shape = new Circle();
            break;
        }
        default:
            cout << "end of the line" << endl;
            break;
        }

        cout << "          " << shape;

        if (shape != NULL)
        {
            ::acceptRecord(shape);
            shape->calArea();
            ::printRecord(shape);
        }

        delete shape;
        shape = NULL;
    }

    return 0;
}
