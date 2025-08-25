#include<iostream>
#include<typeinfo>
using namespace std; 
class Base 
{

}; 
class Derived : public Base
{

}; 
int main(int argc, char const *argv[])
{
    Derived derived; 
    cout<<typeid(derived).name(); 
    return 0;
}

int main1(int argc, char const *argv[])
{
    Base base; 
    cout<<typeid(base).name(); 
    return 0;
}


/*
using namespace std; 
int main(int argc, char const *argv[])
{
    int number; 
    cout<<typeid(number).name(); 
    Type_info type* = typeid(number);
    return 0;
}
*/ 