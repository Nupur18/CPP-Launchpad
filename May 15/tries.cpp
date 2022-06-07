#include<iostream>
#include<unordered_map>
using namespace std;

class node
{
    public:
        char data;
        bool isTerminal;
        unordered_map<char, node*> h;

        // constructor
        node(char ch)
        {
            data = ch;
            isTerminal = false;  // by default false kar dia
        }
};

class trie
{
    node *root;
    public:
        trie()
        {
            root = new node('\0');
        }

        void insert(char *word)
        {
            node *temp = root;
            for (int i = 0; word[i]; i++)   // or word[i] != '\0
            {
                char ch = word[i];
                // agar exist karta hai --> result is 1
                if (temp -> h.count(ch))    // h.count(ch) checks whether current ch is present in hashmap or not
                {
                    temp = temp -> h[ch];
                }
                // agar exist nhi karta hai --> result is 0
                else
                {
                    temp -> h[ch] = new node(ch);
                    temp = temp -> h[ch];
                }
            }
            temp -> isTerminal = true;
        }

        bool search(char *key)
        {
            node *temp = root;
            for(int i = 0; key[i]; i++)
            {
                char ch = key[i];
                if (temp -> h.count(ch))
                {
                    temp = temp -> h[ch];
                }
                else
                {
                    return false;
                }
            }
            return temp -> isTerminal;
        }
};

int main()
{
    trie t;
    char arr[100] = "hello";
    t.insert(arr);
    t.insert("helloworld");
    t.insert("coder");
    t.insert("coding");
    t.insert("hell");

    while (1)
    {
        char key[100];
        // cin>>key;
        cin.getline(key,100);
        if (t.search(key))
        {
            cout<<"Word is present"<<endl;
        }
        else
        {
            cout<<"Word is not present"<<endl;
        }
    }
    
    return 0;
}