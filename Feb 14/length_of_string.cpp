#include<iostream>
using namespace std;

// int length(char a[])
// or 
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

int main()
{
    char a[100];
    cin>>a;
    // or
    // cin.getline(a, 100);
    cout<<"Length of array is "<<length(a);

    return 0;
}