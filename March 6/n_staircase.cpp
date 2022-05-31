#include<iostream>
using namespace std;

int n_stairs(int n)     // k=3
{
    // base case
    if (n==0)
    {
        return 1;
    }
    if (n<0)
    {
        return 0;
    }

    // recursive case
    return n_stairs(n-1) + n_stairs(n-2) + n_stairs(n-3);
    // or 
    // int ans = 0;
    // for (int i = 1; i <= 3; i++)
    // {
    //     ans = ans + n_stairs(n-i);
    // }
    // return ans;
    
}

int solve_n_stairs(int n, int k)
{
    // base case
    if (n==0)
    {
        return 1;
    }
    if (n<0)
    {
        return 0;
    }

    // recursive case
    int ans = 0;
    for (int i = 1; i <= k ; i++)
    {
        ans = ans + solve_n_stairs(n-i, k);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<n_stairs(n)<<endl;
    int k;
    cin>>k;
    cout<<solve_n_stairs(n, k)<<endl;
    return 0;
}