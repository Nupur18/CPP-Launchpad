#include<iostream>
#include<vector>
using namespace std;

int lis(int *a, int n)
{
    int dp[1000];
    // because for every single element increasing subsequence will have atleast length = 1
    for (int i = 0; i < 1000; i++)
    {
        dp[i] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i]>a[j])
            {
                dp[i] = max(dp[i], dp[j]+1);
            }
        } 
    }
    int ans = 1;
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        // ans = max(ans, dp[j]);
        // or
        if (ans < dp[j])
        {
            ans = dp[j];
            i = j;
        }
    }
    vector<int> v;
    int len = ans;
    v.push_back(a[i]);
    len--;
    for (int j = i-1; j >= 0; j--)
    {
        if (dp[j]==len && v[v.size()-1]>a[j])
        {
            v.push_back(a[j]);
            len--;
        }
        if (len==0)
        {
            break;
        }
    }
    cout<<"Longest increasing subsequence - ";
    for (int i = v.size()-1; i >= 0; i--)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<"Length - ";
    return ans;
}

int main()
{
    int a[] = {1,3,2,6,4,7,3,8};
    int n = sizeof(a)/sizeof(n);
    cout<<lis(a,n)<<endl;
    return 0;
}