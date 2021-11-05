#include<iostream>
using namespace std;

void decreasing(int n)
{
    // base case 
    if (n==0)
    {
        return; // returns nothing, this means function ko yhi khatm kardo
    }
    // or
    // if (n==1)
    // {
    //     cout<<1<<" ";
    //     return;
    // }
    
    // recursive case 
    cout<<n<<" ";
    decreasing(n-1);
}

void increasing(int n)
{
    // base case 
    if (n==0)
    {
        return; // returns nothing, this means function ko yhi khatm kardo
    }
    // recursive case 
    increasing(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
    cout<<"Numbers in decreasing order are :-"<<endl;
    decreasing(n);  // n to 1
    cout<<endl<<"Numbers in increasing order are :-"<<endl;
    increasing(n);  // 1 to n
    return 0;
}