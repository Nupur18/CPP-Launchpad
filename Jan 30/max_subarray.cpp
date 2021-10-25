#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, i, j, k;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Printing Array : -"<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // finding & printing subarrays
    // for (i = 0; i <= n-1; i++)
    // {
    //     for (j = i; j <= n-1; j++)
    //     {
    //         //the k loop will print all the subarray that lie between i and j
    //         for (k = i; k <= j; k++)
    //         {
    //             cout<<arr[k]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }

    // int sum, max_sum = INT_MIN;
    // for (i = 0; i <= n-1; i++)
    // {
    //     for (j = i; j <= n-1; j++)
    //     {
    //         sum = 0;
    //         for (k = i; k <= j; k++)
    //         {
    //             sum = sum + arr[k];
    //         }
    //         if (sum > max_sum)
    //         {
    //             max_sum = sum;
    //         }  
    //     }
    // }

    int cs = 0, ms = 0;
    for (i = 0; i < n; i++)
    {
        cs = cs + arr[i];
        if (cs<0)
        {
            cs = 0;
        }
        ms = max(ms,cs);
    }
    cout<<"Maximum subarray sum is "<<ms;
    return 0;
}