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

void append(char *a, char *b)
{
    int i = length(a);
    int j = 0;
    int blen = length(b);
    while (j<=blen)
    {
        a[i] = b[j];
        i++;
        j++;
    }
}

int main()
{
    char a[100], b[100];
    cin>>a>>b;
    append(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}