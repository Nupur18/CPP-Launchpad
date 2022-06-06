#include<iostream>
using namespace std;

int min_den(int* coins, int amount, int n)
{
    // base case
    if (amount == 0)
    {
        return 0;
    }
    
    // recursive case
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (amount - coins[i] >= 0)
        {
            int chota_amount = amount - coins[i];
            int chota_answer = min_den(coins, chota_amount, n);
            if (chota_answer != INT_MAX && chota_answer<ans)
            {
                ans = chota_answer + 1;
            }
        }
    }
    return ans;
}

int topdown_min_den(int* coins, int amount, int n, int* dp)
{
    // base case
    if (amount == 0)
    {
        return dp[amount] = 0;
    }
    
    // calculate karne se pehle check
    if (dp[amount] != -1)
    {
        return dp[amount];
    }
    
    // recursive case
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (amount - coins[i] >= 0)
        {
            int chota_amount = amount - coins[i];
            int chota_answer = min_den(coins, chota_amount, n);
            if (chota_answer != INT_MAX && chota_answer<ans)
            {
                ans = chota_answer + 1;
            }
        }
    }

    // return se pehle store
    return dp[amount] = ans;
}

int bottomup_min_den(int* coins, int amount, int n)
{
    int* dp = new int[amount+1];
    for (int i = 0; i <= amount; i++)
    {
        dp[i] = INT_MAX;
    }
    
    // initialisation
    dp[0] = 0;
    for (int rupay = 1; rupay <= amount; rupay++)
    {
        for (int i = 0; i < n; i++)
        {
            if (rupay - coins[i] >= 0)
            {
                int chota_amount = rupay - coins[i];
                dp[rupay] = min(dp[chota_amount]+1, dp[rupay]);
            }
        }
    }
    int ans = dp[amount];
    delete []dp;
    return ans;
}

int main()
{
    int coins[] = {1,3,5,10};
    int n = sizeof(coins)/sizeof(int);
    int amount;
    cin>>amount;
    cout<<min_den(coins,amount,n)<<endl;

    int dp[1000];
    for (int i = 0; i < 1000; i++)
    {
        dp[i] = -1;
    }
    cout<<topdown_min_den(coins,amount,n,dp)<<endl;
    cout<<bottomup_min_den(coins,amount,n)<<endl;
    return 0;
}