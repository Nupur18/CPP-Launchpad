#include<iostream>
using namespace std;
char keys[][10] = {" ", " ", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

void phone_keypad(char inp[], int i, char out[], int j)
{
    // base case 
    if (inp[i] == '\0')
    {
        out[j] = '\0';
        cout<<out<<endl;
        return;
    }
    
    // recursive case 
        // "23764" 
    int digit =  inp[i] - '0'; //'2
    for (int k = 0; keys[digit][k] != '\0'; k++)
    {
        out[j] = keys[digit][k];
        phone_keypad(inp, i+1, out, j+1);
    }
    
}

int main()
{
    char inp[100];
    cin>>inp;
    char out[100];
    phone_keypad(inp, 0, out, 0);
    return 0;
}