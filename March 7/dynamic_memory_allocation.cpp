#include<iostream>
using namespace std;
int main()
{
    // int a = 10;

    // primitive data type <-- DMA
    int *aptr = new int;
    *aptr = 50;
    cout<<*aptr<<endl;

    float *fptr = new float;
    *fptr = 14.11;
    cout<<*fptr<<endl;

    // 1D array
    int arr[100];
    int *arrptr = new int[100];
    for (int i = 0; i < 5; i++)
    {
        cin>>*(arrptr+i);   // arr[i]
        // or
        // cin>>arrptr[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout<<*(arrptr+i)<<" ";
        // or
        // cout<<arrptr[i]<<" ";
    }

    // primitive data type <-- DMA
    delete aptr;    // address pe value ko delete kardo 
    aptr = NULL;    // pointer ko garbage value ke pe point nhi karate

    delete fptr;   
    fptr = NULL;

    // array delete
    delete []arrptr;
    arrptr = NULL;
    return 0;
}