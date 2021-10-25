#include<iostream>
using namespace std;
int main()
{
    int radius = 10;
    // int *rptr = &radius;    //initialisation
    // int *rptr; 
    int *rptr = NULL; // pointer points to the 0 address memory location
    // or
    // int *rptr = 0; 
    cout<<"Circumference of circle is ";
    cout<<2*3.14*(*rptr);   //cout<<2*3.14*(radius);
    return 0;
}