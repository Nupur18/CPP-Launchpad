#include<iostream>
using namespace std;

int length(char *x)
{
    int cnt = 0;
    for (int i = 0; x[i] != '\0'; i++)
    {
        cnt++;
    }
    return cnt;
}

void copy(char *a, char *b)
{
    int blen = length(b);
    int i = 0;
    while (i <= blen)
    {
        a[i] = b[i];
        i++;
    }
}

int main()
{
    char arr[100];
    cin>>arr;
    int n;
    cin>>n;
    int larr = length(arr);
    for (int j = larr-1; j >= 0; j--)
    {
        arr[j+n] = arr[j];
    }
    int k = larr;
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        arr[l] = arr[k];
        l++;
        k++;
    }
    arr[larr] = '\0';
    cout<<arr;
    return 0;
}