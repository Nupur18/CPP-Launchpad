#include<iostream>
using namespace std;

void printArray(int a[], int x) // we can use any other array name or variable name 
// or
// void printArray(int a[100], int x) // main me aur function me array size should be same
{
    cout<<"Inside printArray function"<<endl;
    for (int i = 0; i < x; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void update(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] + 1;
    }
}

int main()
{
    // int a[] = {1,2,6,4,5,3,9,40};
    // int n = sizeof(a)/sizeof(int);
    // cout<<"Inside main function"<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;

    // input from user
    int arr[100],n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array before updation :-"<<endl;
    printArray(arr,n);

    update(arr,n);
    cout<<"Array after updation :-"<<endl;
    printArray(arr,n);

    return 0;
}