#include<iostream>
#include<algorithm>
using namespace std;

bool compare(string s1, string s2)      // since strings ko compare kar rhe hai isliye string data type lia
{
    if ((s1.length() >= s2.length()) && (s1.substr(0, s2.length()) == s2) )
    {
        return true;
    }
    else
    {
        return s1<s2;
    }
}

int main()
{
    int n;
    cin>>n;
    string arr[1005];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr + n, compare);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}