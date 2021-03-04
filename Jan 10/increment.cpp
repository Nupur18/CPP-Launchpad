#include<iostream>
using namespace std;
int main ()
{
    int p = 10;
    cout<<"before inc "<<p<<endl;
    p = p++;    //doubt
    cout<<"after inc "<<p<<endl;
    cout<<p<<endl;

    int x = 10, y;
    y = x++;
    cout<<"x is "<<x<<endl;
    cout<<"y is "<<y<<endl;

    int a=0, b=10;
    if (a>0 && a++)
    {
        a=a+1;
    }
    else
    {
        b=b+1;
    }
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b  is "<<b<<endl;

    a=0, b=10;
    if (a++ && a>0)
    {
        a=a+1;
    }
    else
    {
        b=b+1;
    }
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b  is "<<b<<endl;
    
    a=0, b=10;
    if (++a && a>0)
    {
        a=a+1;
    }
    else
    {
        b=b+1;
    }
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b  is "<<b<<endl;

    a=0, b=10;
    if (b>0 || a++)
    {
        a=a+1;
    }
    else
    {
        b=b+1;
    }
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b  is "<<b<<endl;

    a=0, b=10;
    if (a++ || b>0)
    {
        a=a+1;
    }
    else
    {
        b=b+1;
    }
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b  is "<<b<<endl;

    a=0, b=10;
    if (++a || b>0)
    {
        a=a+1;
    }
    else
    {
        b=b+1;
    }
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b  is "<<b<<endl;

    a=0, b=10;
    if (++a || b<0)
    {
        a=a+1;
    }
    else
    {
        b=b+1;
    }
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b  is "<<b<<endl;
    return 0;
}