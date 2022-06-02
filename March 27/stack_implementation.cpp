#include<iostream>
#include<vector>
using namespace std;

template <typename T>

class stack
{
    private:
        vector <T> v;
    
    public:
        T top()
        {
            return v[v.size() - 1];
        }

        void push(T data)
        {
            v.push_back(data);
        }

        void pop()
        {
            v.pop_back();
        }

        int size()
        {
            return v.size();
        }

        bool empty()
        {
            return v.size() == 0;
        }
};

int main()
{
    // without template
    // stack s;

    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);

    // while (!s.empty())
    // {
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    
    // with template
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