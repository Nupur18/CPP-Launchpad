#include<iostream>
using namespace std;
int main()
{
    int age = 10;
    
    // we can either use if-else or tertiary operator
    if (age<8)
    {
        cout<<"age is less than 8"<<endl;
    }
    else
    {
        cout<<"age is more than 8"<<endl;
    }
    
    // tertiary operator
    age<8 ? cout<<"age is less than 8"<<endl : cout<<"age is more than 8"<<endl;
    return 0;
}