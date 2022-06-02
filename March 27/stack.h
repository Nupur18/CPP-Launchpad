// #include<iostream>  // only to take input or output
#include"node.h"
using namespace std;

template<typename T>

class stack
{
    private:
        node<T> *head;
        int len;

    public:
        // constructor
        stack()
        {
            head = NULL;
            len = 0;
        }

        void push(T d)
        {
            node<T> *n = new node<T>(d);
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
                node<T> *temp = head;
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

        T top()
        {
            return head -> data;
        }
};
