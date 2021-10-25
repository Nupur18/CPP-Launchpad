#include<iostream>
using namespace std;

bool isPrime(int n)
{
    int i = 2;
    while (i<n)
    {
        if (n%i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
    // or
    // if(i==n)
    // {
    //     return true;
    // }
}

int main()
{
    int n;
    cin>>n;
    if (isPrime(n))
    {
        cout<<"Number is prime";
    }
    else
    {
        cout<<"Number is not prime";
    }
    return 0;
}