#include<iostream>
using namespace std;
int main()
{
    int i=10;
    // do while loop ek baar chalega hi chalega
    do
    {
        cout<<"value of i is "<<i<<endl;
        i++;
    } while (i<0);
    // while (i>0); infinite loop

    int j=10;
    do
    {
        cout<<"value of j is "<<j<<endl;
        j++;
    } while (j<12);
    return 0;
}
