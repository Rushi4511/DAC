#include<iostream> 

using namespace std; 
class Complex 
{
    int real; 
    int imag; 
    public: 
    Complex( void ) : real(0) , imag(0)
    { }
    Complex(int real , int imag)
    {
        this->real = real; 
        this->imag = imag; 
    }
    void printRecord( )
    {
        cout <<"Real : "<<real<<endl; 
        cout <<"Imag : "<<imag<<endl; 
    }
    //this = &c1 
    bool operator==(Complex &other)
    {
        return this->real == other.real && this->imag == other.imag; 
    }
};
int main(int argc, char const *argv[])
{
    Complex c1(10,20); 
    Complex c2(10,20); 
    bool res = c1 == c2; // res = c1.operator==(c2);
    if(res)
     cout<<"Equal"<<endl; 
    else 
     cout<<"not same"<<endl;   
    return 0;
}
 