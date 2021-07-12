#include<iostream>
using namespace std;
int main()
{
    int arr[1000], n, i, j, temp, min;
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the numbers :- "<<endl;
    for (i = 0; i < n; i++)
    {
        cin>>arr[i]; 
    }

    cout<<"Array before sorting :-"<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    // Selection Sort
    for (i = 0; i <= n-2; i++)
    {
        min = i;
        for (j = i+1; j <= n-1; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }    
        swap(arr[min], arr[i]);      
    }
    cout<<endl<<"Array after sorting :-"<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}