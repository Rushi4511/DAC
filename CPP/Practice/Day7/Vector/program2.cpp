#include<iostream> 
#include<stack> 
#include<queue> 
using namespace std; 
int main(int argc, char const *argv[])
{
    stack<int> s1; 

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);

    cout<<"Element at top pos : "<<s1.top()<<endl; 

    while(!s1.empty())
    {
        cout<<"Popped element is "<<s1.top()<<endl; 
        s1.pop( ); 
    }
    return 0;
}
int main1(int argc, char const *argv[])
{
    queue<int> s1; 

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);

    cout<<"Element at top pos : "<<s1.front()<<endl; 

    while(!s1.empty())
    {
        cout<<"Popped element is "<<s1.front()<<endl; 
        s1.pop( ); 
    }
    return 0;
}