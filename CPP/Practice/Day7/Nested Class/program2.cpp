#include<iostream> 

using namespace std; 

class Outer 
{
    private: 
    int num1; 
    class Inner 
    {
        private: 
        int num2; 
        public: 
        Inner(void) : num2(0)
        {   }
        friend class Outer; 
    }; 
    public: 
    Outer(void ) : num1(0)
    {   }
    void print( void )
    {
        Outer::Inner in; 
        cout<<num1<<endl; 
        cout<<in.num2<<endl; // we cannot access inner members in outer class directly 
    }
}; 
int main(int argc, char const *argv[])
{
    Outer out; // outer-class object 
    out.print( ); 
    return 0;
}