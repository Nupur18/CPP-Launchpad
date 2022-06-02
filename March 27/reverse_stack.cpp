#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> s)
{
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

void insert_at_bottom(stack<int> &s, int te)
{
    // base case
    if (s.empty())
    {
        s.push(te);
        return;
    }
    
    int top = s.top();
    s.pop();
    insert_at_bottom(s,te);
    s.push(top);
}

void reverse_stack(stack<int> &s)
{
    // base case
    if (s.empty())
    {
        return;
    }
    
    // recursive case
    int te = s.top();
    s.pop();
    reverse_stack(s);
    insert_at_bottom(s,te);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);

    print(s);
    reverse_stack(s);
    print(s);

    return 0;
}