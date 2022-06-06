#include<iostream>
using namespace std;

int min_to_1(int n)
{
    // base case
    if (n==1)
    {
        return 0;
    }
    
    // recursive case
    int opt1, opt2, opt3;
    opt1 = opt2 = opt3 = INT_MAX;
    opt3 = min_to_1(n-1);
    if (n%3 == 0)
    {
        opt1 = min_to_1(n/3);
    }
    if (n%2 == 0)
    {
        opt2 = min_to_1(n/2);
    }
    return min(opt1, min(opt2, opt3)) + 1;  // min(2 arguments)
}

// top down 
int topdown_min_to_1(int n, int* dp)
{
    // base case
    if (n == 1)
    {
        return dp[n] = 0;
    }
    
    // calculate karne se pehle check
    if (dp[n] != -1)
    {
        return dp[n];
    }
    
    // recursive case
    int opt1, opt2, opt3;
    opt1 = opt2 = opt3 = INT_MAX;
    opt3 = topdown_min_to_1(n-1,dp);
    if (n%3 == 0)
    {
        opt1 = topdown_min_to_1(n/3,dp);
    }
    if (n%2 == 0)
    {
        opt2 = topdown_min_to_1(n/2,dp);
    }

    // return se pehle store
    return dp[n] = min(opt1, min(opt2, opt3)) + 1;  // min(2 arguments)
}

// bottom up
int bottomup_min_to_1(int n)
{
    int* dp = new int[n+1];
    // initialisation - base case of top down becomes initialisation here
    dp[1] = 0;
    int opt1, opt2, opt3;
    for (int i = 2; i <= n; i++)
    {
        opt1 = opt2 = opt3 = INT_MAX;
        opt1 = dp[i-1];
        if (i%2 == 0)
        {
            opt2 = dp[i/2];
        }
        if (i%3 == 0)
        {
            opt3 = dp[i/3];
        }
        dp[i] = min(opt1, min(opt2, opt3)) + 1;
    }
    int ans = dp[n];
    delete []dp;
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<min_to_1(n)<<endl;
    int* dp = new int[n+1];
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    cout<<"Top down - "<<topdown_min_to_1(n,dp)<<endl;
    delete []dp;
    cout<<"Bottom up - "<<bottomup_min_to_1(n)<<endl;
    return 0;
}