#include<iostream>
using namespace std;

void multiply(int *a, int &n, int no)
{
    int carry = 0;
    for (int i = 0; i < n; i++)
    {
        int product = a[i] * no + carry;
        a[i] = product%10;
        carry = product/10;
    }
    while (carry != 0)
    {
        a[n] = carry%10;
        carry = carry/10;
        n++;
    }
}

void factorial(int num)
{
    int a[1000];
    // hume garbage value nhi chahiye
    for (int i = 0; i < 1000; i++)
    {
        a[i] = 0;
    }
    a[0] = 1;
    // n counts till how many places I have to go
    int n = 1;
    for (int i = 2; i <=  num; i++)
    {
        multiply(a, n, i);
    }
    for (int i = n-1; i >= 0; i--)
    {
        cout<<a[i];
    }
    cout<<endl;
}

int main()
{
    int n; 
    cin>>n;
    factorial(n);
    return 0;
}