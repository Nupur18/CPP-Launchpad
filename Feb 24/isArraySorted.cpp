#include<iostream>
using namespace std;

bool isSorted(int *a, int n)
{
    // base case
    if (n==0 || n==1)
    {
        return true;
    }
    
    // recursive case
    bool isSort = isSorted(a+1, n-1);   // recursive case aur function ka data type is same
    if (a[0]<a[1] && isSort==true)
    {
        return true;
    }
    return false;
}

int main()
{
    int a[] = {1, 7, 5, 8, 9, 10};
    int n = sizeof(a)/sizeof(int);
    if (isSorted(a, n))
    {
        cout<<"Array is sorted";
    }
    else
    {
        cout<<"Array is not sorted";
    }
    return 0;
}