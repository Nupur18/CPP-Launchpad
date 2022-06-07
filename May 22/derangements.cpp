/*

In combinatorial mathematics, a derangement is a permutation of the elements of a set, 
such that no element appears in its original position.

There's originally an array consisting of n integers from 1 to n in ascending order, 
you need to find the number of derangement it can generate.

Also, since the answer may be very large, you should return the output mod 10^9 + 7.

Input: 3
Output: 2
Explanation: The original array is [1,2,3]. The two derangements are [2,3,1] and [3,1,2].

N > 0

*/

#include<iostream>
#include<vector>
using namespace std;

int derangements(int n)
{
    // base case
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    
    // recursive case
    return (n-1) * (derangements(n-1) + derangements(n-2));
}

int top_down(int n, vector<int> &dp)
{
    // base case
    if (n == 1)
    {
        return dp[n] = 0;
    }
    if (n == 2)
    {
        return dp[n] = 1;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }
    
    // recursive case
    return dp[n] = (n-1) * (derangements(n-1) + derangements(n-2));
}

int bottom_up(int n) 
{
    vector<int> dp(n+1, -1);

    dp[1] = 0;
    dp[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        dp[i] = (i-1) * (dp[i-1] + dp[i-2]);
    }
    return dp[n];
}

int bottom_up_memoryOptimisation(int n) 
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    int first = 0;
    int second = 1;
    for (int i = 3; i <= n; i++)
    {
        int third = (i-1) * (first + second);
        first = second;
        second = third;
    }
    return second;
}

int main()
{
    int n;
    cin>>n;
    cout<<derangements(n)<<endl;
    vector<int> dp(n+1, -1);
    cout<<top_down(n,dp)<<endl;
    cout<<bottom_up(n)<<endl;
    return 0;
}