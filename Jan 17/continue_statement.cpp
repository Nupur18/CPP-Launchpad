#include<iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i==4)
        {
            continue; // control comes to i++ i.e. loop
        }
        cout<<"value of i is "<<i<<endl;
    }
    for (int j = 0; j <= 10; j++)
    {
        cout<<"value of j is "<<j<<endl;
        if (j==4)
        {
            continue; // control comes to i++ i.e. loop
        }
    }
    for (int k = 0; k <= 10; k++)
    {
        if (k==4 || k==6 || k==8)
        {
            continue; // control comes to i++ i.e. loop
        }
        cout<<"value of k is "<<k<<endl;
    }
    return 0;
}