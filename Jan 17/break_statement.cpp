#include<iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i==4)
        {
            break;
        }
        cout<<"value of i is "<<i<<endl;
    }
    // break ka control yaha pe aayega
    for (int j = 0; j <= 10; j++)
    {
        if (j==4)
        {
            break;
        }
        cout<<"value of j is "<<j<<endl;
    }
    return 0;
}