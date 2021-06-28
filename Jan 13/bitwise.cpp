#include<iostream>
using namespace std;
int main()
{
    // bitwise and
    cout<<"value of (5&7) is "<<(5&7)<<endl;
    cout<<"value of (5&2) is "<<(5&2)<<endl;
    cout<<"value of (8&7) is "<<(8&7)<<endl;

    // bitwise or
    cout<<"value of (5|7) is "<<(5|7)<<endl;
    cout<<"value of (5|2) is "<<(5|2)<<endl;
    cout<<"value of (8|7) is "<<(8|7)<<endl;

    // left shift operator
    int a=15;
    cout<<"value of a<<2 is "<<(a<<2)<<endl;

    // right shift operator 
    int b=20;
    cout<<"value of b>>2 is "<<(b>>2)<<endl;
    return 0;
}

