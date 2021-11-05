#include<iostream>
using namespace std;

bool alternatingBits(int n)     // n is 1010
{
    n = n ^ (n>>1);     // n>>1 is 0101 and n will be 1111
    bool ans = n & (n+1);
    if (ans==0)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    bool result = alternatingBits(n);
    if (result)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}