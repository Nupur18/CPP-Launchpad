#include<iostream>
using namespace std;

// function
void sum( int x, int y )
{
    int sum = x+y;
    cout<<"Sum is "<<sum<<endl;
}  

int main()
{
    int x,y;
    cin>>x>>y;

    sum(x,y); // function calling or invoking

    return 0;
}