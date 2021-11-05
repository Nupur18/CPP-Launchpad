#include<iostream>
using namespace std;
string s[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

// this will print two zero four eight
void int_to_string(int n)
{
    // base case 
    if (n==0)
    {
        return;
    }
    // recursive case
    int digit = n%10;
    int_to_string(n/10);
    cout<<s[digit]<<" ";
}

// this will print eight four zero two
void int_to_string_reverse(int n)
{
    // base case
    if (n==0)
    {
        return;
    }
    // recursive case
    int digit = n%10;
    cout<<s[digit]<<" ";
    int_to_string_reverse(n/10);
}

int main()
{
    int n;
    cin>>n;
    int_to_string(n);
    cout<<endl;
    int_to_string_reverse(n);
    return 0;
}