#include<iostream>
using namespace std;

bool is7present(int *a, int n)
{
    // base case
    if(n==0)
    {
        return false;
    }
    // recursive case
    if (a[0]==7)
    {
        return true;
    }
    return is7present(a+1, n-1);
}

int first7(int *a, int n, int i)
{
    // base case
    if (i==n)
    {
        return -1;
    }
    // recursive case
    if (a[i]==7)
    {
        return i;
    }
    return first7(a, n, i+1);
}

int last7(int *a, int n, int i)
{
    // base case
    if (i==-1)
    {
        return -1;
    }
    // recursive case
    if (a[i]==7)
    {
        return i;
    }
    return last7(a, n, i-1);
}

void allIndices(int *a, int n, int i)
{
    // base case
    if (i==n)
    {
        return;
    }
    // recursive case
    if (a[i]==7)
    {
        cout<<i<<" ";
    }
    allIndices(a, n, i+1);
}

int main()
{
    int arr[] = {1, 2, 6, 7, 3, 5, 7, 9};
    int n = sizeof(arr)/sizeof(int);
    bool x = is7present(arr, n);
    if (x)
    {
        cout<<"7 is present in array"<<endl;
    }
    else
    {
        cout<<"7 is not present in array"<<endl;
    }

    cout<<"First 7 is prsent at index "<<first7(arr, n, 0)<<endl;
    cout<<"Last 7 is prsent at index "<<last7(arr, n, n-1)<<endl;
    allIndices(arr, n, 0);
    return 0;
}