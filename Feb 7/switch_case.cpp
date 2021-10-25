#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;

    if (ch == 'A')
    {
        cout<<"Value of a is "<<ch<<endl;
    }
    else if (ch == 'B')
    {
        cout<<"Value of b is "<<ch<<endl;
    }
    else if (ch == 'C')
    {
        cout<<"Value of c is "<<ch<<endl;
    }
    else if (ch == 'D')
    {
        cout<<"Value of d is "<<ch<<endl;
    }
    else if (ch == 'E')
    {
        cout<<"Value of e is "<<ch<<endl;
    }
    else if (ch == 'F')
    {
        cout<<"Value of f is "<<ch<<endl;
    }
    else
    {
        cout<<"Invalid "<<ch<<endl;
    }
// OR
    switch (ch)
    {
    case 'A' : cout<<"Value of a is "<<ch<<endl;
               break;
    case 'B' : cout<<"Value of a is "<<ch<<endl;
               break;
    case 'C' : cout<<"Value of a is "<<ch<<endl;
               break;
    case 'D' : cout<<"Value of a is "<<ch<<endl;
               break;
    case 'E' : cout<<"Value of a is "<<ch<<endl;
               break;
    case 'F' : cout<<"Value of a is "<<ch<<endl;
               break;
    default : cout<<"Invalid "<<ch<<endl;   // this is the else part 
    }
    return 0;
}