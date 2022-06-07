/*

Given a rod of length n inches and an array of prices that contains prices of all pieces of size 
smaller than n. Determine the maximum value obtainable by cutting up the rod and selling the pieces. 

For example, if length of the rod is 8 and the values of different pieces are given as 
following, then the maximum obtainable value is 22 (by cutting in two pieces of lengths 2 and 6) 

length   | 1   2   3   4   5   6   7   8  
--------------------------------------------
price    | 1   5   8   9  10  17  17  20

And if the prices are as following, then the maximum obtainable value is 24 
(by cutting in eight pieces of length 1) 

length   | 1   2   3   4   5   6   7   8  
--------------------------------------------
price    | 3   5   8   9  10  17  17  20

*/

#include<iostream>
#include<vector>
using namespace std;

int max_profit(int n, vector<int> &prices)
{
    // base case
    if (n == 0)
    {
        return 0;
    }
    
    // recursive case
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, prices[i] + max_profit(n-(i+1), prices));
    }
    return ans;
}

int bottom_up(int n, vector<int> &prices)
{
    vector<int> dp(n+1, -1);

    // base case
    dp[0] = 0;

    // recursive case
    for (int j = 1; j <= n; j++)
    {
        for (int i = 0; i < j; i++)
        {
            dp[j] = max(dp[j], prices[i] + dp[j-(i+1)]);
        }
    }
    return dp[n];
}

int main()
{
    int n = 8;
    vector<int> prices { 1, 5, 8, 9, 10, 17, 17, 20};
    cout<<max_profit(n, prices)<<endl;
    return 0;
}