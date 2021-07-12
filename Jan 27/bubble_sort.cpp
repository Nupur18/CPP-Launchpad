#include<iostream>
using namespace std;
int main()
{
    int arr[1000], n, i, j, temp, cnt=0;
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

    // Bubble Sort
    for (i = 0; i <= n-2; i++)
    {
        for (j = 0; j <= n-i-2; j++)
        {
            if (arr[j] > arr[j+1])
            {
                // with another variable temp
                // temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;

                // without temp
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];

                // inbuilt swap
                // swap(arr[j], arr[j+1]);

                // one line swap
                // b = (a+b) - (a=b);

                cnt++;
            }
        }  
        if (cnt==0) // optimised 
        {
            break;
        }
        
    }
    cout<<endl<<"Array after sorting :-"<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}