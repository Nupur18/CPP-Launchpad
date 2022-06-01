#include<iostream>
using namespace std;

class node
{
    public :
        int data;
        node *next;

        // constructor 1st way
        node(int d)
        {
            data = d;
            next = NULL;
        }

        // constructor 2nd way
        // node(int d) : data(d), next(NULL)
        // {
        //     /
        // }
};

int length(node* head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head -> next;
    }
    return cnt;
}

int length_recursive(node* head)
{
    // base case
    if (head == NULL)
    {
        return 0;
    }

    // recursive case
    return 1 + length_recursive(head -> next);
}

void insert_at_front(node* &head, node* &tail, int data)
{
    node *n = new node(data);   // constructor call hoga 

    // if is for when head and tail point to NULL
    if (head == NULL)   // agar abhi tak linked list bana hi nhi
    {
        head = n;
        tail =n;
    }
    else
    {
        n -> next = head;
        head = n;
    }
}

void insert_at_end(node* &head, node* &tail, int data)
{
    node *n = new node(data);   // constructor call hoga 

    if (head == NULL)   
    {
        head = n;
        tail = n;
    }
    else
    {
        tail -> next = n;
        tail = n;
    }
}

void insert_at_any_position(node* &head, node* &tail, int data, int position)
{
    if (position == 0)
    {
        insert_at_front(head, tail, data);
    }
    else if (position >= length(head))
    {
        insert_at_end(head, tail, data);
    }
    else
    {
        node* temp = head;
        node *n = new node(data);
        for (int i = 1; i <= position-1; i++)   // if position 3, i chalega for 1 & 2
        {
            temp = temp -> next;
        }
        n -> next = temp -> next;
        temp -> next = n;
    }
    
}

void print_linked_list(node *head)
{
    while (head != NULL)  // or head != tail->next   or head -> != NULL
    {
        cout<<head -> data<<" -> ";
        head = head -> next;
    }
    cout<<"END";
}
int main()
{
    // node n1(3);
    // node n2(4);
    // n1.next = &n2;
    // cout<<n1.data<<" "<<(*n1.next).data<<endl;
    // or 
    // cout<<n1.data<<" "<<n1.next -> data<<endl;

    node *head = NULL, *tail = NULL;
    // insert_at_front(head, tail, data);
    insert_at_front(head, tail, 1);     // 1
    insert_at_front(head, tail, 2);     // 2->1
    insert_at_front(head, tail, 3);     // 3->2->1
    insert_at_front(head, tail, 4);     // 4->3->2->1
    insert_at_front(head, tail, 5);     // 5->4->3->2->1
    print_linked_list(head);

    cout<<endl;
    insert_at_end(head, tail, 6);       // 5->4->3->2->1->6
    insert_at_end(head, tail, 7);       // 5->4->3->2->1->6->7
    insert_at_end(head, tail, 8);       // 5->4->3->2->1->6->7->8
    print_linked_list(head);

    cout<<endl<<"Length of linked list is "<<length(head)<<endl;
    insert_at_any_position(head, tail, 70, 2);
    print_linked_list(head);
    cout<<endl<<"Length of linked list is "<<length_recursive(head)<<endl;
    return 0;
}