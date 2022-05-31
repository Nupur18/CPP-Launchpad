#include<iostream>
#include<algorithm>
using namespace std;
string s1;

void dictionary_order(string in, string out)
{
    // base case
    if (in.length()==0)
    {
        if (out>s1)
        {
            cout<<out<<endl;
        }
        return;
    }
    
    // recursive case 
    for (int i = 0; i < in.length(); i++)
    {
        string choti_string = in.substr(0,i) + in.substr(i+1);
        dictionary_order(choti_string, out+in[i]);
    }
    
}
int main()
{
    string s;   // cab
    cin>>s;
    s1 = s;
    sort(s.begin(), s.end());   // permutations sorted chahiye --> abc
    dictionary_order(s, "");
    return 0;
}