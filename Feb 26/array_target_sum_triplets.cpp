#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[1005];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    sort(arr, arr+n);

    for (int i = 0; i <= n-3; i++)
    {
        // using left and right is called 2 pointer approach
        int left = i+1;
        int right = n-1;
        while (left < right)
        {
            if (arr[i] + arr[left] + arr[right] == target)
            {
                cout<<arr[i]<<", "<<arr[left]<<" and "<<arr[right]<<endl;
                left++;
                right--;
            }
            else if ((arr[i] + arr[left] + arr[right]) > target)
            {
                right--;
            }
            else
            {
                left++;
            }
        } 
    }
    return 0;
}