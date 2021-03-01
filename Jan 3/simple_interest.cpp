#include<iostream> 
using namespace std;
int main()
{
    int p, r, t;
    cout<<"Enter principal : ";
    cin>>p;
    cout<<"Enter rate of interest : ";
    cin>>r;
    cout<<"Enter time : ";
    cin>>t;
    float si;
    si = (p*r*t)/100.0;  // si = int/float and float value will be stored in si
    cout<<"Simple interest is "<<si;

    // int p,r,t; 
    // or
    // int p;
    // int r;
    // int t;

    // cin>>p>>r>>t;
    // or
    // cin>>p;
    // cin>>r;
    // cin>>t; 

    return 0;
}