#include<iostream>
using namespace std;

int fibo(int n)
{
    // base case
    if (n==0 || n==1)
    {
        return n;
    }
    
    // recursive case
    return fibo(n-1) + fibo(n-2);
}

int top_down(int n, int* dp)
{
    // base case
    if (n==0 || n==1)
    {
        return dp[n]=n;
    }
    
    // calculate karne se pehle check
    if (dp[n] != -1)
    {
        return dp[n];
    }
    
    // recursive case

    // return karne se pehle store
    dp[n] = top_down(n-1, dp) + top_down(n-2, dp);
    return dp[n];   //or  return top_down(n-1) + top_down(n-2);
    // or return dp[n] = top_down(n-1, dp) + top_down(n-2, dp);
}

int bottom_up(int n)
{
    int* arr = new int[n+1];
    // initialisation - base case of top down becomes initialisation here
    arr[0] = 0;
    arr[1] = 1;

    // loop
    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }

    cout<<endl<<"Printing the bottom_up array :- "<<endl;
    for (int i = 0; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans = arr[n];
    delete []arr;
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<endl<<fibo(n)<<endl;
    int *arr = new int[n+1];
    for (int i = 0; i <= n; i++)
    {
        arr[i] = -1;
    }
    cout<<endl<<"Top down - "<<top_down(n,arr)<<endl;
    cout<<endl<<"Printing the top_down array :- "<<endl;
    for (int i = 0; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    cout<<"Bottom up - "<<bottom_up(n)<<endl;
    delete []arr;
    return 0;
}