#include<iostream>
using namespace std;
int main()
{
    int a[100], b[100];
    int i,j,k,m,n;
    cout<<"Size of arrays"<<endl;
    cout<<"Enter the value of m : ";
    cin>>m;
    cout<<"Enter the value of n : ";
    cin>>n;
    for (i = 0; i < m; i++)
    {
        cin>>a[i]; 
    }
    for (i = 0; i < n; i++)
    {
        cin>>b[i]; 
    }
    k = m + n - 1;
    i = m - 1;
    j = n - 1;
    while (i>=0 && j>=0)
    {
        if (b[j]>a[i])
        {
            a[k] = b[j];
            j--;
            k--;
        }
        else
        {
            a[k] = a[i];
            k--;
            i--;
        } 
    }
    while (j>=0)
    {
        a[k] = b[j];
        k--;
        j--;
    }
    while (i>=0)
    {
        a[k] = a[i];
        i--;
        k--;
    }
    cout<<"Merged array is ";
    for (i = 0; i < m+n; i++)
    {
        cout<<a[i]<<" "; 
    }
    return 0;
}