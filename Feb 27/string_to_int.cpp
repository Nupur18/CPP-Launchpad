#include<iostream>
using namespace std;

int string_to_int(char a[], int n)
{
    // base case
    if (n==0)
    {
        return 0;
    }
    
    // recursive case 
    int digit = a[n-1] - '0';
    return string_to_int(a, n-1) * 10 + digit;
    // string_to_int(a, n-1) will give 5123
}

int main()
{
    char arr[100];
    cin>>arr;   // "54123" input karaya output should be 54123 in integer form
    int l = strlen(arr);    // length will be 5
    int x = string_to_int(arr, l);
    cout<<x;
    return 0;
}