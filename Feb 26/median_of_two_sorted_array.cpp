#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[1005];
    for (i = 0; i < n; i++)
    {
        cin>>arr[i];    // 1 3 5 7 9 
    }
    // i will be 5
    for ( ; i < 2*n; i++)
    {
        cin>>arr[i];    // 2 4 6 8 10
    }
    sort(arr, arr + 2*n);
    cout<<arr[n-1];
    return 0;
}