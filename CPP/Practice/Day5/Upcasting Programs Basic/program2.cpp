#include <iostream>

using namespace std;

class Product
{
private:
    string title;
    double price;

public:
    Product(void) : title(" "), price(0.0) {}

    void acceptRecord(void)
    {
        cout << "Title : ";
        cin >> title;
        cout << "Price : ";
        cin >> price;
    }
    void printRecord(void)
    {
        cout << "Title : " << title << endl;
        cout << "Price : " << price << endl;
    }
};

class Book : public Product
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
        Product::acceptRecord();
        cout << "PageCount : ";
        cin >> pageCount;
    }
    void printRecord(void)
    {
        Product::printRecord();

        cout << "PageCount : " << pageCount << endl;
    }
};

class Tape : public Product
{
private:
    string title;
    double price;
    int playTime;

public:
    Tape(void) : playTime(0)
    {
    }
    void acceptRecord(void)
    {

        Product::acceptRecord();
        cout << "playTime : ";
        cin >> playTime;
    }
    void printRecord(void)
    {
        Product::printRecord();
        cout << "PageCount : " << playTime << endl;
    }
};

int main1(int argc, char const *argv[])
{
    Tape tape;
    tape.acceptRecord();
    tape.printRecord();
    return 0;
}

int main(int argc, char const *argv[])
{
    Book b1;
    b1.acceptRecord();
    b1.printRecord();
    return 0;
}