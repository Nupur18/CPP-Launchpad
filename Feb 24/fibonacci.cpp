#include<iostream>
using namespace std;

int fibno(int n)
{
    // base case 
    if (n==0 || n==1)
    {
        return n;
    }
    
    // recursive case
    int chotiProblem1 = fibno(n-1);   // pure assumption
    int chotiProblem2 = fibno(n-2);   // pure assumption

    // find answer with the help of above two 
    int badiProblem = chotiProblem1 + chotiProblem2;    // return badiProblem;
    return badiProblem;

    // or return fibno(n-1) + fibno(n-2);
}

int main()
{
    int n;
    cin>>n;
    int x = fibno(n);
    cout<<x<<endl;
    return 0;
} 
