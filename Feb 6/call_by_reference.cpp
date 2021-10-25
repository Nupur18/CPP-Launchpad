#include<iostream>
using namespace std;

void update(int &a)
{
    int &z = a;
    a = a+1; //update
    cout<<"Value of a inside update is "<<a<<endl;  //2 11
    cout<<"Value of z inside update is "<<a<<endl;
}

int main()
{
    int a = 10;
    cout<<"Value of a is "<<a<<endl;    // 1 10
    update(a);  // you can give name of variable as well as value like update(10);
    cout<<"Value of a inside main after increment is "<<a<<endl;    //3 11

    int x = 30; // x is variable
    int &y = x; // y is reference
    int &z = y; // z is reference of reference 
    cout<<"Value of x is "<<x<<endl;
    cout<<"Value of y is "<<y<<endl;
    cout<<"Value of z is "<<z<<endl;

    return 0;
}