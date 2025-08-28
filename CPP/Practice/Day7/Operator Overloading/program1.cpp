#include <iostream>

using namespace std;

struct Point
{
    int xPos;
    int yPos;
};
int main(int argc, char const *argv[])
{
    struct Point pt1 = {11, 22};
    struct Point pt2 = {33, 44};
    //struct Point pt3 = pt1 + pt2;
    return 0;
}