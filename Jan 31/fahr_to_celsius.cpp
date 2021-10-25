#include<iostream>
using namespace std;

// function with 0 argument
void printing(int ival, int fval, int step)
{
    for (int f = ival; f <= fval; f = f + step)
    {
        int cel = (5/9.0)*(f-32);
        cout<<f<<" "<<cel<<endl;
    }
}

int main()
{
    int ival, fval, step;
    cin>>ival>>fval>>step;
    printing(ival, fval, step);
    return 0;
}