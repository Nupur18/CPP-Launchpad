#include<iostream>
using namespace std;

void factorial(int no);

int main()
{
    int n;
    cin>>n;
    factorial(n);
    return 0;
}

void factorial(int no)
{
    int answer = 1;
    for (int i = 1; i <= no; i++)
    {
        answer = answer * i;
    }
    cout<<"Factorial is "<<answer;
}