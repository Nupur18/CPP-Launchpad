#include<iostream>
using namespace std;

int *f(int n)
{
    int *arr = new int[1000];
    for (int i = 0; i < n; i++)
    {
        cin>>*(arr+i);
    }
    return arr; // adress of first bucket 
}

int main()
{
    int n;
    cin>>n;
    int *aptr = f(n);
    for (int i = 0; i < n; i++)
    {
        cout<<aptr[i]<<" ";  // same as *(aptr + i)
    }

    delete []aptr;
    aptr = NULL;

    return 0;
}

// two or more pointers can point to a same location