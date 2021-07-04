// Print the pattern for N=5 : -
// ABCDEEDCBA
// ABCDDCBA
// ABCCBA
// ABBA
// AA

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int row = 1; row <= n; row++)
    {
        char ch = 'A';

        // characters in increasing order
        for (int i = 0; i < n-row+1; i++)
        {
            cout<<ch;
            ch++;
        }

        // characters in decreasing order
        // Either this 
        ch--;
        for (int i = 0; i < n-row+1; i++)
        {
            cout<<ch;
            ch--;
        }

        // or this
        // for (int i = 0; i < n-row+1; i++)
        // {
        //     ch--;
        //     cout<<ch;
        // }
        cout<<endl;
    }
    return 0;
}