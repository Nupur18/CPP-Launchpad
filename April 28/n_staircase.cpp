#include<iostream>
using namespace std;

int n_staircase(int n, int k)
{
    // base case
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }
    
    // recursive case
    int ans = 0;
    for (int i = 1; i <= k; i++)
    {
        ans += n_staircase(n-i,k);
    }
    return ans;
}

int top_down(int n, int k, int* dp)
{
    // base case
    if (n == 0)
    {
        return dp[n] = 1;
    }
    if (n < 0)
    {
        return 0;
    }
    
    // recursive case
    if (dp[n] != -1)    // calculate karne se pehle check
    {
        return dp[n];
    }
    int ans = 0;
    for (int i = 1; i <= k; i++)
    {
        ans += n_staircase(n-i,k);
    }
    return dp[n] = ans;
}

int bottom_up(int n, int k)
{
    int dp[1000] = {0};
    dp[0] = 1;  // initialisation condition
    for (int i = 1; i <= n; i++)
    {
        int ans = 0;
        for (int j = 1; j <= k; j++)
        {
            if (i >= j)
            {
                ans += dp[i-j];
            }
        }
        dp[i] = ans;
    }
    return dp[n];
}

int bottom_up_optimised(int n, int k)
{
    int dp[1000];
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        if (i-1-k >= 0)
        {
            dp[i] = 2*dp[i-1] - dp[i-1-k];
        }
        else
        {
            dp[i] = 2*dp[i-1];
        }
    }
    return dp[n];
}

int main()
{
    int n,k;
    cin>>n>>k;
    int dp[1000];
    memset(dp,-1,sizeof(dp));
    cout<<"Recursion - "<<n_staircase(n,k)<<endl;
    cout<<"Top down - "<<top_down(n,k,dp)<<endl;
    cout<<"Bottom up - "<<bottom_up(n,k)<<endl;
    cout<<"Optimised bottom up - "<<bottom_up_optimised(n,k)<<endl;
    return 0;
}