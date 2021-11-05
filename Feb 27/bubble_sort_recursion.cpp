#include<iostream>
using namespace std;

// this function works like the outer loop in bubble sort
void bubbleSort_recursion1(int *arr, int n, int i)
{
    // base case
    if (i == n-1)
    {
        return;
    }

    // recursive case
    for (int j = 0; j < n-1-i; j++)    // places 1 element at correct position
    {
        if (arr[j]>arr[j+1])
        {
            swap(arr[j], arr[j+1]);
        }
    }
    bubbleSort_recursion1(arr, n, i+1);
}

void bubbleSort_recursion2(int *arr, int n, int i, int j)
{
    // base case
    if (i == n-1)
    {
        return;
    }
    
    // recursive case
    if (j == n-1-i) // j jab n-1-i hoga to 1 element apni sahi jaga aa gya hoga aur baki ko sahi jaga lana hai
    {
        bubbleSort_recursion2(arr, n, i+1, 0);
    }
    else
    {
        if (arr[j]>arr[j+1])
        {
            swap(arr[j], arr[j+1]);
        }
        bubbleSort_recursion2(arr, n, i, j+1);
    }
}

int main()
{
    int arr[100];
    cout<<"Enter the number of elements : ";
    int n;
    cin>>n;
    cout<<"Enter the elements :-"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    bubbleSort_recursion1(arr, n, 0);
    cout<<"Sorted array is :-"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    bubbleSort_recursion2(arr, n, 0, 0);
    cout<<"Sorted array is :-"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}