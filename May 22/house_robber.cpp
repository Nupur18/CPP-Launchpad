/*

You are a professional robber planning to rob houses along a street. Each house has a certain amount 
of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses 
have security systems connected and it will automatically contact the police if two adjacent houses 
were broken into on the same night.

Given an integer array nums representing the amount of money of each house, 
return the maximum amount of money you can rob tonight without alerting the police.

Examples

Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.

Input: nums = [2,7,9,3,1]
Output: 12
Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
Total amount you can rob = 2 + 9 + 1 = 12.
 
*/

#include<iostream>
#include<vector>
using namespace std;

int max_profit(vector<int> &nums, int i)
{
    if (i >= nums.size())
    {
        //you are standing at the end of the street, no houses left to rob
        return 0;
    }
    
    int take = nums[i] + max_profit(nums, i+2);
    int skip = max_profit(nums, i+1);
    return max(take, skip);
}

int top_down(vector<int> &nums, vector<int> &dp, int i)
{
    if (i >= nums.size())
    {
        //you are standing at the end of the street, no houses left to rob
        return dp[i] = 0;
    }
    
    if (dp[i] != -1)
    {
        return dp[i];
    }
    
    int take = nums[i] + top_down(nums, dp, i+2);
    int skip = top_down(nums, dp, i+1);
    return dp[i] = max(take, skip);
}

int bottom_up(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(nums.size()+1, -1);

    dp[n] = 0;
    dp[n-1] = nums[n-1];
    for (int i = n-2; i >= 0; i++)
    {
        dp[i] = max(nums[i] + dp[i+2], dp[i+1]);
    }
    return dp[0];
}

int bottom_up(vector<int> &nums)
{
    int n = nums.size();

    int first = 0;
    int second = nums[n-1];
    for (int i = n-2; i >= 0; i++)
    {
        int third = max(nums[i] + first, second);
        first = second;
        second = third;
    }
    return second;
}
int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    cout<<max_profit(nums,0)<<endl;
    vector<int> dp(nums.size() + 2, -1);
    cout<<top_down(nums, dp, 0);
    return 0;
}