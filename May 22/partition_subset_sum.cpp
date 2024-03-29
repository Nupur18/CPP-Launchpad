/*

Given a non-empty array nums containing only positive integers, find if the array can be partitioned 
into two subsets such that the sum of elements in both subsets is equal.

Example 1:

	Input: nums = [1,5,11,5]
	Output: true
	Explanation: The array can be partitioned as [1, 5, 5] and [11].

Example 2:

	Input: nums = [1,2,3,5]
	Output: false
	Explanation: The array cannot be partitioned into equal sum subsets.
 

*/

#include<iostream>
#include<vector>
using namespace std;

bool subset_sum(vector<int> v, int S)
{
    int n = v.size();
    vector<vector<int> > dp(n+1, vector<int>(S+1, -1));

    // base case
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = true;
    }
    for (int s = 1; s <= S; s++)
    {
        dp[n][s] = true;
    }

    // recursive case
    for (int i = n-1; i >= 0; i--)
    {
        for (int s = 1; s <= S; i++)
        {
            if (v[i] <= s)
            {
                dp[i][s] = dp[i+1][s] || dp[i+1][s-v[i]];
            }
            else
            {
                dp[i][s] = dp[i+1][s];
            }
        }
    }
    return dp[0][S];
}

bool can_partition(vector<int> &nums, int S)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }
    if (sum % 2 == 1)
    {
        return false;
    }
    return subset_sum(nums, sum/2);
}

int main()
{
    vector<int> v{1,5,11,15};
    int S = 11;
    cout<<subset_sum(v, S)<<endl;
    return 0;
}