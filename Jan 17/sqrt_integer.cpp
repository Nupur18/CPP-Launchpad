#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i = 0;
    while (i*i <= n)
    {
        i++;
    }
    cout<<"Square root of "<<n<<" is "<<i-1;
    return 0;
}