#include<iostream>
using namespace std;

int sum1(int *a, int n)
{
    // base case (matlab sabse chota case)
    if (n==0)
    {
        return 0;
    }
    // recursive case
    int chotiProblem = sum1(a+1, n-1);
    int badiProblem = a[0] + chotiProblem;
    return badiProblem;

    // or return a[0] + sum(a+1, n-1);
}

int sum2(int *a, int n, int i)
{
    // base case (matlab sabse chota case)
    if (i==n)
    {
        return 0;
    }
    // recursive case
    int chotiProblem = sum2(a, n, i+1);
    int badiProblem = a[i] + chotiProblem;
    return badiProblem;

    // or return a[i] + sum(a, n, i+1);
}

int sum3(int *a, int n)
{
    // base case (matlab sabse chota case)
    if (n==0)
    {
        return 0;
    }
    // recursive case
    return sum3(a, n-1) + a[n-1];
}

int main()
{
    int a[] = {1, 4, 5, 8, 9, 10};
    int n = sizeof(a)/sizeof(int);
    int x1 = sum1(a,n);
    cout<<"Sum is "<<x1<<endl;
    int x2 = sum2(a,n,0);
    cout<<"Sum is "<<x2<<endl;
    int x3 = sum3(a,n);
    cout<<"Sum is "<<x3<<endl;
    return 0;
}