#include<iostream>
using namespace std;

class node
{
    public:
        char data;
        node *next;
    
    // constructor
    node (char d)
    {
       data = d;
       next = NULL; 
    }
};

class stack
{
    private:
        node *head;
        int len;

    public:
        // constructor
        stack()
        {
            head = NULL;
            len = 0;
        }

        void push(char d)
        {
            node *n = new node(d);
            n -> next = head;
            head = n;
            len ++;
        }

        void pop()
        {
            if (head == NULL)       // stack is empty
            {
                return;
            }
            else if (head -> next == NULL)      // only 1 element in stack
            {
                delete head;
                head = NULL;
                len --;
            }
            else
            {
                node *temp = head;
                head = head -> next;
                delete temp;
                len --;
            }
        }

        bool empty()
        {
            return head==NULL;
        }

        int size()
        {
            return len;
        }

        char top()
        {
            return head -> data;
        }
};

int main()
{
    stack s;

    s.push('A');
    s.push('B');
    s.push('C');
    s.push('D');
    s.push('E');

    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}