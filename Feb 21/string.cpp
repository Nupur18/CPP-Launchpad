#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    // first way to initialise string
    string s;
    // cin>>s; // whitespace ignore karega
    // getline(cin, string_name)        --> SYNTAX
    getline(cin, s); // string ko input lene ke liye jab whitespace ignore na karna ho
    cout<<s<<endl;
    
    // second way to initialise string
    string s1 = "coding blocks";
    cout<<s1<<endl;

    // third way to initialise string
    string s2("i am a student");
    cout<<s2<<endl;

    // fourth way to initialise string
    char a[] = "i live in Delhi";    
    cout<<a<<endl;

    // fifth way to initialise string
    string s3 = a;      // character array is basically a string, to yaha error nhi aayega
    cout<<s3<<endl;

    // sixth way to initialise string
    string s4(a);
    cout<<s4<<endl;


    // CONCATENATION (we can use arithmetic operators on strings)
    string s8 = "ABC";
    string s9 = "defghijklmno";

    if (s8 > s9)
    {
        cout<<s8<<endl;
    }
    else
    {
        cout<<s9<<endl;

    }

    s8 = s9 + s8;
    cout<<s8<<endl;
    cout<<s9<<endl;

    s8 = s8 + s9;
    cout<<s8<<endl;
    cout<<s9<<endl;
    

    string st = "hello i am a girl";
    cout<<st.substr(1)<<endl;   // substring ko jis character se start karna hai uska index dedo 
    cout<<st.substr(3,7)<<endl;
    return 0;
}