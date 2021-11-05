#include<iostream>
using namespace std;

int multiply(int a, int b)
{
    // base case
    if (b==0)
    {
        return 0;
    }

    // recursive case
    int chotaAns = multiply(a, b-1);
    int badaAns = a + chotaAns;
    return badaAns;
    // or 
    // return a + multiply(a, b-1);
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<multiply(a,b)<<endl;
    return 0;
}