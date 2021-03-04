#include<iostream>
using namespace std;
int main ()
{
    int a = 10;
    char ch = 'A';
    bool israining = 5;
    float f = 10.4;
    double x = 10.4;
    // sizeof operator me hum ya to datatype de sakte hai ya to variable name ya to direct value
    cout<<sizeof(int)<<endl;    
    cout<<sizeof(a)<<endl;      
    cout<<sizeof(10)<<endl; 

    cout<<sizeof(char)<<endl;
    cout<<sizeof(ch)<<endl;
    cout<<sizeof('A')<<endl;

    cout<<sizeof(bool)<<endl;
    cout<<sizeof(israining)<<endl; 
    cout<<sizeof(5)<<endl;  
    // 5 is an integer which will take 4 bytes

    cout<<sizeof(float)<<endl;
    cout<<sizeof(f)<<endl;
    cout<<sizeof(10.4)<<endl;
    // here 10.4 is considered as double, hence 8 aaya. 4 ya 8 me se kuch bhi de sakta hai depending on compiler
    cout<<sizeof(10.4f)<<endl;  //idhar compiler ne 10.4 ko float le lia

    cout<<sizeof(double)<<endl;
    cout<<sizeof(x)<<endl;
    cout<<sizeof(10.4)<<endl; // this step is decided by compiler
    
    return 0;
}