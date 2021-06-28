#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    a=a++; //exceptional case
    cout<<a<<endl;
    cout<<"pre increment : "<<a<<endl;
    a=++a;
    cout<<"post increment : "<<a<<endl;
    a=10;
    a=a--; //exceptional case
    cout<<a<<endl;
    a=--a;
    cout<<a<<endl;

    int b;

    a=10, b=++a;
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;

    a=10, b=a++;
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;

    a=10, b=--a;
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;

    a=10, b=a--;
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;

    int x=2;
    x = ++x + ++x + ++x;
    //   3 +  4  + 5
    // compiler to compiler is different 
    cout<<"x is "<<x;
    return 0;
}