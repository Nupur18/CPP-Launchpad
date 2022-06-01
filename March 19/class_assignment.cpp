#include<iostream>
using namespace std;

int find_no(int n)
{
    // base case
    if (n==1 || n==2)
    {
        return n+1;
    }
    
    // recursive case
    return find_no(n-1) + find_no(n-2);
}

int main()
{
    int t;
    cin>>t;
    int k = 1;
    while (t--)
    {
        int n;
        cin>>n;
        int x = find_no(n);
        cout<<"#"<<k<<" : "<<x<<endl;
        k++;
    }
    return 0;
}