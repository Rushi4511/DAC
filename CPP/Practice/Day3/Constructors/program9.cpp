#include <iostream>
using namespace std;
class Test
{
private:
    int num1;
    int num2;
    int num3;

public:
    Test(void);
    Test(int n1, int n2, int n3);
    void printRecord(void);
};
Test ::Test(void) : num3(num2), num2(num1), num1(0)
{
}
Test ::Test(int n1, int n2, int n3) : num1(n1), num2(n2), num3(n3)
{
}
void Test ::printRecord(void)
{
    cout << "num1 : " << num1 << endl;
    cout << "num2 : " << num2 << endl;
    cout << "num3 : " << num3 << endl;
}
int main(int argc, char const *argv[])
{
    Test t2(1, 2, 3);
    t2.printRecord();
    return 0;
}

/*
class Test
{
    private:
    int num1;
    int num2;
    int num3;
    public:
    Test( void ) : num3(num2) , num2(num1) , num1(0)
    {

        // this->num3 = num2;
        // this->num2 = num1;
        // this->num1 = 0;

    }
    Test( int n1 , int n2 , int n3 ) : num1(n1) , num2(n2) , num3(n3)
    {


        //     this->num1 = n1;
        //     this->nun2 = n2;
        //     this->num3 = n3;
        //
    }
    void printRecord( void )
    {
        cout<<"num1 : "<<num1<<endl;
        cout<<"num2 : "<<num2<<endl;
        cout<<"num3 : "<<num3<<endl;
    }
};
int main(int argc, char const *argv[])
{
    Test t2(1,2,3);
    t2.printRecord( );
    return 0;
}

int main1()
{
    Test t1;
    t1.printRecord( );
    return 0;
}
*/