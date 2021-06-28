#include<iostream>
using namespace std;
#define pi 3.14 //program me kahi bhi pi ki jagah 3.14 dal dena
#define semicolon ;
#define print cout<<
#define f(n) for(int i=0;i<n;i++) {cout<<"hello"<<endl;}
int main()
{
    #define pii 30
    cout<<pii<<endl;
    const int b=10;
    cout<<b<<endl;
    // can't write like this a=50; or a=a+50;
    // const int a; --> this will give an error you have to initialise constant at the time of declaration
    // a=10; --> this will give an error;
    const int a=10;
    cout<<a<<endl;
    print 2*pi*1<<endl semicolon
    f(2);
    return 0;
}