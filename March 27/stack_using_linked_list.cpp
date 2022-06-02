#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node *next;
    
    // constructor
    node (int d)
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

        void push(int d)
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

        int top()
        {
            return head -> data;
        }
};

int main()
{
    stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push('A');
    s.push('B');

    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}