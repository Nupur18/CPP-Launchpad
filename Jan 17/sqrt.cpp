#include<iostream>
using namespace std;
int main()
{
    int no, precision;
    cout<<"Enter number : ";
    cin>>no;
    cout<<"Enter precision : ";
    cin>>precision;
    float i = 0;
    float inc = 1;
    for (int j = 0; j <= precision; j++)
    {
        while (i*i <= no)
        {
            i = i + inc;
        }
        i = i - inc;
        inc = inc/10;
    }
    cout<<"Square root of "<<no<<" is "<<i;
    return 0;
}