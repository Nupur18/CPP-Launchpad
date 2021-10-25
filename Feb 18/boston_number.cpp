// prime factors of a number are always less than square root of a number 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, sum_n=0, sump=0;
    cin>>n;
    int temp1 = n;
    // calculating sum of digits
    while (temp1 > 0)
    {
        sum_n = sum_n + temp1%10;
        temp1 = temp1/10;
    }
    // we will handle odd and even prime factors separately 
    while (n%2 == 0)
    {
        sump = sump + 2;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i=i+2)
    {
        while (n%i == 0)
        {
            int temp = i;
            while (temp>0)
            {
                sump = sump + temp%10;
                temp = temp/10;
            }
            n = n/i;
        }  
    }
    if (n>2)
    {
        while (n>0)
        {
            sump = sump + n%10;
            n = n/10;
        }
    }
    if (sum_n == sump)
    {
        cout<<1;
    }
    else
    {
        cout<<0;
    }
    return 0;
}