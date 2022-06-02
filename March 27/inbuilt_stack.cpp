#include<iostream>
#include<stack>
using namespace std;
int main()
{
    // syntax -->   stack<datatype> name;
    stack<int> s1;

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    while (!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }

    cout<<endl;

    stack<char> s2;

    s2.push('A');
    s2.push('B');
    s2.push('C');
    s2.push('D');
    s2.push('E');

    while (!s2.empty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
    return 0;
}