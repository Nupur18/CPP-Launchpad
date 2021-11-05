#include<iostream>
using namespace std;

void toh(int n, char src, char helper, char dest)
{
    // base case
    if (n==0)
    {
        return ;
    }
    
    // recursive case
    toh(n-1, src, dest, helper);
    cout<<"Take "<<n<<" disc from "<<src<<" to "<<dest<<endl;
    toh(n-1, helper, src, dest);
}

int main()
{
    int n;  // number of discs
    cin>>n;
    toh(n, 'A', 'B', 'C');
    return 0;
}