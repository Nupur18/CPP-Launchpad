#include<iostream>
using namespace std;

// function
int sum( int a, int b )
{
    int sum = a + b;
    return sum;
}  

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<"Sum is "<<sum(x,y); // function calling or invoking
    // or
    // int val = sum(x,y);
    // cout<<val;
    return 0; // returned to compiler
}