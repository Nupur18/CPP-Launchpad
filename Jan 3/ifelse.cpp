#include<iostream> 
using namespace std;
int main()
{
    int a;
    cin>>a;
    if (a>=50 && a<=60)
    {
        cout<<"a>=50 && a<=60"<<endl;
    }
    else if (a>=60 && a<=70)
    {
        cout<<"a>=60 && a<=70"<<endl;
    }
    else if (a>=60 || a<=100)
    {
        cout<<"a>=60 || a<=100";
    }
    else
    {
        cout<<"A is not greater than 50."<<endl;
    }
    //if akele ho sakta hai but else if aur else akele nhi ho sakta 
    return 0;
    
}