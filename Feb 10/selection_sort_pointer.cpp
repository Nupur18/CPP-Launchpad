#include<iostream>
using namespace std;

void selection(int *arr, int n)
{
    for (int i = 0; i <= n-2; i++)
    {
        int min = i;
        for (int j = i+1; j <= n-1; j++)
        {
            if (*(arr + min) > *(arr + j))
            {
                min = j;
            }
        }    
        swap(*(arr + min) , *(arr + i));      
    }
}
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

    selection(arr,n);

    cout<<endl<<"Array after sorting :-"<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}