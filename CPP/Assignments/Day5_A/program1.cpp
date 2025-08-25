#include <iostream>
using namespace std;

class Shape
{

private:
    double volume;

public:
    Shape() : volume(0.00) {}
    // virtual void acceptData() = 0;
    void calVolume() {

    };

    void printData()
    {
        cout << "Volume is:" << volume << endl;
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

class Cylinder : public Shape
{
private:
    double height;
    double radius;

public:
    Cylinder() : height(0.0), radius(0.0) {}
    Cylinder(int height, int radius) : height(height), radius(radius) {}

    void acceptData()
    {
        cout << "Height:";
        cin >> height;

        cout << "radius:";
        cin >> radius;
    }

    double calVolume(double height, double radius)
    {

        double volume = Math::PI * Math::pow(radius, 2) * height;
        return volume;
    }

    void setHeight(double height)
    {
        this->height = height;
    }
    double getHeight()
    {
        return this->height;
    }

    void setRadius(double radius)
    {
        this->radius = radius;
    }
    double gettRadius()
    {
        return this->radius;
    }
};

int main()
{

    Cylinder c;
    c.setHeight(10.00);
    c.setRadius(10.00);
    c.calVolume(10, 10);
}
