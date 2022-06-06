#include<iostream>
using namespace std;

int wine_profit(int l, int r, int* price, int day)
{
    // base case
    if (l>r)
    {
        return 0;
    }
    
    // recursive case
    int opt1 = price[l]*day + wine_profit(l+1, r, price, day+1);
    int opt2 = price[r]*day + wine_profit(l, r-1, price, day+1);
    return max(opt1,opt2);
}

int topdown_wine_profit(int l, int r, int* price, int day, int dp[][100])
{
    // base case
    if (l>r)
    {
        return dp[l][r] = 0;    // store
    }
    
    // calculate karne se pehle check
    if (dp[l][r] != -1)
    {
        return dp[l][r];
    }
    
    // recursive case
    int opt1 = price[l]*day + topdown_wine_profit(l+1, r, price, day+1, dp);
    int opt2 = price[r]*day + topdown_wine_profit(l, r-1, price, day+1, dp);
    return dp[l][r] = max(opt1,opt2);   // store
}

int bottomup_wine_profit(int* price, int n)
{
    int dp[100][100] = {0};
    // diagonals pe kaam kia
    for (int i = 0; i < n; i++)
    {
        dp[i][i] = n*price[i];
    }
    for (int i = n-2; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (i<j)
            {
                int day = n - (j-i);
                int opt1 = day*price[i] + dp[i+1][j];
                int opt2 = day*price[j] + dp[i][j-1];
                dp[i][j] = max(opt1,opt2);
            }
        }
    }
    return dp[0][n-1];
}

int main()
{
    int price[] = {2,3,5,1,4};
    int n = sizeof(price)/sizeof(int);
    cout<<wine_profit(0,n-1,price,1)<<endl;
    int dp[100][100];
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout<<topdown_wine_profit(0,n-1,price,1,dp)<<endl;
    cout<<bottomup_wine_profit(price,n)<<endl;
    return 0;
}