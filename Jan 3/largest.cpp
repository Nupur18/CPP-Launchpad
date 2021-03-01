#include<iostream> 
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Enter third number : ";
    cin>>c;
    if (a>=b && a>=c)
    {
        cout<<"a is largest with value: "<<a<<endl;
    }
    else if (b>=a && b>=c)
    {
        cout<<"b is largest with value: "<<b<<endl;
    }
    else
    {
        cout<<"c is largest with value: "<<c<<endl;
    }
    return 0;
    
}