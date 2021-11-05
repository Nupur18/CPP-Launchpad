#include<iostream>
using namespace std;

int fact(int n)
{
    // base case 
    if (n==0)
    {
        return 1;
    }
    
    // // recursive case
    // int chotiProblem = fact(n-1);   // pure assumption

    // // find answer with the help of above two 
    // int badiProblem = n * chotiProblem;
    // return badiProblem;

    // or
    return n * fact(n-1);   // without storing 
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
} 
