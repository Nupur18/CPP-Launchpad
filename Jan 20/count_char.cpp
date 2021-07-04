#include<iostream>
using namespace std;
int main()
{
    // int count = 0;
    // char ch;
    // cin>>ch;
    // while (ch!='$')
    // {
    //     count++;
    //     cin>>ch;
    // }
    // cout<<"The count of characters till $ is "<<count;


    // mera vala
    // char ch;
    // int n = 0;
    // do
    // {
    //     cin>>ch;
    //     n++;
    // } while (ch!='$');
    // cout<<"Number of characters are "<<n-1;

    int count = 0;
    char ch;
    ch = cin.get();
    while (ch!='$')
    {
        count++;
        ch = cin.get();
    }
    cout<<"The count of characters till $ is "<<count;
    return 0;
}