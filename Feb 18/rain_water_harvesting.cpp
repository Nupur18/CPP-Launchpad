#include<iostream>
using namespace std;
int height[1000005], leftmax[1000005], rightmax[1000005];

int main()
{
    int n; 
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>height[i];
    }

    leftmax[0] = height[0];
    for (int i = 1; i < n; i++)
    {
        leftmax[i] = max(height[i], leftmax[i-1]);
    }

    rightmax[n-1] = height[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        rightmax[i] = max(height[i], rightmax[i+1]);
    }

    int water = 0;
    for (int i = 1; i < n; i++)
    {
        water = water + (min(leftmax[i], rightmax[i]) - height[i]);
    }
    cout<<water;
    return 0;
}