#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b)
{
    //return a<b; // for ascending
    return a>b; // for descending
}
int main()
{
    int a[] = {4,2,67,83,24,12};
    int n = sizeof(a)/sizeof(int);

    cout<<"Before sorting :-"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //sort(a, a+n);   // by default sorts in ascending order

    sort(a, a+n, compare);  // compare is not a function, it is a comperator. arguments are not passed in comperator 
    cout<<"After sorting :-"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}