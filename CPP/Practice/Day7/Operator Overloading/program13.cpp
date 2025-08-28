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
    friend istream& operator>>(istream &in , Complex &other); 
    friend ostream& operator<<(ostream &out , Complex &other); 
};
istream& operator>>(istream &in , Complex &other)
{
    cout<<"Real : "; 
    in>>other.real; 
    cout<<"Imag : "; 
    in>>other.imag; 
    return in; 
}
ostream& operator<<(ostream &out , Complex &other)
{
    out<<other.real<<endl; 
    out<<other.imag<<endl; 
    return out; 
}
int main()
{
    Complex c1,c2; 
    cin>>c1>>c2; // operator>>(operator>> (cin , c1) , c2);  
    cout<<c1<<endl<<c2; // operator<<(operator<< (cin , c1) , c2);  
    return 0;
}