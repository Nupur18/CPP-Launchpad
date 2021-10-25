#include<iostream>
using namespace std;

void takeInput(int a[], int &n)
{
    // cin>>n; If we write cin>>n in takeInput and not in main(), then compiler will give segmentation fault.
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}

int sumArray(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

int main()
{
    // input manually
    // int a[] = {1,2,6,4,5,3,9,40};
    // int n = sizeof(a)/sizeof(int);

    // input from user
    int a[100],n;
    cin>>n;
    takeInput(a,n);
    cout<<"Total sum is "<<sumArray(a,n)<<endl;
    return 0;
}