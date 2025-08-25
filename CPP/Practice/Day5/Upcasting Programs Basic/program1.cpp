#include <iostream>

using namespace std;

class Book
{
private:
    string title;
    double price;
    int pageCount;

public:
    Book(void) : title(" "), price(0.0), pageCount(0)
    {
    }
    void acceptRecord(void)
    {
        cout << "Title : ";
        cin >> title;
        cout << "Price : ";
        cin >> price;
        cout << "PageCount : ";
        cin >> pageCount;
    }
    void printRecord(void)
    {
        cout << "Title : " << title << endl;
        cout << "Price : " << price << endl;
        cout << "PageCount : " << pageCount << endl;
    }
};

class Tape
{
private:
    string title;
    double price;
    int playTime;

public:
    Tape(void) : title(" "), price(0.0), playTime(0)
    {
    }
    void acceptRecord(void)
    {
        cout << "Title : ";
        cin >> title;
        cout << "Price : ";
        cin >> price;
        cout << "playTime : ";
        cin >> playTime;
    }
    void printRecord(void)
    {
        cout << "Title : " << title << endl;
        cout << "Price : " << price << endl;
        cout << "PageCount : " << playTime << endl;
    }
};

int main(int argc, char const *argv[])
{
    Tape tape;
    tape.acceptRecord();
    tape.printRecord();
    return 0;
}

int main1(int argc, char const *argv[])
{
    Book b1;
    b1.acceptRecord();
    b1.printRecord();
    return 0;
}