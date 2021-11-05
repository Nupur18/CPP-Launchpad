// if kisi ques me aisa aaya ki maximise ya minimise karo ya search or likha ho ki array is sorted, then we use binary search 
#include<iostream>
using namespace std;

bool isvalid(int *books, int n, int students, int capacity)
{
    int s=1;
    int currentpages=0;
    for (int i = 0; i < n; i++)
    {
        if ((currentpages + books[i]) > capacity)
        {
            s++;
            currentpages = books[i];
            if (s>students)
            {
                return false;
            }
        }
        else
        {
            currentpages += books[i];
        }
    }
    return true;
}

int book_allocation(int *a, int n, int m)
{
    int totalpages = 0;
    int s=0,e;
    for (int i = 0; i < n; i++)
    {
        totalpages += a[i];
        // this 
        // s = max(s, a[i])
    }
    // or this
    s = a[n-1];
    e = totalpages;
    int finalans;
    while (s<=e)
    {
        int mid = (s+e)/2;
        if (isvalid(a,n,m,mid))
        {
            finalans = mid;
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
    }
    return finalans;
}

int main()
{
    int t, arr[105];
    cin>>t;
    while (t--)
    {
        int n, m; // n is number of books and m is number of students
        cin>>n>>m;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int x = book_allocation(arr, n, m);
        cout<<x<<endl;
    }
    return 0;
}