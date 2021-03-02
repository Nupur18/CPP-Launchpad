#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    int x=ch; // implicit type conversion

    // FIRST SOLUTION
    // if (x>=65 && x<=90)
    // {
    //     cout<<"uppercase"<<endl;
    // }
    // else if (x>=97 && x<=122)
    // {
    //     cout<<"lowercase"<<endl;
    // }
    // else
    // {
    //     cout<<"invalid character"<<endl;
    // }
    
    // FIRST SOLUTION
    if (x>='A' && x<='Z')
    {
        cout<<"uppercase"<<endl;
    }
    else if (x>='a' && x<='z')
    {
        cout<<"lowercase"<<endl;
    }
    else
    {
        cout<<"invalid character"<<endl;
    }
    
    return 0;
}