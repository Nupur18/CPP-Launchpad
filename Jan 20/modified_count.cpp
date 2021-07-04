#include<iostream>
using namespace std;
int main()
{
    int numbers = 0, alphabets = 0, whitespaces = 0, special_symbols = 0;
    char ch;
    ch = cin.get();
    while (ch != '$')
    {
        if (ch>='0' && ch<='9')
        {
            numbers++;
        }
        else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        {
            alphabets++;
        }
        else if (ch ==' ' || ch == '\n' || ch == '\t')
        {
            whitespaces++;
        }
        else
        {
            special_symbols++;
        }
        ch = cin.get();
    }
    cout<<"Total number of numbers are "<<numbers<<endl;
    cout<<"Total number of alphabets are "<<alphabets<<endl;
    cout<<"Total number of whitespaces are "<<whitespaces<<endl;
    cout<<"Total number of special symbols are "<<special_symbols<<endl;
    return 0;
}