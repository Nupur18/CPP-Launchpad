#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[], int x) 
{
    cout<<"Inside printArray function"<<endl;
    for (int i = 0; i < x; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    // input manually
    int a[] = {1,2,6,4,5,3,9,40};
    int n = sizeof(a)/sizeof(int);
    cout<<"Before sorting :-"<<endl;
    sort(a,a+n);
    cout<<"After sorting :-"<<endl;
    printArray(a,n);
    return 0;
}