#include <iostream>
#include <map>
using namespace std;
int main(int argc, char const *argv[])
{
    map<int, string> m1;

    m1[100] = "Rahul";
    m1[56] = "Amit";
    m1[201] = "Sagar";
    m1[333] = "Anil";

    m1[100] = "Akshay";

    for (map<int, string>::iterator itr = m1.begin(); itr != m1.end(); itr++)
        cout << itr->first << "- " << itr->second << endl;
    return 0;
}