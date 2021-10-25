#include<iostream>
using namespace std;

int factorial(int no)
{
    int answer = 1;
    for (int i = 1; i <= no; i++)
    {
        answer = answer * i;
    }
    return answer;
}

int nCr(int n, int r)
{
    int result = factorial(n)/(factorial(r)*factorial(n-r));
    return result;
}

int main()
{
    int n,r;
    cin>>n>>r;
    int x = nCr(n,r);
    // or
    // int x = nCr(5,2);
    cout<<"Value of nCr is "<<x;
}