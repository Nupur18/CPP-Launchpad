#include<iostream>
using namespace std;

class node
{
    public:
        int val;
        string key;
        node* next;

        // constructor
        node(string k, int v)
        {
            val = v;
            key = k; 
            next = NULL;
        }
};

class hash_map
{
    int hash_function(string key)
    {
        int ans = 0;
        int mul = 1;
        for (int i = 0; i < key.length(); i++)
        {
            ans += (key[i]%ts * mul%ts)%ts;
            mul = (mul*29)%ts;
        }
        ans = ans%ts;
        return ans;
    }

    void rehashing()
    {
        node** oldarr = arr;
        int old_ts = ts;

        // double the size of table
        arr = new node*[2*ts];
        ts = 2*ts;
        cs = 0;
        for (int i = 0; i < ts; i++)
        {
            arr[i] = NULL;
        }
        // copy key value pairs in new table from old table
        for (int i = 0; i < old_ts; i++)
        {
            node* head = oldarr[i];
            while (head)
            {
                insert(head->key, head->val);
                head = head->next;
            }
            
        }
        delete []oldarr;
    }

    public:
        int ts;     // table size
        int cs;     // current size
        node** arr;

        // constructor
        hash_map(int size = 7)
        {
            cs = 0;
            ts = size;
            arr = new node*[ts];
            for (int i = 0; i < ts; i++)
            {
                arr[i] = NULL;
            }
        }

        void insert(string key, int val)
        {
            int index = hash_function(key);
            node* n = new node(key, val);
            n -> next = arr[index];
            arr[index] = n;
            cs++;
            if ((cs/(ts*1.0)) > 0.6)
            {
                rehashing();
            }
        }

        void print()
        {
            for (int i = 0; i < ts; i++)
            {
                cout<<i<<" --> ";
                node* head = arr[i];
                while (head)
                {
                    cout<<head -> key<<" ";
                    head = head -> next;
                }
                cout<<endl;
            }
        }

        node* search(string key)
        {
            int index = hash_function(key);
            node* head = arr[index];
            while (head)
            {
                if (head -> key == key)
                {
                    return head;
                }
                head = head -> next;
            }
            return NULL;
        }

        int& operator[](string key)
        {
            node* ans = search(key);
            // key is not present --> we have to insert this value in hashmap
            if (ans == NULL)
            {
                int g;  // garbage value
                insert(key,g);
                ans = search(key);
                return ans->val;
            }
            else
            {
                return ans->val;
            }
        }
};

int main()
{
    hash_map h;
    h.insert("mango", 100);
    h.insert("kiwi", 150);
    h.insert("apple", 60);
    h.insert("banana", 180);
    h.insert("watermelon", 200);
    h.insert("strawberry", 120);

    h.print();
    cout<<endl<<endl;

    h["papaya"] = 200;     // insertion
    h.print();
    cout<<endl<<endl;

    cout<<"Price of kiwi is "<<h["kiwi"]<<endl;
    h["kiwi"] = 500;
    cout<<"Price of kiwi is "<<h["kiwi"]<<endl;
    h.print();
    return 0;
}