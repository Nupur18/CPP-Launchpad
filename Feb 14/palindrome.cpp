#include<iostream>
using namespace std;

int length(char *a)
{
    int i = 0;
    int count = 0;
    while (a[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

bool isPalindrome(char *a)
{
    int i = 0;
    int j = length(a) - 1;
    while (i<j)
    {
        if (a[i] != a[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    char a[100];
    cin>>a;
    if (isPalindrome(a))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}