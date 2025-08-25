#include <iostream>

using namespace std;

class Shape
{
protected:
    float area;

public:
    virtual void acceptRecord(void) = 0;
    virtual void calculateArea(void) = 0;
    void printRecord(void)
    {
        cout << "Area : " << area << endl;
    }
};
class Rectangle : public Shape
{
private:
    float length;
    float breadth;

public:
    Rectangle(void) : length(0), breadth(0)
    {
    }
    void acceptRecord(void)
    {
        cout << "Length : ";
        cin >> length;
        cout << "Breadth : ";
        cin >> breadth;
    }
    void calculateArea(void)
    {
        this->area = this->length * this->breadth;
    }
};
class Math
{
public:
    static const float PI;
    static float pow(float base, int index)
    {
        float result = 1.0;
        for (int count = 1; count <= index; count++)
        {
            result = result * base;
        }
        return result;
    }
};
const float Math ::PI = 3.142;
class Circle : public Shape
{
private:
    float radius;

public:
    void acceptRecord(void)
    {
        cout << "Radius : ";
        cin >> radius; // 3.00
    }
    void calculateArea(void)
    {
        this->area = Math::PI * Math::pow(this->radius, 2);
    }
    void printRecord(void)
    {
        cout << "Area : " << this->area << endl;
    }
};
class ShapeFactory
{
public:
    static Shape* getInstance(int choice)
    {
        Shape *shape = NULL;
        switch (choice)
        {
        case 1:
            shape = new Rectangle(); // Upcasting
            break;
        case 2:
            shape = new Circle(); // upcasting
        }
        return shape; 
    }
    static int menuList(void)
    {
        int choice;
        cout << "0.Exit" << endl;
        cout << "1.Rectangle" << endl;
        cout << "2.Circle" << endl;
        cout << "Enter the choice : ";
        cin >> choice;
        return choice;
    }
}; 

//Factory Method Pattern (simple form).
int main(int argc, char const *argv[])
{
    int choice; 
    while((choice = ShapeFactory::menuList())!=0)
    {
        Shape *ptr = ShapeFactory::getInstance(choice);   
        if (ptr != NULL)
        {
            ptr->acceptRecord();  // runtime polymorphism
            ptr->calculateArea(); // runtime polymorphism
            ptr->printRecord();   
        }
    }
    return 0;
}