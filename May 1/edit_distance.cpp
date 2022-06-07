#include<iostream>
using namespace std;

int edit_distance(char *s1, char *s2, int i, int j)
{
    // base case
    if (i==0)   // i is length of s1
    {
        return j;
    }
    if (j==0)   // j is length of s2;
    {
        return i;
    }
    

    // recursive case
    if (s1[i-1] == s2[j-1])
    {
        return edit_distance(s1, s2, i-1, j-1);     // ignore
    }
    else
    {
        int opt1 = 1 + edit_distance(s1, s2, i-1, j-1);     // replace
        int opt2 = 1 + edit_distance(s1, s2, i, j-1);       // insert
        int opt3 = 1 + edit_distance(s1, s2, i-1, j);       // delete
        return min(opt1, min(opt2, opt3));
    }
}

int top_down(char *s1, char *s2, int i, int j, int dp[][100])
{
    // base case
    if (i==0)   // i is length of s1
    {
        return dp[i][j] = j;
    }
    if (j==0)   // j is length of s2;
    {
        return dp[i][j] = i;
    }
    

    // recursive case
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    
    if (s1[i-1] == s2[j-1])
    {
        return top_down(s1, s2, i-1, j-1, dp);     // ignore
    }
    else
    {
        int opt1 = 1 + top_down(s1, s2, i-1, j-1, dp);     // replace
        int opt2 = 1 + top_down(s1, s2, i, j-1, dp);       // insert
        int opt3 = 1 + top_down(s1, s2, i-1, j, dp);       // delete
        return dp[i][j] = min(opt1, min(opt2, opt3));
    }
}

int bottom_up(char *s1, char *s2, int i, int j)
{
    int dp[100][100];
    for (int a = 0; a <= i; a++)
    {
        dp[a][0] = a;
    }
    for (int b = 0; b <= j; b++)
    {
        dp[0][b] = b;
    }
    for (int m = 1; m <= i; m++)
    {
        for (int n = 1; n <= j; n++)
        {
            if (s1[m-1] == s2[n-1])
            {
                dp[m][n] = dp[m-1][n-1];
            }
            else
            {
                dp[m][n] = min(dp[m-1][n-1], min(dp[m][n-1], dp[m-1][n])) + 1;
            }
        }
    }
    return dp[i][j];
}

int main()
{
    char s1[100], s2[100];
    int dp[100][100];
    memset(dp, -1, sizeof(dp));
    cin>>s1>>s2;
    int i = strlen(s1);
    int j = strlen(s2);
    cout<<edit_distance(s1,s2,i,j)<<endl;
    cout<<top_down(s1,s2,i,j,dp)<<endl;
    cout<<bottom_up(s1,s2,i,j)<<endl;
    return 0;
}

// int opt1 = 1 + edit_distance(s1, s2, i-1, j-1);     // replace
// int opt2 = 1 + edit_distance(s1, s2, i, j-1);       // insert
// int opt3 = 1 + edit_distance(s1, s2, i-1, j);       // delete
// return min(opt1, min(opt2, opt3));
// or
// int opt1 = edit_distance(s1, s2, i-1, j-1);     // replace
// int opt2 = edit_distance(s1, s2, i, j-1);       // insert
// int opt3 = edit_distance(s1, s2, i-1, j);       // delete
// return min(opt1, min(opt2, opt3)) + 1;