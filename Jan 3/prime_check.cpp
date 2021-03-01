#include<iostream> 
using namespace std;
int main()
{
    int n, i=2;
    cout<<"Enter a number : ";
    cin>>n;
    while (i<n) //or i <= n-1
    {
        if (n%i == 0)
        {
            cout<<"Number is not prime.";
            return 0; // or exit(0)
        }
        i++;
    }
    cout<<"Number is prime.";

    return 0; // or exit(0)
}