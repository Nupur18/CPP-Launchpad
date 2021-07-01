#include<iostream>
using namespace std;
int y = 40; // global variable
int main()
{
    // int x = 10;
    // cout<<"value of x is "<<x<<endl; // 10

    // if (x>0)
    // {
    //     int x = 30;
    //     int y = 20;
    //     cout<<"value of x is "<<x<<endl; // 30
    //     cout<<"value of y is "<<y<<endl; // 20
    // }
    // cout<<"value of x is "<<x<<endl;
    // cout<<"value of y is "<<y<<endl;

    

    // int x = 10;
    // cout<<"value of x is "<<x<<endl; // 10

    // if (x>0)
    // {
    //     int y = 20;
    //     cout<<"value of x is "<<x<<endl; // 10
    //     cout<<"value of y is "<<y<<endl; // 20
    // }
    // cout<<"value of x is "<<x<<endl;
    // cout<<"value of y is "<<y<<endl;
    
    // int x = 10;
    // cout<<"value of x is "<<x<<endl; // 10

    // if (x>0)
    // {
    //     int y = 20;
    //     cout<<"value of x is "<<x<<endl; // 10
    //     cout<<"value of y is "<<y<<endl; // 20
    // }
    // cout<<"value of y is "<<y<<endl; //40

    
    int x = 10;
    int y = 60;
    cout<<"value of x is "<<x<<endl; // 10

    if (x>0)
    {
        int y = 20;
        cout<<"value of x is "<<x<<endl; // 10
        cout<<"value of y is "<<::y<<endl; // 20
    }
    cout<<"value of y is "<<::y<<endl; //40
    return 0;
}