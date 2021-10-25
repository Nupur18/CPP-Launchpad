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

void reverse(char *a)
{
    int i = 0;
    int j = length(a) - 1;
    while (i<j)
    {
        swap(a[i], a[j]);
        i++;
        j--;
    }
}

int main()
{
    char a[100];
    cin>>a;
    cout<<"Before reversing :-"<<endl<<a<<endl;
    reverse(a);
    cout<<"After reversing :-"<<endl<<a<<endl;
    return 0;
}