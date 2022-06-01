#include<iostream>
using namespace std;

int lower_bound(int key, int *arr, int n)
{
    int si = 0;
    int ei = n-1;
    int ans = -1;
    while (si <= ei)
    {
        int mid = (si+ei)/2;
        if (arr[mid] == key)
        {
            ans = mid;
            ei = mid - 1;
        }
        else if (arr[mid] > key)
        {
            ei = mid - 1;
        }
        else
        {
            si = mid + 1;
        }
    }
    return ans;
}

int upper_bound(int key, int *arr, int n)
{
    int si = 0;
    int ei = n-1;
    int ans = -1;
    while (si <= ei)
    {
        int mid = (si+ei)/2;
        if (arr[mid] == key)
        {
            ans = mid;
            si = mid + 1;
        }
        else if (arr[mid] > key)
        {
            ei = mid - 1;
        }
        else
        {
            si = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int arr[100000];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int t;
    cin>>t;
    while (t--)
    {
        int key;
        cin>>key;
        cout<<lower_bound(key, arr, n)<<" ";
        cout<<upper_bound(key, arr, n)<<endl;
    }
    return 0;
}