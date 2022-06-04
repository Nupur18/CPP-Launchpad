#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node* left;
        node* right;

        // node constructor
        node(int d)
        {
            data = d;
            left = NULL;
            right = NULL;
        }
};

node* build_Tree()
{
    int data;
    cin>>data;
    if (data == -1)
    {
        return NULL;
    }
    else
    {
        node* root = new node(data);
        root -> left = build_Tree();    // left sub tree
        root -> right = build_Tree();   // right sub tree
        return root;
    }
}

void preorder(node *root)   // root lst rst
{
    // base case
    if (root == NULL)
    {
        return;
    }
    
    // recursive case
    cout<<root->data<<" ";
    preorder(root -> left);
    preorder(root -> right);
}

void inorder(node *root)   // lst root rst
{
    // base case
    if (root == NULL)
    {
        return;
    }
    
    // recursive case
    inorder(root -> left);
    cout<<root->data<<" ";
    inorder(root -> right);
}

void postorder(node *root)   // lst rst root
{
    // base case
    if (root == NULL)
    {
        return;
    }
    
    // recursive case
    postorder(root -> left);
    postorder(root -> right);
    cout<<root->data<<" ";
}

int count_node(node* root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }
    
    // recursive case
    return count_node(root -> left) + count_node(root -> right) + 1;
}

int height(node* root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }
    
    // recursive case
    int lh = height(root -> left);
    int rh = height(root -> right);
    return max(lh, rh) + 1;
}

int sum_of_nodes(node* root)
{
    // base case 
    if (root == NULL)
    {
        return 0;
    }

    // recursive case
    return sum_of_nodes(root -> left) + sum_of_nodes(root -> right) + root -> data;
}

void mirror(node* root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    
    // recursive case
    swap(root->left, root->right);
    mirror(root->left);
    mirror(root->right);
}

int diameter(node* root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }
    
    // if diameter is passing through left subtree
    int opt1 = diameter(root -> left);

    // if diameter is passing through right subtree
    int opt2 = diameter(root -> right);

    // if diameter is passing through root node 
    int opt3 = height(root -> left) + height(root -> right);

    return max(opt1, max(opt2, opt3));
}

int main()
{
    node* root = build_Tree();

    cout<<endl<<"Preorder :-"<<endl;
    preorder(root);
    cout<<endl;

    cout<<endl<<"Inorder :-"<<endl;
    inorder(root);
    cout<<endl;

    cout<<endl<<"Postorder :-"<<endl;
    postorder(root);
    cout<<endl;

    cout<<endl<<"The total nodes are "<<count_node(root)<<endl;
    cout<<endl<<"The height of tree is "<<height(root)<<endl;
    cout<<endl<<"The sum of nodes of tree is "<<sum_of_nodes(root)<<endl;
    cout<<endl<<"The diameter of tree is "<<diameter(root)<<endl;
    
    mirror(root);
    cout<<endl<<endl<<"For mirror tree "<<endl;
    cout<<endl<<"Preorder :-"<<endl;
    preorder(root);
    cout<<endl;

    cout<<endl<<"Inorder :-"<<endl;
    inorder(root);
    cout<<endl;

    cout<<endl<<"Postorder :-"<<endl;
    postorder(root);
    cout<<endl;

    return 0;
}

// Tree        8 3 1 -1 -1 6 4 -1 -1 7 -1 -1 16 -1 14 13 -1 -1 -1
// Preorder    8 3 1 6 4 7 16 14 13 
// Inorder     1 3 4 6 7 8 16 13 14 
// Postorder   1 4 7 6 3 13 14 16 8
