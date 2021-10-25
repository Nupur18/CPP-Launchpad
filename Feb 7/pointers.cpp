#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    float f = 10.14;
    double d = 40.345;

    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of f is "<<f<<endl;
    cout<<"Value of d is "<<d<<endl;

    cout<<"Address of a is "<<&a<<endl;
    cout<<"Address of f is "<<&f<<endl;
    cout<<"Address of d is "<<&d<<endl;

    cout<<"Size of a is "<<sizeof(a)<<endl;
    cout<<"Size of f is "<<sizeof(f)<<endl;
    cout<<"Size of d is "<<sizeof(d)<<endl;

    cout<<"Size of &a is "<<sizeof(&a)<<endl;
    cout<<"Size of &f is "<<sizeof(&f)<<endl;
    cout<<"Size of &d is "<<sizeof(&d)<<endl;

// Pointers are used to store addresses
    int* aptr = &a;     // or int *aptr = &a;   // initialisation
    // or we can do like this :-
    // int *aptr;
    // aptr = &a;   // assignment
    float* fptr = &f;
    double* dptr = &d;
    cout<<"Address of a is "<<aptr<<endl;
    cout<<"Address of f is "<<fptr<<endl;
    cout<<"Address of d is "<<dptr<<endl;

    cout<<"Address of a+1 is "<<aptr+1<<endl;
    cout<<"Address of f+1 is "<<fptr+1<<endl;
    cout<<"Address of d+1 is "<<dptr+1<<endl;

    cout<<"Address of a+2 is "<<aptr+2<<endl;
    cout<<"Address of f+2 is "<<fptr+2<<endl;
    cout<<"Address of d+2 is "<<dptr+2<<endl;

    char ch = 'A';
    cout<<"Value of ch is"<<ch<<endl;
    cout<<"Address of ch is "<<&ch<<endl;    // it will give wrong result

    // fool compiler
    cout<<"Address of ch is "<<(int*)&ch<<endl;
    // or
    // cout<<"Address of ch is "<<(float*)&ch<<endl;
    // or
    // cout<<"Address of ch is "<<(double*)&ch<<endl;
    // or
    // cout<<"Address of ch is "<<(void*)&ch<<endl;

    cout<<"Address of ch+1 is "<<(void*)((&ch+1))<<endl;
    cout<<"Address of ch+1 is "<<(void*)((&ch+2))<<endl;

    cout<<*aptr<<endl; // gives the value of bucket of which it will contain the address 
    cout<<*fptr<<endl;
    cout<<*dptr<<endl;
    return 0;
}