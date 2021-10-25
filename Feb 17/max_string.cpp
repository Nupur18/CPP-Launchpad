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
    int n;
    int max_length = 0;
    char max_string[100];
    char arr[100];
    cin>>n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cin>>arr;
        int l = length(arr);
        if (l > max_length)
        {
            max_length = l;
            copy(max_string, arr);
        }
    }
    cout<<"Maximum length is "<<max_length<<endl;
    cout<<"Maximum length string is "<<max_string<<endl;
    return 0;
}