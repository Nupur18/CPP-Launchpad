#include<iostream>
using namespace std;

int elephant_ways(int i, int j)
{
    // base case
    if (i==0 && j==0)
    {
        return 1;
    }
    
    // recursive case
    int ans = 0;
    for (int k = 0; k < i; k++)     // for column sun
    {
        ans += elephant_ways(k,j);
    }
    for (int k = 0; k < j; k++)     // for row sun
    {
        ans += elephant_ways(i,k);
    }
    return ans;
}

int top_down(int i, int j, int dp[][100])
{
    // base case
    if (i==0 && j==0)
    {
        return dp[i][j]=1;
    }
    
    // recursive case
    if (dp[i][j] != -1)     // calculate karne se pehle check
    {
        return dp[i][j];
    }
    
    int ans = 0;
    for (int k = 0; k < i; k++)     // for column sun
    {
        ans += top_down(k,j,dp);
    }
    for (int k = 0; k < j; k++)     // for row sun
    {
        ans += top_down(i,k,dp);
    }
    return dp[i][j] = ans;
}

int bottom_up(int n, int m)     // iterative
{
    int dp[100][100] = {0};
    // initialisation condition
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i==0 && j==0)
            {
                dp[i][j] = 1;
            }
            else
            {
                int ans = 0;
                for (int k = 0; k < n; k++)     // sum for column
                {
                    ans += dp[k][j];
                }
                for (int k = 0; k < m; k++)     // sum for row
                {
                    ans += dp[i][k];
                }
                dp[i][j] = ans;
            }
            
        }
        
    }
    return dp[n][m];
}

int main()
{
    int i,j;
    cin>>i>>j;
    int dp[100][100];
    memset(dp,-1,sizeof(dp));   // puri array will get initialised with -1
    cout<<elephant_ways(i,j)<<endl;
    cout<<top_down(i,j,dp)<<endl;
    cout<<bottom_up(i,j)<<endl;
    return 0;
}