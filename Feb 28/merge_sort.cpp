#include<iostream>
using namespace std;
#define ll long long int 

void merge_two_sorted_arrays(ll *arr, ll s, ll e)
{
    int mid = (s+e)/2;
    int i = s;
    int j = mid+1;
    ll *temp = new ll[200000];
    int k = s;
    while (i<=mid && j<=e)
    {
        if (arr[i] < arr[j])
        {
            // this
            temp[k] = arr[i];
            k++;
            i++;
            // or this
            // temp[k++] = a[i++];
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i<=mid)
    {
        temp[k] = arr[i];
        k++;
        i++;
    }
    while (j<=e)
    {
        temp[k] = arr[j];
        k++;
        j++;
    }
    for (ll i = s; i <= e; i++)
    {
        arr[i] = temp[i];       // copying temp in arr
    }
    delete [] temp;
}

void mergeSort(ll *arr, ll s, ll e)
{
    // base case
    if (s>=e)
    {
        return;
    }
    
    // recursive case
    int mid = (s+e)/2;
    mergeSort(arr, s, mid);     // 1 2 4
    mergeSort(arr, mid+1, e);       // 3 5 
    merge_two_sorted_arrays(arr, s, e);
}

int main()
{
    int n;
    cin>>n;
    // if array ka size bahut bada hai then int arr[1000000] ki bajaye
    // we can do like this 
    // data_type *variable name = new data_type[size]   --> this is dynamic memoey allocation
    ll *arr = new ll[200000];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i]; // 4 2 1 5 3
    }

    mergeSort(arr, 0, n-1);

    cout<<"Sorted array is :-"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    // int arr[1000000] apne aap delete ho jati hai 
    // dynamic ko khud karna padta hai
    delete [] arr;
    return 0;
}