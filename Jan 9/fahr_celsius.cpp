#include<iostream>
using namespace std;
int main()
{
    int ival, fval, step;
    cin>>ival>>fval>>step;

    int f = ival; //initialisation
    while (f<=fval) //condition check
    {
        int cel = ((5)*(f-32))/9; 
        // or int cel = (5/9.0)*(f-32);  this is called explicit type conversion
        // or int cel = float(5)/9*(f-32);  this is called explicit type conversion
        cout<<f<<" "<<cel<<endl;
        f = f + step; //updation
    }
    return 0;
}