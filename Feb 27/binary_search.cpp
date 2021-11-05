#include<iostream>
using namespace std;

int binarySearch_recursion(int *arr, int key, int s, int e)
{
    // base case
    if (s>e)
    {
        return -1;
    }
    
    // recursive case
    int mid = (s+e)/2;
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] > key)
    {
        return binarySearch_recursion(arr, key, s, mid-1);
    }
    else
    {
        return binarySearch_recursion(arr, key, mid+1, e);
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
    int key;
    cout<<"Enter the number to be searched : ";
    cin>>key;
    cout<<key<<" is present at index "<<binarySearch_recursion(arr, key, 0, n-1);
    return 0;
}