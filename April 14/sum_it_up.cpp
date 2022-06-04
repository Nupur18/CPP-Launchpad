#include<iostream>
#include<vector>
using namespace std;
# define ll long long int 
// long long int and long long are same
int main()
{
    int n;
    cin>>n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    sort(a, a+n); // internally elements should be sorted
    vector< vector<ll> >ans; // stores all subsequence
    int m = pow(2,n); // 1<<n
    for (int i = 1; i < m; i++)
    {
        int c = i, j = 0, cnt = 0;
        vector <ll> v; // stores current subsequence
        while (c>0)
        {
            if (c & 1)
            {
                cnt += a[j];
                v.push_back(a[j]);
            }
            c = c/2;
            j++;
        }
        if (k == cnt)
        {
            if (binary_search(ans.begin(), ans.end(), v) == 1)
            {
                continue;
            }
            ans.push_back(v);
            sort(ans.begin(), ans.end());
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}