#include<iostream>
using namespace std;

int min_cost_path(int cost[][4], int i, int j)
{
    // base case
    if (i==0 && j==0)
    {
        return cost[i][j];
    }
    
    if(i<0 || j<0)
    {
        return INT_MAX;
    }

    // recursive case
    int opt1 = min_cost_path(cost,i,j-1);
    int opt2 = min_cost_path(cost,i-1,j);
    return min(opt1,opt2) + cost[i][j];
}

int topdown_min_cost_path(int cost[][4], int i, int j, int dp[][100])
{
    // base case
    if (i==0 && j==0)
    {
        return dp[i][j] = cost[i][j];
    }
    
    if(i<0 || j<0)
    {
        return INT_MAX;
    }

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    
    // recursive case
    int opt1 = min_cost_path(cost,i,j-1);
    int opt2 = min_cost_path(cost,i-1,j);
    return dp[i][j] = min(opt1,opt2) + cost[i][j];
}

int bottomup_min_cost_path(int a, int b, int cost[][4])
{
    int dp[100][100];
    // dp[0][0] = cost[0][0];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i==0 && j==0)
            {
                dp[i][j] = cost[i][j];
            }
            else if (i==0)  // filling 1st row
            {
                dp[i][j] = cost[i][j] + dp[i][j-1];
            }
            else if (j==0)  // filling 1st column
            {
                dp[i][j] = cost[i][j] + dp[i-1][j];
            }
            else    // baki ki array
            {
                dp[i][j] = min(dp[i-1][j],dp[i][j-1]) + cost[i][j];
            }
        }
    }
    return dp[a][b];
}

int main()
{
    int cost[][4] = {
        {2,1,3,4},
        {3,1,1,10},
        {1,6,1,1,},
        {2,7,4,3}
    };
    int dp[100][100];
    // for (int i = 0; i < 100; i++)
    // {
    //     for (int j = 0; j < 100; j++)
    //     {
    //         dp[i][j] = -1;
    //     }
        
    // }
    // this is same as above for loop
    memset(dp,-1,sizeof(dp));
    int i = 2, j = 3;
    cout<<min_cost_path(cost,i,j)<<endl;
    cout<<topdown_min_cost_path(cost,i,j,dp)<<endl;
    cout<<bottomup_min_cost_path(i,j,cost)<<endl;
    return 0;
}