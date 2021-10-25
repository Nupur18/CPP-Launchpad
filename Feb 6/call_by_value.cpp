#include<iostream>
using namespace std;

void update(int a)
{
    a = a+1; //update
    cout<<"Value of a inside update is "<<a<<endl;  //2 11
}

int main()
{
    int a = 10;
    cout<<"Value of a is "<<a<<endl;    // 1 10
    update(a);
    cout<<"Value of a inside main after increment is "<<a<<endl;    //3 10
    return 0;
}