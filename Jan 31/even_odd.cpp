#include<iostream>
using namespace std;

// function
void is_even_odd( int n )
{
    if (n%2 == 0)
    {
        cout<<n<<" is even."<<endl;
    }
    else
    {
        cout<<n<<" is even."<<endl;
    }
}  

int main()
{
    int no;
    cin>>no;

    is_even_odd(no); // function calling or invoking

    return 0;
}