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
    friend ostream& operator<<(ostream &out, Complex c1); 
}; 
// ostream &out because if we create the copy , copy ctor of ostream class is  called 
// but copy ctor of ostream class is protected so we need to pass it as a reference 
//overloading insertion operator 
ostream& operator<<(ostream &out, Complex c1)
{
    out<<c1.real<<endl; 
    out<<c1.imag<<endl; 
    return out; 
}
int main(int argc, char const *argv[])
{
    Complex c1(30,40); 
    Complex c2(10,20); 
    cout<<c1<<endl<<c2; //operator<<(operator(cout , c1) , c2) 
    return 0;
}