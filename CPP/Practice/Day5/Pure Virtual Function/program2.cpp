#include<iostream> 

using namespace std; 

class Shape 
{
    protected: 
    float area;
    public: 
    virtual void acceptRecord( void )
    {
        //TODO 
    } 
    virtual void calculateArea( void )
    {
        //TODO 
    }
    void printRecord( void )
    {
        cout<<"Area : "<<area; 
    }
}; 
class Rectangle : public Shape 
{
    private: 
    float length; 
    float breadth; 
    public: 
    Rectangle( void ) : length(0) , breadth(0)
    {   }
    void acceptRecord( void )
    {
        cout<<"Length : "; 
        cin>>length; 
        cout<<"Breadth : "; 
        cin>>breadth; 
    }
    void calculateArea( void )
    {
        this->area = this->length * this->breadth; 
    }  
};
class Math
{
    public: 
    static const float PI; 
    static float pow(float base , int index)
    {
        float result = 1.0; 
        for(int count = 1 ; count<=index ; count++)
        {
            result = result * base; 
        } 
        return result; 
    }

}; 
const float Math :: PI = 3.142; 
class Circle : public Shape
{
    private: 
    float radius; 
    public: 
    void acceptRecord( void )
    {
        cout<<"Radius : "; 
        cin>>radius; //3.00
    }
    void calculateArea( void )
    {
        this->area = Math::PI * Math::pow(this->radius , 2); 
    }
    void printRecord( void )
    {
        cout<<"Area : "<<this->area<<endl; 
    }

};
int main(int argc, char const *argv[])
{
    Circle c; 
    c.acceptRecord( ); 
    c.calculateArea( ); 
    c.printRecord( ); 
    return 0;
}

int main1(int argc, char const *argv[])
{
    Rectangle rect; 
    rect.acceptRecord( ); 
    rect.calculateArea( ); 
    
    return 0;
}
 