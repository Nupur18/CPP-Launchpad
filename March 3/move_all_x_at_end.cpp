#include<iostream>
using namespace std;

string x_piche_le_jao(string s)
{
    // base case
    if (s.length() == 0)
    {
        string x = "";  // null string
        return x;
    }
    
    // recusrive case 
    string a = s.substr(0,1);   // pehla character lega
    string chotiString = x_piche_le_jao(s.substr(1));
    if (a == "x")   // a is string here
    {
        string badiString = chotiString + a;
        return badiString;
    }
    else
    {
        string badiString =  a + chotiString;
        return badiString;
    }
    
}

int main()
{
    string s;
    cin>>s;
    string x = x_piche_le_jao(s);
    cout<<"String after moving all x at end is :-"<<endl<<x;
    return 0;
}