#include<iostream>
#include<algorithm>
using namespace std;

bool am_I_able_to_place_cows_at_distance_of_mid(int *arr, int n, int dist, int tc)
{
    int cp = 1;     // cows placed
    int prev = arr[0];  // pehli cow ko previous pe place kia
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] - prev) >= dist)
        {
            cp++;
            prev = arr[i];
            if (tc==cp)
            {
                return true;
            }
        }
    }
    if (cp<tc)
    {
        return false;
    }
    return true;    // for 1 cow and 1 stall
}

int main()
{
    int n, c;
    cin>>n>>c;
    int arr[100000];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int si = 0;
    int ei = arr[n-1];  // or int ei = arr[n-1] - arr[0]
    int ans = 0;
    while (si<=ei)
    {
        int mid = (si + ei)/2;
        if (am_I_able_to_place_cows_at_distance_of_mid(arr, n, mid, c))
        {
            ans = mid;
            si = mid + 1;
        }
        else
        {
            ei = mid - 1;
        }
    }
    cout<<ans;
    return 0;
}