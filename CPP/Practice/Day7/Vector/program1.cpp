#include<iostream> 
#include<vector> 
using namespace std; 

int main1()
{
    vector<int> v1; 

    v1.push_back(10); 
    v1.push_back(20); 
    v1.push_back(30); 
    v1.push_back(40); 
    v1.push_back(50); 

    //cout<<"Capacity : "<<v1.capacity( )<<endl; 
    //cout<<"size : "<<v1.size( )<<endl; 
    
    //v1.erase(v1.begin() + 2); 

    for(vector<int> :: iterator itr = v1.begin() ; itr!=v1.end( ) ; itr++)
                cout<<*itr<<endl; 
    return 0;
}
int main()
{
    vector<int> v1; 

    v1.push_back(10); 
    v1.push_back(20); 
    v1.push_back(30); 
    v1.push_back(40); 
    v1.push_back(50); 

    //cout<<"Capacity : "<<v1.capacity( )<<endl; 
    //cout<<"size : "<<v1.size( )<<endl; 
    
    v1.erase(v1.begin() + 2); 

    for(int i = 0 ; i < v1.size( ) ; i++)
        cout<<v1[i]<<endl; 
    return 0;
}