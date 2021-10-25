#include<iostream>
using namespace std;

void generatePrime(int no)
{
    for (int n = 2; n <= no; n++)
    {
        int i = 2;
        while (i<n)
        {
            if (n%i == 0)
            {
                break;
            }
            i++;
        }
        if (i==n)
        {
            cout<<n<<" ";
        }
    }
}

int main()
{
    int n;
    cin>>n;
    generatePrime(n);
    return 0;
}