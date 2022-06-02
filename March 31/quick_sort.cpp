#include<iostream>
#include<ctime>
using namespace std;

int partition_helper(int *arr, int s, int e)
{
    int i = s-1;
    int pivot = arr[e];
    for (int j = s; j <= e-1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[e]);
    return i+1;
}

int partition(int *arr, int s, int e)
{
    srand(time(0));
    int r = s + rand()%(e-s);
    swap(arr[r], arr[e]);
    return partition_helper(arr, s, e);
}

void quick_sort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    
    // recursive case
    int p = partition(arr, s, e);       
    quick_sort(arr, s, p-1);
    quick_sort(arr, p+1, e);    // tail recursion --> last call is recursive call (not returning anything)
}

int main()
{
    int arr[1000];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Before sorting :-"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    quick_sort(arr, 0, n-1);

    cout<<"After sorting :-"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    // srand(time(0));
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<rand()%5<<" ";      // generates random number
    // }
    
    return 0;
}