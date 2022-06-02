#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(char *arr)
{
    stack <char> s;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        char ch = arr[i];
        switch (ch)
        {
        case '(':
        case '{':
        case '[':
            s.push(ch);
            break;
        
        case ')':
            if (!s.empty() && s.top()=='(')
            {
                s.pop();
            }
            else
            {
                return false;
            }
            break;
        case '}':
            if (!s.empty() && s.top()=='{')
            {
                s.pop();
            }
            else
            {
                return false;
            }
            break;
        case ']':
            if (!s.empty() && s.top()=='[')
            {
                s.pop();
            }
            else
            {
                return false;
            }
            break;
        default:
            break;
        }
    }
    if (s.empty())
    {
        return true;
    }
    return false;
}

int main()
{
    char arr[] = "{(a+b)+c*(d+e)}";
    if (isBalanced(arr))
    {
        cout<<"Balanced expression"<<endl;
    }
    else
    {
        cout<<"Not balanced expression"<<endl;
    }
    return 0;
}