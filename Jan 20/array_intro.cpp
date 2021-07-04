#include <iostream>
using namespace std;
int main()
{
    // int arr[5];
    // arr[0] = 40;
    // arr[1] = 50;
    // arr[2] = 60;
    // arr[3] = 70;
    // arr[4] = 80;

    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl;
    // cout<<arr[4]<<endl;

    // initialisation of array
    // int arr[5] = {1,2,3,4,5}

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // If we are giving values at the time of initialisation then there it is not necessary to give buckets size
    // int arr[] = {15,26,33,42,56};
    // int n = sizeof(arr)/sizeof(int); // this is to find size of an array
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    // Taking input in array from user
    // int a[100];
    // int n;
    // cin>>n;
    // // Input
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    // // Output
    // cout<<"After printing array :-"<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }

    // int arr[100] = {1}; // 100 buckets will be made. arr[0] will store 1 and rest all buckets will store 0 by default if ek bhi jagah koi value dalte ho to.
    // for (int i = 0; i < 100; i++)
    // {
    //     cout<<a[i]<<" ";
    // }

    // int arr[100] = {1,2,3}; // 100 buckets will be made. arr[0] will store 1, arr[1] will store 2 and arr[2] will store 3 and rest all buckets will store 0 by default.
    // for (int i = 0; i < 100; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    int arr[100]; // In this case garbage value will be printed
    for (int i = 0; i < 100; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}