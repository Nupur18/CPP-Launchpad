#include<iostream>
using namespace std;

// problem is dependant on n(total elements) and capacity
int knapsack_topdown(int *price, int *weight, int capacity, int n, int dp[][100])
{
    // base case
    if (n==0 || capacity==0)
    {
        return dp[n][capacity] = 0;
    }
    
    // recursive case
    if (dp[n][capacity] != -1)
    {
        return dp[n][capacity];
    }
    
    int opt1 = INT_MIN, opt2 = INT_MIN;
    
    // if you are including
    if (capacity >= weight[n-1])
    {
        opt1 = price[n-1] + knapsack_topdown(price, weight, capacity - weight[n-1], n-1, dp);
    }
    
    // if you are excluding
    opt2 = 0 + knapsack_topdown(price, weight, capacity, n-1, dp);

    return dp[n][capacity] = max(opt1, opt2);
}

int knapsack_bottomup(int *price, int *weight, int tootal_capacity, int total_n)
{
    int dp[100][100] = {0};
    for (int n = 1; n <= total_n; n++)
    {
        for (int capacity = 1; capacity <= tootal_capacity; capacity++)
        {
            int opt1 = INT_MIN, opt2 = INT_MIN;
            if (capacity >= weight[n-1])
            {
                opt1 = price[n-1] + dp[n-1][capacity - weight[n-1]];
            }
            opt2 = 0 + dp[n-1][capacity];
            dp[n][capacity] = max(opt1, opt2);
        }
    }
    return dp[total_n][tootal_capacity];
}

int main()
{
    int price[] = {13,13,16};
    int weight[] = {7,7,8};
    int n = sizeof(price)/sizeof(int);  // sizeof(weight)/sizeof(int)
    int dp[100][100];
    memset(dp,-1,sizeof(dp));
    int capacity = 14;
    cout<<"Top down - "<<knapsack_topdown(price, weight, capacity, n, dp)<<endl;
    cout<<"Bottom up - "<<knapsack_bottomup(price, weight, capacity, n)<<endl;
    return 0;
}

// you can either write dp[n][capacity] or dp[capacity][n]