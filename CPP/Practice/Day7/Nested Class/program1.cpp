#include<iostream> 

using namespace std; 

class Outer 
{
    private: 
    class Inner 
    {

    }; 
    friend int main(); 
}; 
int main()
{
    Outer out; //outer class Object 
    Outer::Inner in; // Inner class Object 
    return 0;
}

/* 
class Outer 
{
    public: 
    class Inner 
    {

    }; 
}; 
int main(int argc, char const *argv[])
{
    Outer out; //outer class Object 
    Outer::Inner in; // Inner class Object 
    return 0;
}
*/ 